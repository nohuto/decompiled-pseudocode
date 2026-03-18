/*
 * XREFs of XmShiftDouble @ 0x1405AC910
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmSetDestinationValue @ 0x1404A8950 (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x1404A8AE0 (XmGetCodeByte.c)
 *     XmSetSourceValue @ 0x1404A8BDC (XmSetSourceValue.c)
 */

__int64 __fastcall XmShiftDouble(__int64 a1)
{
  bool v2; // cf
  unsigned __int16 *v3; // rdi
  char CodeByte; // al
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 138) != 0;
  v8 = 0;
  *(_DWORD *)(a1 + 120) = v2 ? 3 : 1;
  v3 = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, (int *)&v8);
  if ( (*(_DWORD *)(a1 + 112) & 1) != 0 )
    CodeByte = *(_BYTE *)(a1 + 28);
  else
    CodeByte = XmGetCodeByte(a1);
  v5 = v8 + 6LL;
  *(_BYTE *)(a1 + 144) = CodeByte & 0x1F;
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * v5));
  XmSetDestinationValue(v6, v3);
  return 1LL;
}
