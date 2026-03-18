/*
 * XREFs of ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1400A67B8
 * Callers:
 *     VidMmInitializeAdapter @ 0x14004D600 (VidMmInitializeAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140038904 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x14004D400 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x14009C438 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmiInit(struct ADAPTER_RENDER *a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  unsigned int DriverVersion; // ebx
  VIDMM_GLOBAL *v9; // rax
  VIDMM_GLOBAL *v10; // rax
  struct VIDMM_GLOBAL *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  struct VIDMM_GLOBAL *result; // rax
  int v15; // [rsp+50h] [rbp-48h] BYREF
  __int128 SystemInformation; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v3 = *((_QWORD *)a1 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v3;
    WdLogGlobalForLineNumber = 66;
  }
  v15 = 0;
  SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v3 + 224), (union SYSMM_IOMMU_STATE *)&v15);
  if ( (v15 & 2) == 0 )
  {
    v17 = 0LL;
    SystemInformation = 0LL;
    if ( ZwQuerySystemInformation(SystemPrefetcherInformation|0x80, &SystemInformation, 0x18u, 0LL) < 0
      || *(_QWORD *)(v3 + 2440) < v17 )
    {
      WdLogSingleEntry0(1LL);
      v6 = 84;
      v7 = 0x40000LL;
LABEL_13:
      WdLogGlobalForLineNumber = v6;
      DxgkLogInternalTriageEvent(v5, v7);
      return 0LL;
    }
  }
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v3 + 216));
  v9 = (VIDMM_GLOBAL *)operator new(45504LL, 0x35316956u, 64LL);
  if ( !v9 || (v10 = VIDMM_GLOBAL::VIDMM_GLOBAL(v9), (v11 = v10) == 0LL) )
  {
    _InterlockedIncrement(&dword_14008A73C);
    WdLogSingleEntry0(6LL);
    v6 = 100;
    v7 = 262145LL;
    goto LABEL_13;
  }
  v12 = VIDMM_GLOBAL::Init(v10, a1, DriverVersion, a2);
  if ( v12 >= 0 )
  {
    WdLogSingleEntry0(4LL);
    result = v11;
    WdLogGlobalForLineNumber = 118;
    return result;
  }
  _InterlockedIncrement(&dword_14008A740);
  WdLogSingleEntry1(6LL, v12);
  WdLogGlobalForLineNumber = 114;
  DxgkLogInternalTriageEvent(v13, 262145LL);
  VIDMM_GLOBAL::`scalar deleting destructor'(v11);
  return 0LL;
}
