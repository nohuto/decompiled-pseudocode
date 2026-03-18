/*
 * XREFs of ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJXZ @ 0x1400BC4FC
 * Callers:
 *     ?VidMmInitializePbmmSegment@@YAJPEAUVIDMM_SEGMENT_PBMM@@@Z @ 0x140050B28 (-VidMmInitializePbmmSegment@@YAJPEAUVIDMM_SEGMENT_PBMM@@@Z.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400BE6C0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::Init(VIDMM_CPU_HOST_APERTURE *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // ecx
  __int64 v8; // rcx

  v2 = 4LL * *((unsigned int *)this + 17);
  if ( !is_mul_ok(*((unsigned int *)this + 17), 4uLL) )
    v2 = -1LL;
  v3 = operator new[](v2, 0x36346956u, 258LL);
  v4 = 0;
  *((_QWORD *)this + 5) = v3;
  if ( v3 )
  {
    v7 = *((_DWORD *)this + 17);
    if ( v7 != 1 )
    {
      do
      {
        v8 = v4++;
        *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v8) = v4;
        v7 = *((_DWORD *)this + 17);
      }
      while ( v4 < v7 - 1 );
    }
    *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)(v7 - 1)) = -1;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A820);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 113;
    DxgkLogInternalTriageEvent(v5, 262145LL);
    return 3221225495LL;
  }
}
