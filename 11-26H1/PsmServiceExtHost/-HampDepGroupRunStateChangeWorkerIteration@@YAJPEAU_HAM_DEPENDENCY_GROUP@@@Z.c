/*
 * XREFs of ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68
 * Callers:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A2EC (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180015A70 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180015E08 (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015E68 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180015F54 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180016060 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800160F8 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016330 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180016510 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016758 (-HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800167D0 (-HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180016800 (-HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HO.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180017120 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B354 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007DA28 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 */

__int64 __fastcall HampDepGroupRunStateChangeWorkerIteration(struct _HAM_DEPENDENCY_GROUP *a1)
{
  __int64 v2; // r15
  struct _HAM_HOST_DEPENDENCY *FirstDependency; // rdi
  __int64 v4; // rdx
  __int64 v5; // r10
  _QWORD *v6; // r11
  struct _HAM_HOST_DEPENDENCY *NextDependency; // rdi
  __int64 v8; // rdx
  __int64 v9; // r10
  _QWORD *v10; // r11
  struct _HAM_HOST_DEPENDENCY *v11; // r14
  struct _HAM_HOST_DEPENDENCY *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // r10
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  _QWORD v19[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v20; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+98h] [rbp+38h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF

  v20 = 0LL;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800D016A);
  if ( !HampDepGroupIsCurrentThreadWorker(a1) )
    NT_ASSERT("HampDepGroupIsCurrentThreadWorker(DependencyGroup)");
  v19[1] = v19;
  v19[0] = v19;
  while ( !HampDepGroupTryLockAndReferenceMembers(a1, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v19) )
  {
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v19);
    HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v19);
  }
  v2 = *((_QWORD *)a1 + 14);
  HampDepGroupPopulateIndependentHostList(
    (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v19,
    (struct _HAM_DEP_HOST_STACK *)&v20);
  HampDepGroupReleaseLockExclusive(a1);
  HampDepGroupEvaluateDependencies(a1, (struct _HAM_DEP_HOST_STACK *)&v20);
  HampDepGroupProcessTerminations(a1);
  HampDepGroupProcessDonations(a1);
  HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v19);
  FirstDependency = HampDepGroupGetFirstDependency(a1);
  while ( FirstDependency )
  {
    FirstDependency = HampDepGroupGetNextDependency(FirstDependency);
    if ( (*(_BYTE *)(v5 + 32) & 7) == 3 )
    {
      if ( *(_BYTE *)(v5 + 40) == 3 )
      {
        HampHostDepDestroy((struct _HAM_HOST_DEPENDENCY *)v5);
      }
      else
      {
        LOBYTE(v4) = 3;
        if ( (int)HampDepGroupProcessActionForActivity(*v6, v4) < 0 )
          break;
      }
    }
  }
  NextDependency = HampDepGroupGetFirstDependency(a1);
  while ( NextDependency )
  {
    NextDependency = HampDepGroupGetNextDependency(NextDependency);
    if ( (*(_DWORD *)(v9 + 32) & 7) == 2 )
    {
      if ( *(_BYTE *)(v9 + 40) == 3 )
      {
        HampHostDepDestroy((struct _HAM_HOST_DEPENDENCY *)v9);
      }
      else
      {
        LOBYTE(v8) = 2;
        if ( (int)HampDepGroupProcessActionForActivity(*v10, v8) < 0 )
          break;
      }
    }
  }
  v11 = HampDepGroupGetFirstDependency(a1);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( !v11 )
        {
          v15 = 0;
          goto LABEL_21;
        }
        v12 = v11;
        v11 = HampDepGroupGetNextDependency(v11);
      }
      while ( (*((_DWORD *)v12 + 8) & 7) != 1 );
      if ( *((_BYTE *)v12 + 40) != 3 )
        break;
      HampHostDepDestroy(v12);
    }
    LOBYTE(v13) = 1;
    v15 = HampDepGroupProcessActionForActivity(*v14, v13);
    if ( v15 < 0 )
      break;
    *((_DWORD *)v12 + 8) &= 0xFFFFFFFC;
    *((_DWORD *)v12 + 8) |= 4u;
  }
  HampDepGroupProcessActivityActionForGroup(a1, 4);
LABEL_21:
  HampDepGroupAcquireLockExclusive(a1);
  *((_QWORD *)a1 + 13) = v2;
  HampDepGroupReleaseLockExclusive(a1);
  HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v19);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v23 = *(_QWORD *)a1;
    v22 = v2;
    v21 = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E12B0,
      (unsigned int)&unk_1800D0126,
      v16,
      v17,
      (__int64)&v21,
      (__int64)&v23,
      (__int64)&v22);
  }
  return (unsigned int)v15;
}
