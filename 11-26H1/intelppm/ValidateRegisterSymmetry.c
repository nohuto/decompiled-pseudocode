/*
 * XREFs of ValidateRegisterSymmetry @ 0x140035F70
 * Callers:
 *     ValidateCpcResourcePrioritiesSymmetry @ 0x140034FCC (ValidateCpcResourcePrioritiesSymmetry.c)
 *     ValidateCpcSymmetry @ 0x1400351D0 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1400356CC (ValidatePctPtcSymmetry.c)
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
