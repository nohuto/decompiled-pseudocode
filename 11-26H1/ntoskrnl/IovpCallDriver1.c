/*
 * XREFs of IovpCallDriver1 @ 0x140C312C8
 * Callers:
 *     VfBeforeCallDriver @ 0x140C322E8 (VfBeforeCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     MdlInvariantPreProcessing1 @ 0x140646934 (MdlInvariantPreProcessing1.c)
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     IovpAdvanceStackDownwards @ 0x140C31120 (IovpAdvanceStackDownwards.c)
 *     IovpExamineDevObjForwarding @ 0x140C31BC4 (IovpExamineDevObjForwarding.c)
 *     IovpExamineIrpStackForwarding @ 0x140C31C6C (IovpExamineIrpStackForwarding.c)
 *     VfGetPristineDispatchRoutine @ 0x140C31EA4 (VfGetPristineDispatchRoutine.c)
 *     VfPendingFinishLogging @ 0x140C35EF0 (VfPendingFinishLogging.c)
 *     VfPendingShouldForce @ 0x140C3605C (VfPendingShouldForce.c)
 *     VfPendingStartLogging @ 0x140C36168 (VfPendingStartLogging.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140C36ED8 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140C36F3C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140C36FEC (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorIsNewRequest @ 0x140C373E4 (VfMajorIsNewRequest.c)
 *     VfMajorVerifyIrpStackDownward @ 0x140C37668 (VfMajorVerifyIrpStackDownward.c)
 *     VfMajorVerifyNewIrp @ 0x140C377F8 (VfMajorVerifyNewIrp.c)
 *     VfMajorVerifyNewRequest @ 0x140C378A8 (VfMajorVerifyNewRequest.c)
 *     VfPacketCreateAndLock @ 0x140C3F314 (VfPacketCreateAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCallDriver @ 0x140C400D8 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x140C4045C (IovpSessionDataCreate.c)
 *     IovpSessionDataReference @ 0x140C405D0 (IovpSessionDataReference.c)
 *     VfIrpLogRecordEvent @ 0x140C41720 (VfIrpLogRecordEvent.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94 (VfIrpDatabaseEntryFindAndLock.c)
 */

