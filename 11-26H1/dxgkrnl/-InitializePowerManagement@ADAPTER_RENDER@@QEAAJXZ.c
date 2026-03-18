/*
 * XREFs of ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A9050
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14041EB18 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmInitializeSegmentPowerManagement@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x140070EB8 (-VidMmInitializeSegmentPowerManagement@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COM.c)
 *     ?VidSchInitializeComponentPowerManagement@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_DXGK_POWER_COMPONENT_TYPE@@IIIPEAE@Z @ 0x140070EFC (-VidSchInitializeComponentPowerManagement@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_DXGK_POWER_.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializePowerManagement(ADAPTER_RENDER *this)
{
  __int64 v1; // r14
  void (__fastcall *v3)(__int64, unsigned int); // rax
  unsigned int v4; // r15d
  __int64 v5; // rdi
  unsigned int i; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  const wchar_t *v11; // r9
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _QWORD v16[6]; // [rsp+58h] [rbp-19h] BYREF
  void (__fastcall *v17)(__int64, unsigned int); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v18)(void *const, unsigned int, unsigned __int8); // [rsp+90h] [rbp+1Fh]
  __int64 v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+A0h] [rbp+2Fh]
  int v21; // [rsp+A4h] [rbp+33h]
  unsigned __int8 v22; // [rsp+D8h] [rbp+67h] BYREF

  v1 = *((_QWORD *)this + 2);
  v17 = 0LL;
  v21 = 0;
  v19 = *(_QWORD *)(v1 + 216);
  v16[1] = DxgSetPowerComponentActiveNoWaitCB;
  v16[0] = &DxgSetPowerComponentActiveCBInternal;
  v16[2] = DxgSetPowerComponentIdleCBInternal;
  v16[3] = DxgSetPowerComponentActiveNoWaitForceAsyncCB;
  v16[4] = DxgSetPowerComponentIdleForceAsyncCBInternal;
  v16[5] = DxgkLatencyToleranceTimerNotification;
  v20 = *(_DWORD *)(v1 + 3696);
  v18 = DxgkNotifyMemorySegmentHasData;
  v3 = 0LL;
  if ( *(int *)(v1 + 3044) >= 1300 )
    v3 = DxgNotifyVSyncCB;
  v17 = v3;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 816LL))(
    *((_QWORD *)this + 93),
    v16);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 688LL))(
    *((_QWORD *)this + 96),
    v16);
  v4 = *(_DWORD *)(v1 + 3408);
  LODWORD(v5) = 0;
  for ( i = 0; i < v4; ++i )
  {
    v7 = *(_QWORD *)(v1 + 3264);
    v8 = 520LL * i;
    v9 = *(_DWORD *)(v8 + v7 + 208);
    if ( v9 )
    {
      switch ( v9 )
      {
        case 2:
          v22 = 0;
          v12 = VIDSCH_EXPORT::VidSchInitializeComponentPowerManagement(
                  *((VIDSCH_EXPORT **)this + 92),
                  *((struct _VIDSCH_GLOBAL **)this + 93),
                  2u,
                  0,
                  *(_DWORD *)(v8 + v7 + 212),
                  i,
                  &v22);
          v5 = v12;
          if ( v12 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 427;
            goto LABEL_8;
          }
          break;
        case 3:
          v13 = VIDMM_EXPORT::VidMmInitializeSegmentPowerManagement(
                  *((VIDMM_EXPORT **)this + 95),
                  *((struct VIDMM_GLOBAL **)this + 96),
                  *(unsigned __int16 *)(v8 + v7 + 6),
                  *(_DWORD *)(v8 + v7 + 212),
                  *(_DWORD *)(v8 + v7),
                  DXGK_POWER_COMPONENT_MEMORY);
          v5 = v13;
          if ( v13 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 441;
            goto LABEL_19;
          }
          break;
        case 4:
          v14 = VIDMM_EXPORT::VidMmInitializeSegmentPowerManagement(
                  *((VIDMM_EXPORT **)this + 95),
                  *((struct VIDMM_GLOBAL **)this + 96),
                  0,
                  0,
                  *(_DWORD *)(v8 + v7),
                  DXGK_POWER_COMPONENT_MEMORY_REFRESH);
          v5 = v14;
          if ( v14 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 455;
LABEL_19:
            v11 = L"VidMmInitializeSegmentPowerManagement failed with status:0x%I64x";
LABEL_20:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v5, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)v5;
          }
          break;
      }
    }
    else
    {
      v10 = VIDSCH_EXPORT::VidSchInitializeComponentPowerManagement(
              *((VIDSCH_EXPORT **)this + 92),
              *((struct _VIDSCH_GLOBAL **)this + 93),
              0,
              *(unsigned __int16 *)(v8 + v7 + 6),
              *(_DWORD *)(v8 + v7 + 212),
              i,
              (unsigned __int8 *)(v8 + v7 + 358));
      v5 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 410;
LABEL_8:
        v11 = L"VidSchInitializeComponentPowerManagement failed with status:0x%I64x";
        goto LABEL_20;
      }
    }
  }
  return (unsigned int)v5;
}
