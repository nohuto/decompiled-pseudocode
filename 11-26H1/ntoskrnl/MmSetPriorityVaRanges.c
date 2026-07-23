/*
 * XREFs of MmSetPriorityVaRanges @ 0x14077EE18
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140393844 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 * Callees:
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 */

__int64 __fastcall MmSetPriorityVaRanges(int a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return MiProcessVaRangesInfoClass(a1, a2, 1, (unsigned int)&v4, (__int64)KeGetCurrentThread()->ApcState.Process, 0);
}
