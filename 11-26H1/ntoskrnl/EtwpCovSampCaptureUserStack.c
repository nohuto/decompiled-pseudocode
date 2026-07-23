/*
 * XREFs of EtwpCovSampCaptureUserStack @ 0x140A36CA0
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x140A36414 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     EtwpCovSampCaptureBufferOptimizeIP @ 0x1404802F0 (EtwpCovSampCaptureBufferOptimizeIP.c)
 */

__int64 __fastcall EtwpCovSampCaptureUserStack(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edx
  ULONG v4; // eax

  if ( KeGetCurrentThread()->ApcState.Process[3].Padding[5] )
    return 3221225659LL;
  v2 = *(unsigned __int16 *)(a1 + 62);
  v3 = *(unsigned __int16 *)(a1 + 60);
  if ( (unsigned __int16)v3 < (unsigned __int16)v2 )
    return 3221225701LL;
  v4 = RtlWalkFrameChain((PVOID *)(a1 + 64 + 8 * v2), v3 - v2, 1u);
  if ( !v4 )
    return 3221226021LL;
  *(_WORD *)(a1 + 62) += v4;
  *(_DWORD *)(a1 + 56) |= 2u;
  EtwpCovSampCaptureBufferOptimizeIP(a1);
  return 0LL;
}
