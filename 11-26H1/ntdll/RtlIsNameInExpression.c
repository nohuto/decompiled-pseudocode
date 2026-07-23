/*
 * XREFs of RtlIsNameInExpression @ 0x1800217D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180021848 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180021E90 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 */

BOOLEAN __cdecl RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // edi
  NTSTATUS v6; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  *(_OWORD *)BaseAddress = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(BaseAddress, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = (PUNICODE_STRING)BaseAddress;
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( BaseAddress[1] )
    RtlpSysVolFree(BaseAddress[1]);
  return IsNameInExpressionPrivate;
}
