/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x1404932FC
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x140492F8C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     ExpSaBinaryArrayInsert @ 0x1404935CC (ExpSaBinaryArrayInsert.c)
 *     ExpSaBinaryArrayRemove @ 0x14052840C (ExpSaBinaryArrayRemove.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  char v4; // r15
  __int64 v5; // r14
  unsigned int v6; // esi
  ULONG_PTR v7; // r12
  _QWORD *result; // rax
  _QWORD *v9; // rdi
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbx
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // r13
  struct _KPRCB *v17; // rax
  int v18; // esi
  void *Pool2; // rbx
  char v20; // si
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rbx
  __int64 v24; // rdx
  ULONG MaximumProcessorCount; // [rsp+34h] [rbp-4Ch]
  unsigned int v27; // [rsp+38h] [rbp-48h]
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-40h] BYREF
  __int128 v29; // [rsp+50h] [rbp-30h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  Affinity = 0LL;
  v4 = 0;
  PreviousAffinity = 0LL;
  v29 = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = MaximumProcessorCount;
  v7 = a2 != 0 ? 256LL : 64LL;
  result = (_QWORD *)ExAllocatePool2(v7);
  v9 = result;
  if ( !result )
    return result;
  memset_0(result, 0, 0x80uLL);
  v9[6] = 512LL;
  v9[7] = v9 + 8;
  *((_DWORD *)v9 + 9) = 512;
  v9[2] = a1;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock, 0LL, 0LL, v10);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock,
      v11,
      (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = ExpSaBinaryArrayInsert(
          ExSaPageGroupDescriptorArrayLock.QuantumTarget,
          v9,
          KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]);
  *((_DWORD *)v9 + 8) = v14;
  if ( v14 == -1 )
    goto LABEL_30;
  v15 = KeNumberProcessors_0;
  v27 = KeNumberProcessors_0;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= v6 )
    {
      Pool2 = 0LL;
      v20 = 1;
      goto LABEL_18;
    }
    v16 = *((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + v5);
    v17 = (unsigned int)v5 >= v15 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v5);
    v18 = v17->SchedulerSubNode->Affinity.Reserved[0];
    if ( a2 )
      break;
    LOBYTE(v29) = 3;
    DWORD2(v29) = v18 | 0x80000000;
    Pool2 = (void *)ExAllocatePool3(v7, 4096LL, 1632860229LL, &v29, 1);
    if ( !Pool2 )
      goto LABEL_29;
LABEL_14:
    if ( (unsigned int)ExpSaBinaryArrayInsert(v16, Pool2, (unsigned __int16)v18) == -1 )
      goto LABEL_29;
    v15 = v27;
    v5 = (unsigned int)(v5 + 1);
    v6 = MaximumProcessorCount;
  }
  KeQueryNodeActiveAffinity(v18, &Affinity, 0LL);
  if ( v4 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v4 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  Pool2 = (void *)ExAllocatePool2(v7);
  if ( Pool2 )
    goto LABEL_14;
LABEL_29:
  v20 = 0;
LABEL_18:
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( !v20 )
  {
LABEL_30:
    if ( *((_DWORD *)v9 + 8) != -1 )
    {
      while ( 1 )
      {
        v24 = *((unsigned int *)v9 + 8);
        if ( !(_DWORD)v5 )
          break;
        v5 = (unsigned int)(v5 - 1);
        _BitScanReverse(&v22, v24);
        v23 = *((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + v5);
        ExFreePoolWithTag(
          *(PVOID *)(*(_QWORD *)(v23 + 8LL * (v22 - 2)) + 8LL * ((unsigned int)v24 ^ (1 << v22)) + 8),
          0);
        ExpSaBinaryArrayRemove(v23, *((unsigned int *)v9 + 8));
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArrayLock.QuantumTarget, v24);
    }
    ExFreePoolWithTag(v9, 0);
    v9 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock);
  return v9;
}
