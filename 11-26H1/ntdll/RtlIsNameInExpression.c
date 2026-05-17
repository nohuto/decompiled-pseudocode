/*
 * XREFs of RtlIsNameInExpression @ 0x180036670
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsNameInExpressionPrivate @ 0x1800366E8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180036D30 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 */

char __fastcall RtlIsNameInExpression(int a1, __int128 *a2, char a3, __int64 a4)
{
  int v6; // eax
  char IsNameInExpressionPrivate; // bl
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( a3 && !a4 )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&v9);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    a2 = &v9;
    a3 = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(a1, (_DWORD)a2, a3, 0, a4);
  if ( *((_QWORD *)&v9 + 1) )
    RtlpSysVolFree(*((_QWORD *)&v9 + 1));
  return IsNameInExpressionPrivate;
}
