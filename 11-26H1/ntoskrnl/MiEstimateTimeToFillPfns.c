/*
 * XREFs of MiEstimateTimeToFillPfns @ 0x1406ED4E8
 * Callers:
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 * Callees:
 *     MiTimeToWriteMemory @ 0x140486350 (MiTimeToWriteMemory.c)
 */

unsigned __int64 __fastcall MiEstimateTimeToFillPfns(unsigned int a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rdx

  v2 = 48 * a2;
  v3 = *(_QWORD *)(56320LL * a1 + qword_140E37E50 + 14192);
  if ( v3
    && (v4 = (unsigned int)(KeGetCurrentPrcb()->PowerState.ArchitecturalEfficiencyClass != 1) + 1,
        *(_DWORD *)(504 * v4 + v3 + 236)) )
  {
    return MiTimeToWriteMemory(a1, v4, 1, 0, v2);
  }
  else
  {
    return v2 >> 11;
  }
}
