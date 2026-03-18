/*
 * XREFs of VerifyAllocationForSubmissionPhysical @ 0x1400EBD5C
 * Callers:
 *     ?VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z @ 0x1400EBC00 (-VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VerifyAllocationForSubmissionPhysical(__int64 a1, __int64 **a2)
{
  __int64 v3; // rcx
  __int16 v4; // dx
  __int64 v6; // rcx

  v3 = **a2;
  if ( (*(_DWORD *)(v3 + 24) & 0x10000) != 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 9120;
  }
  else
  {
    v4 = *(_WORD *)(*(_QWORD *)(v3 + 368) + 8LL);
    if ( v4 == 2 || v4 == 3 )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 9127;
    }
    else
    {
      if ( (*((_BYTE *)a2 + 28) & 3) == 2 )
        return 0LL;
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 9137;
    }
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
  }
  return 3221225473LL;
}
