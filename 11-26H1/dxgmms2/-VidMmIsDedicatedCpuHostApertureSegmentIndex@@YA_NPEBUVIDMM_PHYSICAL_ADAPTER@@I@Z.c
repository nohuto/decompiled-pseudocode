/*
 * XREFs of ?VidMmIsDedicatedCpuHostApertureSegmentIndex@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z @ 0x14004F768
 * Callers:
 *     InitializeGpuVaState @ 0x1400B3BBC (InitializeGpuVaState.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidMmIsDedicatedCpuHostApertureSegmentIndex(
        const struct VIDMM_PHYSICAL_ADAPTER *a1,
        unsigned int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a1 + 28);
  return _bittest(&v2, a2);
}
