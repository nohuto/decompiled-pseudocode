/*
 * XREFs of ?VidMmIsDedicatedMemoryCpuVisibleSegmentIndex@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z @ 0x14004F77C
 * Callers:
 *     InitializeGpuVaState @ 0x1400B3BBC (InitializeGpuVaState.c)
 * Callees:
 *     <none>
 */

char __fastcall VidMmIsDedicatedMemoryCpuVisibleSegmentIndex(const struct VIDMM_PHYSICAL_ADAPTER *a1, char a2)
{
  char v4; // dl

  v4 = 1;
  if ( ((1 << a2) & *((_DWORD *)a1 + 27)) == 0 || ((1 << a2) & *((_DWORD *)a1 + 21)) == 0 )
    return 0;
  return v4;
}
