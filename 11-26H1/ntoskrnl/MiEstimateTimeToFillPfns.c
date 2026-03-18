/*
 * XREFs of MiEstimateTimeToFillPfns @ 0x1406E884C
 * Callers:
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406EE130 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiCreateDynamicPfns @ 0x140865E98 (MiCreateDynamicPfns.c)
 * Callees:
 *     MiTimeToWriteMemory @ 0x14048C810 (MiTimeToWriteMemory.c)
 */

unsigned __int64 __fastcall MiEstimateTimeToFillPfns(unsigned int a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rdx

  v2 = 48 * a2;
  v3 = *(_QWORD *)(56320LL * a1 + qword_140E37CD0 + 14192);
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
