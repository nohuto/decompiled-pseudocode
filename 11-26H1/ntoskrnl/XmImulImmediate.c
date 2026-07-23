/*
 * XREFs of XmImulImmediate @ 0x1405AEC90
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1404A1EFC (XmGetImmediateSourceValue.c)
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmImulImmediate(__int64 a1)
{
  bool v2; // cf
  unsigned __int16 *v3; // rbx
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 138) != 0;
  v5 = 0;
  *(_DWORD *)(a1 + 120) = v2 ? 3 : 1;
  v3 = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, (int *)&v5);
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, *(_DWORD *)(a1 + 112) & 2);
  XmSetDestinationValue(a1, v3);
  result = 1LL;
  *(_QWORD *)(a1 + 88) = a1 + 4 * (v5 + 6LL);
  return result;
}
