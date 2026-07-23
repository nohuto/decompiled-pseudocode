/*
 * XREFs of XmGeneralRegister @ 0x1405AE900
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

__int64 __fastcall XmGeneralRegister(__int64 a1)
{
  bool v2; // cf
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 138) != 0;
  v4 = 0;
  *(_DWORD *)(a1 + 120) = v2 ? 3 : 1;
  XmEvaluateAddressSpecifier(a1, (int *)&v4);
  if ( !*(_BYTE *)(a1 + 142) )
    longjmp((_JBTYPE *)(a1 + 160), 10);
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * (v4 + 6LL)));
  result = 1LL;
  *(_QWORD *)(a1 + 88) = a1 + 4 * (v4 + 6LL);
  return result;
}
