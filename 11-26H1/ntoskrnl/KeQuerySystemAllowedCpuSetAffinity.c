/*
 * XREFs of KeQuerySystemAllowedCpuSetAffinity @ 0x140255A60
 * Callers:
 *     PpmCheckContinueExecution @ 0x140254D58 (PpmCheckContinueExecution.c)
 *     PpmParkSteerInterrupts @ 0x140255B30 (PpmParkSteerInterrupts.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 KeQuerySystemAllowedCpuSetAffinity()
{
  __int64 v0; // rbx
  __int64 result; // rax
  unsigned int v2; // esi
  unsigned int v3; // r8d
  unsigned __int64 *v4; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // r11
  unsigned __int64 v7; // rdx

  do
  {
    while ( 1 )
    {
      v0 = KiCpuSetSequence;
      if ( (KiCpuSetSequence & 1) == 0 )
        break;
      _mm_pause();
    }
    if ( PpmCachedSystemAllowedCpuSetVersion == KiCpuSetSequence )
      return result;
    memset_0(&PpmCachedSystemAllowedCpuSet.8, 0, 8LL * PpmCachedSystemAllowedCpuSet.Count);
    PpmCachedSystemAllowedCpuSet.Count = 1;
    if ( !KiRestrictedSystemCpuSetsActive )
    {
      RtlpCopyAffinityEx(
        &PpmCachedSystemAllowedCpuSet,
        PpmCachedSystemAllowedCpuSet.Size,
        (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
      goto LABEL_7;
    }
    v2 = (unsigned __int16)KiActiveGroups;
    v3 = 0;
    if ( KiActiveGroups )
    {
      v4 = (unsigned __int64 *)&KiSystemAllowedCpuSets;
      while ( 1 )
      {
        v5 = *v4;
        v6 = 0LL;
        if ( !*v4 )
          goto LABEL_18;
        do
        {
          _BitScanForward64(&v7, v5);
          v6 |= *((_QWORD *)KiCpuSetAffinities + 64 * v3 + (unsigned int)v7);
          v5 &= ~(1LL << v7);
        }
        while ( v5 );
        if ( !v6 )
          goto LABEL_18;
        if ( PpmCachedSystemAllowedCpuSet.Count > (unsigned __int16)v3 )
          goto LABEL_17;
        if ( PpmCachedSystemAllowedCpuSet.Size > (unsigned __int16)v3 )
          break;
LABEL_18:
        ++v3;
        v4 += 2;
        if ( v3 >= v2 )
          goto LABEL_7;
      }
      PpmCachedSystemAllowedCpuSet.Count = v3 + 1;
LABEL_17:
      PpmCachedSystemAllowedCpuSet.Bitmap[(unsigned __int16)v3] |= v6;
      goto LABEL_18;
    }
LABEL_7:
    result = KiCpuSetSequence;
  }
  while ( KiCpuSetSequence != v0 );
  PpmCachedSystemAllowedCpuSetVersion = v0;
  return result;
}
