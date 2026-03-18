/*
 * XREFs of ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z @ 0x14009DCD4
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z @ 0x14010BB78 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z @ 0x1400A4C5C (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::EnsureLockedPages(
        VIDMM_GLOBAL ***this,
        struct VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_GLOBAL *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  VIDMM_GLOBAL **v12; // rcx
  _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a2 + 28LL) & 0x50) != 0 )
    return;
  v8 = (VIDMM_GLOBAL *)operator new(32LL, 0x39356956u, 256LL);
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_14008A848);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 24104;
    DxgkLogInternalTriageEvent(v9, 262145LL);
LABEL_6:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 55LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_7;
  }
  v10 = *((_QWORD *)a2 + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v10 + 16), &ApcState);
  *((_QWORD *)v8 + 2) = VidMmiProbeAndLockAllocation(
                          *(struct VIDMM_GLOBAL_ALLOC **)a2,
                          a3,
                          a4,
                          (struct VIDMM_GLOBAL *)this);
  KeUnstackDetachProcess(&ApcState);
  v11 = *(void **)(*((_QWORD *)a2 + 1) + 16LL);
  *((_QWORD *)v8 + 3) = v11;
  ObfReferenceObject(v11);
  if ( !*((_QWORD *)v8 + 2) )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 24125;
    goto LABEL_6;
  }
LABEL_7:
  v12 = this[4994];
  if ( *v12 != (VIDMM_GLOBAL *)(this + 4993) )
    __fastfail(3u);
  *(_QWORD *)v8 = this + 4993;
  *((_QWORD *)v8 + 1) = v12;
  *v12 = v8;
  this[4994] = (VIDMM_GLOBAL **)v8;
}
