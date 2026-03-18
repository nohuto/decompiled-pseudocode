/*
 * XREFs of IsPageTableSegmentAperture @ 0x1400B443C
 * Callers:
 *     InitializeGpuVaState @ 0x1400B3BBC (InitializeGpuVaState.c)
 * Callees:
 *     <none>
 */

char __fastcall IsPageTableSegmentAperture(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax

  if ( !a2 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * (unsigned __int16)(a2 - 1));
  v4 = v3 + 64;
  if ( !v3 )
    v4 = 56LL;
  return *(_BYTE *)v4 & 1;
}
