/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x140B3E5DC
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiIsImportOptimizationEnabled @ 0x1404D5AAC (MiIsImportOptimizationEnabled.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1404EF1F4 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14050DFD8 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 *     MiCaptureSecureImageIat @ 0x140B34998 (MiCaptureSecureImageIat.c)
 *     MiCaptureRetpolineImportInfo @ 0x140B3E80C (MiCaptureRetpolineImportInfo.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 *v5; // r15
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int16 *p_SpecialApcDisable; // r14
  AutoBoost *v11; // rax
  void *v12; // rdx
  __int64 v13; // r8
  AutoBoost *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  _QWORD v20[2]; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+34h] [rbp-44h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall *v24)(__int64); // [rsp+40h] [rbp-38h]
  int v25; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  v5 = 0LL;
  if ( MiIsImportOptimizationEnabled()
    && MiDoesControlAreaRequireRetpolineFixups(a2)
    && *(_QWORD *)(*(_QWORD *)v7 + 32LL) == *(_QWORD *)(a1 + 48) )
  {
    if ( (MiFlags & 0x20000) != 0 )
    {
      p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
      v25 = 1;
      --CurrentThread->SpecialApcDisable;
      v11 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D2D0.MutantListHead, 0LL, 0LL, v9);
      v14 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D2D0.MutantListHead, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&stru_140E2D2D0.MutantListHead,
          v11,
          (__int64)&stru_140E2D2D0.MutantListHead);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v12);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      MiAdjustSecureDriverStateForIatCapture(a1, 1, v13);
      v6 = (unsigned int)MiCaptureSecureImageIat(*(void **)(a1 + 48));
      if ( v6 < 0 )
        goto LABEL_20;
    }
    else
    {
      v5 = (unsigned __int64 *)MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, v8, (unsigned __int64)v9);
      if ( !v5 )
        return (unsigned int)-1073741670;
      v6 = MiCaptureRetpolineImportInfo(a1, a2);
      if ( v6 < 0 )
      {
LABEL_26:
        MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v5, 1u);
        return (unsigned int)v6;
      }
      p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
    }
    v24 = MiWalkImageApplyImportOptimizationToPage;
    v20[0] = a2;
    v21 = 3;
    v22 = -1;
    v23 = 128LL;
    v20[1] = v5;
    MiWalkEntireImage((__int64)v20);
    if ( (MiFlags & 0x20000) == 0 )
      MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (__int64)v5);
    *(_DWORD *)(a1 + 104) |= 0x80u;
    v6 = 0;
    if ( !v25 )
    {
LABEL_25:
      if ( !v5 )
        return (unsigned int)v6;
      goto LABEL_26;
    }
LABEL_20:
    MiAdjustSecureDriverStateForIatCapture(a1, 0, v15);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&stru_140E2D2D0.MutantListHead.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2D2D0.MutantListHead);
    KeAbPostRelease((unsigned __int64)&stru_140E2D2D0.MutantListHead);
    v18 = (*p_SpecialApcDisable)++ == -1;
    if ( v18 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v17, v16);
    goto LABEL_25;
  }
  return 0;
}
