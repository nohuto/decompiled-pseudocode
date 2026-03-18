/*
 * XREFs of ?InitializeSegmentPowerManagement@VIDMM_GLOBAL@@QEAAJIIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x14009F60C
 * Callers:
 *     VidMmInitializeSegmentPowerManagement @ 0x14004D680 (VidMmInitializeSegmentPowerManagement.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializeSegmentPowerManagement(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _DXGK_POWER_COMPONENT_TYPE a5)
{
  __int64 v5; // rcx
  _DWORD *v7; // rcx

  if ( a2 >= *((_DWORD *)this + 1738) )
  {
    WdLogSingleEntry1(1LL, a2);
    WdLogGlobalForLineNumber = 7497;
LABEL_3:
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
  _mm_lfence();
  v7 = *(_DWORD **)(*((_QWORD *)this + 5040) + 8LL * a2);
  if ( a3 >= v7[34] )
  {
    WdLogSingleEntry1(1LL, a3);
    WdLogGlobalForLineNumber = 7505;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 320LL))(v7, a3, a4, (unsigned int)a5);
  return 0LL;
}
