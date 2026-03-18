/*
 * XREFs of ?VidMmInitializePbmmSegment@@YAJPEAUVIDMM_SEGMENT_PBMM@@@Z @ 0x140050B28
 * Callers:
 *     InitializePhysicalAdapterSegments @ 0x1400AFA68 (InitializePhysicalAdapterSegments.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@PEAUVIDMM_SEGMENT_BASE@@_KI@Z @ 0x1400BC1A0 (--0VIDMM_CPU_HOST_APERTURE@@QEAA@PEAUVIDMM_SEGMENT_BASE@@_KI@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJXZ @ 0x1400BC4FC (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmInitializePbmmSegment(struct VIDMM_SEGMENT_PBMM *a1)
{
  unsigned __int64 v2; // rdi
  VIDMM_CPU_HOST_APERTURE *v3; // rax
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx

  if ( !*((_QWORD *)a1 + 10) )
  {
    if ( *((_DWORD *)a1 + 27) == 1 )
      *((_QWORD *)a1 + 10) = *((_QWORD *)a1 + 5);
    else
      *((_QWORD *)a1 + 10) = -1LL;
  }
  v2 = (unsigned __int64)a1 + 8;
  if ( *((_DWORD *)a1 + 27) != 1 )
    return 0LL;
  *((_DWORD *)a1 + 16) |= 0x10u;
  if ( (*((_DWORD *)a1 + 16) & 0x2000) == 0 )
    return 0LL;
  v3 = (VIDMM_CPU_HOST_APERTURE *)operator new(88LL, 0x35346956u, 256LL);
  if ( v3 )
    v3 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(
           v3,
           (struct VIDMM_SEGMENT_BASE *)(v2 & -(__int64)(a1 != 0LL)),
           *((_QWORD *)a1 + 4),
           *((_DWORD *)a1 + 32));
  *((_QWORD *)a1 + 17) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_14008A81C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 75;
    DxgkLogInternalTriageEvent(v4, 262145LL);
    return 3221225495LL;
  }
  v6 = VIDMM_CPU_HOST_APERTURE::Init(v3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, v6);
  WdLogGlobalForLineNumber = 85;
  DxgkLogInternalTriageEvent(v8, 0x40000LL);
  return v7;
}
