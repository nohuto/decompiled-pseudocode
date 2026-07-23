/*
 * XREFs of HalpPciWriteMmConfigUchar @ 0x140727A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciWriteMmConfigUchar(__int64 a1, _BYTE *a2, unsigned int a3)
{
  *(_BYTE *)(a1 + a3) = *a2;
  return 1LL;
}
