/*
 * XREFs of MiIsActiveSystemHotPatch @ 0x140877074
 * Callers:
 *     MiLogHotPatchRundown @ 0x140878A8C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 * Callees:
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 */

__int64 __fastcall MiIsActiveSystemHotPatch(__int64 a1)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // edx

  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80u) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(BaseLoaderPortion + 248);
  if ( !v2 )
    return 0LL;
  v3 = MiGetBaseLoaderPortion(v2);
  LOBYTE(v5) = *(_QWORD *)(v3 + 248) == v4;
  return v5;
}
