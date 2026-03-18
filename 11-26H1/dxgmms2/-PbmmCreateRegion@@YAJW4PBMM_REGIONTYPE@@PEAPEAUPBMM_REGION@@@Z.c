/*
 * XREFs of ?PbmmCreateRegion@@YAJW4PBMM_REGIONTYPE@@PEAPEAUPBMM_REGION@@@Z @ 0x1400540D8
 * Callers:
 *     ?PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z @ 0x140053BB8 (-PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall PbmmCreateRegion(__int64 a1, _QWORD *a2)
{
  char *v3; // rax
  char *v4; // rbx
  __int64 v5; // r8
  char *v6; // rcx
  unsigned int v7; // edx
  char *v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx

  *a2 = 0LL;
  v3 = (char *)operator new(1544LL, 0x366D6250u, 256LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x608uLL);
    v5 = 4LL;
    v6 = v4;
    do
    {
      v7 = 0;
      v8 = v4 + 8;
      do
      {
        *((_DWORD *)v8 + 2) = 0;
        *(_QWORD *)v8 = v4;
        *((_QWORD *)v8 - 1) = v4;
        v4 += 24;
        *((_DWORD *)v8 + 3) = v7;
        v8 += 24;
        ++v7;
      }
      while ( v7 < 0x10 );
      --v5;
    }
    while ( v5 );
    *((_DWORD *)v6 + 384) &= ~1u;
    result = 0LL;
    *a2 = v6;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A898);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 42;
    DxgkLogInternalTriageEvent(v10, 262145LL);
    return 3221225495LL;
  }
  return result;
}
