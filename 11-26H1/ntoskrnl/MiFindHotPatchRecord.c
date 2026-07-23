/*
 * XREFs of MiFindHotPatchRecord @ 0x140AC2084
 * Callers:
 *     MmInsertSecureImageActivePatch @ 0x14087AF00 (MmInsertSecureImageActivePatch.c)
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 *     MiApplyRequiredDriverHotPatches @ 0x140B5A0B4 (MiApplyRequiredDriverHotPatches.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiDuplicateUnicodeString @ 0x14086DC40 (MiDuplicateUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x140875A8C (MiCompareHotPatchNodes.c)
 *     RtlIsPatchMachineApplicable @ 0x1408B178C (RtlIsPatchMachineApplicable.c)
 */

__int64 __fastcall MiFindHotPatchRecord(
        __int64 *a1,
        int a2,
        int a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned __int16 a5,
        _DWORD *a6,
        UNICODE_STRING *a7)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rbx
  int v11; // eax
  NTSTATUS v12; // edi
  void *v14; // rdx
  LegacyAutoBoost *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  __int128 v19; // [rsp+28h] [rbp-60h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+44h] [rbp-44h]
  __int128 v23; // [rsp+48h] [rbp-40h]
  __int64 v24; // [rsp+58h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21 = a3;
  v22 = (int)a4;
  if ( !a2 )
  {
    --CurrentThread->SpecialApcDisable;
    v15 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E366D8.Header.Lock, 0, v15, &stru_140E366D8);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
  }
  v10 = *a1;
  while ( v10 )
  {
    v11 = MiCompareHotPatchNodes((__int64)&v19, v10);
    if ( v11 < 0 )
    {
      v10 = *(_QWORD *)v10;
    }
    else
    {
      if ( v11 <= 0 )
        break;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  if ( v10 && (!a5 || RtlIsPatchMachineApplicable(a5, *(_DWORD *)(v10 + 36))) )
  {
    if ( !a7 || (v12 = MiDuplicateUnicodeString(a7, (const UNICODE_STRING *)(v10 + 40), 0), v12 >= 0) )
    {
      if ( a6 )
        *a6 = *(_DWORD *)(v10 + 32);
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741275;
  }
  if ( !a2 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140E366D8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E366D8);
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v17, v16);
  }
  return (unsigned int)v12;
}
