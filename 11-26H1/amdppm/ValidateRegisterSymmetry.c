/*
 * XREFs of ValidateRegisterSymmetry @ 0x140032064
 * Callers:
 *     ValidateCpcResourcePrioritiesSymmetry @ 0x140030E8C (ValidateCpcResourcePrioritiesSymmetry.c)
 *     ValidateCpcSymmetry @ 0x140031090 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x14003165C (ValidatePctPtcSymmetry.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateRegisterSymmetry(_BYTE *a1, const void *a2)
{
  SIZE_T v2; // rbx

  if ( !*a1 || (v2 = 12LL, *a1 == 10) )
    v2 = 2LL;
  return RtlCompareMemory(a1, a2, v2) == v2;
}
