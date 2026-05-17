/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x180111D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsNameInExpressionPrivate @ 0x1800366E8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180036D30 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 */

char __fastcall RtlIsNameInUnUpcasedExpression(
        UNICODE_STRING *a1,
        UNICODE_STRING *p_UnicodeString,
        char a3,
        __int64 a4)
{
  int v6; // eax
  int v7; // eax
  char IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11.Buffer = 0LL;
  if ( a3 && !a4 )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &p_UnicodeString->Length);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v7 = RtlpUpcaseUnicodeStringPrivate((__int64)&v11, &a1->Length);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    p_UnicodeString = &UnicodeString;
    a1 = &v11;
    a3 = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(&a1->Length, &p_UnicodeString->Length, a3, 1, a4);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( v11.Buffer )
    RtlFreeAnsiString(&v11);
  return IsNameInExpressionPrivate;
}