int __fastcall IovpCallDriver1(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r12
  int v7; // eax
  int v8; // ecx
  unsigned __int8 *v9; // r13
  int v10; // r9d
  int ShouldForce; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  void *v14; // rdi
  int v15; // eax
  int *v16; // r12
  int v17; // eax
  __int64 v18; // rbx
  void *BottomDeviceObjectWithTag; // rdi
  __int64 v20; // rdi
  _QWORD *v21; // r12
  int v22; // r8d
  int IsNewRequest; // eax
  char v24; // dl
  int v25; // eax
  __int64 v26; // rdi
  bool v27; // zf
  void *LowerDeviceObjectWithTag; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  void *v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rax
  const void *v43; // [rsp+28h] [rbp-41h]
  __int64 v44; // [rsp+40h] [rbp-29h] BYREF
  __int64 v45; // [rsp+48h] [rbp-21h]
  __int64 v46; // [rsp+50h] [rbp-19h] BYREF
  __int64 started; // [rsp+58h] [rbp-11h]
  PVOID Object; // [rsp+60h] [rbp-9h]
  __int128 v49; // [rsp+68h] [rbp-1h] BYREF
  __int64 v50; // [rsp+78h] [rbp+Fh]
  int v51; // [rsp+D0h] [rbp+67h]
  int v52; // [rsp+D8h] [rbp+6Fh] BYREF
  int v53; // [rsp+E0h] [rbp+77h]
  const void *v54; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 168);
  v46 = 0LL;
  v44 = 0LL;
  v52 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v4 = 0LL;
  LODWORD(v5) = *(_DWORD *)(v1 + 16) & 0xC0000000;
  if ( !(_DWORD)v5 )
  {
    v4 = VfIrpDatabaseEntryFindAndLock(v1);
    v6 = v4;
    if ( v4 )
    {
      *(_DWORD *)(v1 + 16) |= 0x40000000u;
    }
    else
    {
      v6 = VfPacketCreateAndLock(v1);
      v4 = v6;
      v7 = *(_DWORD *)(v1 + 16);
      if ( !v6 )
      {
        LODWORD(v5) = v7 | 0x80000000;
        *(_DWORD *)(v1 + 16) = v5;
        return v5;
      }
      *(_DWORD *)(v1 + 16) = v7 | 0x40000000;
    }
LABEL_10:
    v8 = *(_DWORD *)(v4 + 232);
    *(_BYTE *)(v4 + 61) = CurrentIrql;
    *(_BYTE *)(v4 + 60) = CurrentIrql;
    v43 = *(const void **)(a1 + 176);
    v9 = (unsigned __int8 *)(*(_QWORD *)(v1 + 184) - 72LL);
    v10 = *(_DWORD *)(v1 + 184) - 72;
    started = 0LL;
    v54 = v43;
    ShouldForce = VfPendingShouldForce(v8, CurrentIrql, v1, v10, v4, (__int64)v43);
    v12 = *(_QWORD *)(v4 + 240);
    v13 = ShouldForce;
    v14 = *(void **)(a1 + 160);
    v53 = ShouldForce;
    v45 = v12;
    Object = v14;
    if ( v12 )
    {
      v15 = 0;
      v16 = (int *)(v6 + 56);
    }
    else
    {
      v16 = (int *)(v4 + 56);
      v17 = *(_DWORD *)(v4 + 56);
      if ( (v17 & 1) == 0 )
      {
        v51 = 1;
        *v16 = v17 | 1;
        v12 = IovpSessionDataCreate(v14, v4, v13);
        v45 = v12;
        v15 = 1;
LABEL_16:
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 16) = v4;
        if ( v12 )
        {
          v18 = MEMORY[0xFFFFF78000000014];
          if ( v15 )
          {
            BottomDeviceObjectWithTag = (void *)IovUtilGetBottomDeviceObjectWithTag(v14);
            VfIrpLogRecordEvent(*(unsigned int *)(v4 + 232), BottomDeviceObjectWithTag, v1);
            ObfDereferenceObjectWithTag(BottomDeviceObjectWithTag, 0x49667256u);
            _InterlockedIncrement((volatile signed __int32 *)(v4 + 20));
            v20 = v45;
            ++*(_DWORD *)(v4 + 24);
            IovpSessionDataReference(v20);
          }
          else
          {
            v20 = v45;
          }
          if ( *(_QWORD *)(v1 + 104) )
          {
            ViErrorReport1(0x203u, v54, (const void *)v1);
            *(_QWORD *)(v1 + 104) = 0LL;
          }
          if ( (*v16 & 0x10) != 0 )
            ViErrorReport1(0x205u, v54, (const void *)v1);
          if ( *(_BYTE *)(v1 + 67) <= *(_BYTE *)(v1 + 66)
            && (*v9 == 3 || *v9 == 4)
            && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
            && (MmVerifierData & 0x6000) != 0 )
          {
            MdlInvariantPreProcessing1(a1, v4, (__int64)v9);
          }
          v21 = Object;
          *(_DWORD *)(v20 + 56) = IovpExamineDevObjForwarding(Object, *(_QWORD *)(v20 + 48));
          IovpExamineIrpStackForwarding(v4, v51, v22, v1, (__int64)v54, (__int64)v9, (__int64)&v44, (__int64)&v52);
          if ( v53 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v4 + 20));
            ++*(_DWORD *)(v4 + 24);
            *(_QWORD *)(v4 + 216) = v9;
            started = VfPendingStartLogging(v1);
          }
          IsNewRequest = VfMajorIsNewRequest(v44, v9);
          v24 = *(_BYTE *)(v1 + 67);
          v53 = IsNewRequest;
          v25 = IovpAdvanceStackDownwards(v20 + 80, v24, (__int64)v9, v44, v52, IsNewRequest, 1, &v46);
          v26 = v46;
          *(_QWORD *)(v46 + 48) = v18;
          if ( !v25 )
          {
            *(_DWORD *)(a1 + 24) |= 0x4000000u;
            v27 = v53 == 0;
            *(_QWORD *)(a1 + 40) = a1 + 32;
            *(_QWORD *)(a1 + 32) = a1 + 32;
            *(_QWORD *)(v26 + 56) = v18;
            *(_QWORD *)(v26 + 112) = KeGetCurrentThread();
            if ( !v27 )
            {
              *(_OWORD *)(v26 + 80) = *(_OWORD *)(v1 + 48);
              *(_OWORD *)(v26 + 96) = *(_OWORD *)(v1 + 48);
              if ( v51 )
                *(_DWORD *)(v26 + 4) |= 0x8000000u;
            }
          }
          LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(v21);
          if ( LowerDeviceObjectWithTag )
            ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
          else
            *(_DWORD *)(v26 + 4) |= 0x10000000u;
          *(_QWORD *)(v26 + 40) = VfGetPristineDispatchRoutine(v21[1], *v9);
          v29 = (_QWORD *)(a1 + 32);
          *(_DWORD *)(v26 + 4) &= ~0x40000000u;
          v30 = (_QWORD *)(v26 + 16);
          v31 = *(_QWORD *)(v26 + 16);
          if ( *(_QWORD *)(v31 + 8) != v26 + 16 )
            __fastfail(3u);
          *v29 = v31;
          *(_QWORD *)(a1 + 40) = v30;
          *(_QWORD *)(v31 + 8) = v29;
          *v30 = v29;
          *(_QWORD *)(a1 + 8) = v26;
          *(_QWORD *)(a1 + 72) = v1;
          v32 = *(_QWORD *)(v1 + 184);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)(v32 - 72);
          *(_OWORD *)(a1 + 96) = *(_OWORD *)(v32 - 56);
          *(_OWORD *)(a1 + 112) = *(_OWORD *)(v32 - 40);
          *(_OWORD *)(a1 + 128) = *(_OWORD *)(v32 - 24);
          *(_QWORD *)(a1 + 144) = *(_QWORD *)(v32 - 8);
          if ( (v9[3] & 1) != 0 )
            *(_DWORD *)(a1 + 24) |= 0x1000000u;
          if ( *v9 == 27 && v9[1] == 2 )
          {
            *(_DWORD *)(a1 + 24) |= 0x20000000u;
            v33 = (void *)IovUtilGetBottomDeviceObjectWithTag(v21);
            *(_QWORD *)(a1 + 64) = v33;
            ObfDereferenceObjectWithTag(v33, 0x49667256u);
            v34 = v21;
            LOBYTE(v35) = KeAcquireQueuedSpinLock(0xAuLL);
            do
            {
              if ( (unsigned int)IovUtilIsDeviceObjectMarked(v34, 1LL, v35) )
                break;
              v34 = *(_QWORD **)(v34[39] + 48LL);
            }
            while ( v34 );
            KeReleaseQueuedSpinLock(0xAuLL, v35);
            if ( v34 && !(unsigned int)IovUtilIsDeviceObjectMarked(v21, 3LL, v36) )
              *(_DWORD *)(a1 + 24) |= 0x10000000u;
            v50 = 0LL;
            v49 = 0LL;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              VfAvlInitializeLockContext((__int64)&v49, 1);
              v37 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v49, (unsigned __int64)v21, 0LL);
              if ( v37 )
                _InterlockedOr((volatile signed __int32 *)(v37 + 16), 2u);
              VfAvlCleanupLockContext((__int64)&v49);
            }
          }
          v38 = (__int64)v54;
          if ( v51 )
            VfMajorVerifyNewIrp(v4, v1, (_DWORD)v9, v26, (__int64)v54);
          if ( v53 && (*(_DWORD *)(v4 + 56) & 0x80000) == 0 )
            VfMajorVerifyNewRequest(v4, (_DWORD)v21, v44, (_DWORD)v9, v26, v38);
          VfMajorVerifyIrpStackDownward(v4, (_DWORD)v21, v44, (_DWORD)v9, v26, v38);
          v39 = v45;
          *(_QWORD *)(v45 + 48) = v21;
          *(_BYTE *)(v4 + 186) = *(_BYTE *)(v1 + 67);
          *(_OWORD *)(*(_QWORD *)(v26 + 8) + 96LL) = *(_OWORD *)(v1 + 48);
          v40 = *(_BYTE *)(v1 + 67);
          if ( v40 > 2 )
          {
            *(_BYTE *)(v1 + 67) = v40 - 1;
            v41 = *(_QWORD *)(v1 + 184) - 72LL;
            *(_QWORD *)(v1 + 184) = v41;
            *(_BYTE *)(v41 - 69) |= 0x10u;
            ++*(_BYTE *)(v1 + 67);
            *(_QWORD *)(v1 + 184) += 72LL;
          }
          IovpSessionDataReference(v39);
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 20));
          if ( VfWdCancelTimeoutTicks )
            ViWdBeforeCallDriver(v1, *(_QWORD *)(a1 + 48), v4 + 248);
        }
        VfIrpDatabaseEntryReleaseLock(v4);
        LODWORD(v5) = started;
        if ( started )
          LODWORD(v5) = VfPendingFinishLogging(started);
        return v5;
      }
      v15 = 0;
    }
    v51 = 0;
    goto LABEL_16;
  }
  if ( (_DWORD)v5 == 0x40000000 )
  {
    v5 = VfIrpDatabaseEntryFindAndLock(v1);
    v4 = v5;
  }
  v6 = v4;
  if ( v4 )
    goto LABEL_10;
  return v5;
}
