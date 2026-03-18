/*
 * XREFs of ?iXlateBitfieldsToBitfields@@YAKPEAU_XLATEOBJ@@K@Z @ 0x1401C24E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall iXlateBitfieldsToBitfields(struct _XLATEOBJ *a1, unsigned int a2)
{
  ULONG *pulXlate; // [rsp+30h] [rbp+8h] BYREF

  pulXlate = a1[1].pulXlate;
  XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, a2);
  pulXlate = *(ULONG **)&a1[2].iUniq;
  return XEPALOBJ::ulDispatchGFPEFunction(&pulXlate, pulXlate[24]);
}
