/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x140A9DB18
 * Callers:
 *     MiCreatePatchSectionRequest @ 0x140875B58 (MiCreatePatchSectionRequest.c)
 *     MiGetAllRegisteredPatches @ 0x14087607C (MiGetAllRegisteredPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A9D93C (MiQuerySingleLoadedPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiDuplicateUnicodeString @ 0x14086DC40 (MiDuplicateUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x140875A8C (MiCompareHotPatchNodes.c)
 *     MiFindUserSidHotPatchContext @ 0x14087600C (MiFindUserSidHotPatchContext.c)
 *     RtlIsPatchMachineApplicable @ 0x1408B178C (RtlIsPatchMachineApplicable.c)
 *     SeQueryUserSidToken @ 0x1409C9AA0 (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(__int64 a1, int a2, int a3, int a4, UNICODE_STRING *a5)
{
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  struct _KTHREAD *CurrentThread; // rdi
  void *v12; // rbp
  void *v13; // rdx
  LegacyAutoBoost *v14; // rbx
  int v15; // esi
  __int64 v16; // rbx
  int v17; // eax
  NTSTATUS HotPatchRecord; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // zf
  _QWORD *UserSidHotPatchContext; // rax
  __int128 v25; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-B8h]
  int v27; // [rsp+68h] [rbp-B0h]
  int v28; // [rsp+6Ch] [rbp-ACh]
  __int128 v29; // [rsp+70h] [rbp-A8h]
  __int64 v30; // [rsp+80h] [rbp-98h]
  _BYTE v31[80]; // [rsp+90h] [rbp-88h] BYREF

  memset_0(v31, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v14 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8, 0LL, 0LL, v10);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E366D8.Header.Lock, 0, v14, &stru_140E366D8);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
  }
  v15 = *(unsigned __int16 *)(a1 + 1772);
  if ( !qword_140E366B8
    || (v12 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v9, v10),
        SeQueryUserSidToken((__int64)v12, v31, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v31)) == 0LL)
    || (HotPatchRecord = MiFindHotPatchRecord((int)UserSidHotPatchContext + 24, 1, a2, a3, v15, 0LL, (__int64)a5),
        HotPatchRecord == -1073741275) )
  {
    v16 = xmmword_140E366C0;
    v26 = 0LL;
    v27 = a2;
    v28 = a3;
    v25 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    while ( v16 )
    {
      v17 = MiCompareHotPatchNodes((__int64)&v25, v16);
      if ( v17 < 0 )
      {
        v16 = *(_QWORD *)v16;
      }
      else
      {
        if ( v17 <= 0 )
          break;
        v16 = *(_QWORD *)(v16 + 8);
      }
    }
    if ( v16 && (!(_WORD)v15 || RtlIsPatchMachineApplicable(v15, *(_DWORD *)(v16 + 36))) )
    {
      if ( !a5
        || (HotPatchRecord = MiDuplicateUnicodeString(a5, (const UNICODE_STRING *)(v16 + 40), 0), HotPatchRecord >= 0) )
      {
        HotPatchRecord = 0;
      }
    }
    else
    {
      HotPatchRecord = -1073741275;
    }
  }
  if ( !a4 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140E366D8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E366D8);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20, v19);
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  return (unsigned int)HotPatchRecord;
}
