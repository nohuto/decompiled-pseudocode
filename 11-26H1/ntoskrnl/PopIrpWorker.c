/*
 * XREFs of PopIrpWorker @ 0x14060EED0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     PopPepDeviceDState @ 0x1403BD1C4 (PopPepDeviceDState.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     PoDeviceAcquireIrp @ 0x1404806EC (PoDeviceAcquireIrp.c)
 *     PopFxGetDeviceDStateReason @ 0x1404BDBEC (PopFxGetDeviceDStateReason.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x140603CFC (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PsTerminateSystemThread @ 0x140949E90 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(struct _KSEMAPHORE **Entry)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KSEMAPHORE *v3; // rcx
  LARGE_INTEGER *Timeout; // r12
  int v5; // edx
  __int128 v6; // kr00_16
  char v7; // bl
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r14
  _DWORD *v14; // rdi
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  int DeviceDStateReason; // eax
  int v21; // r10d
  int v22; // ecx
  char v23; // bl
  unsigned __int8 v24; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+48h] [rbp-38h] BYREF
  __m256i v27; // [rsp+58h] [rbp-28h]
  LARGE_INTEGER v28; // [rsp+B0h] [rbp+30h] BYREF

  v28.QuadPart = 0LL;
  CurrentIrql = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = 0LL;
  *(_OWORD *)&v27.m256i_u64[2] = 0LL;
  *(_OWORD *)v27.m256i_i8 = (unsigned __int64)KeGetCurrentThread();
  if ( Entry )
  {
    v3 = *Entry;
    if ( v3 )
      KeReleaseSemaphore(v3, 0, 1, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v28.QuadPart = -100000000LL;
    Timeout = &v28;
    v27.m256i_i8[24] = 0;
  }
  else
  {
    Timeout = 0LL;
    v27.m256i_i8[24] = 1;
  }
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_140F0D388 != &PopIrpThreadList )
LABEL_57:
    __fastfail(3u);
  *(_QWORD *)&v26 = &PopIrpThreadList;
  *((_QWORD *)&v26 + 1) = qword_140F0D388;
  *(_QWORD *)qword_140F0D388 = &v26;
  qword_140F0D388 = (__int64)&v26;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    while ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
      v9 = PopIrpWorkerList;
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList )
        goto LABEL_57;
      v10 = *(_QWORD *)PopIrpWorkerList;
      if ( *(_QWORD *)(*(_QWORD *)PopIrpWorkerList + 8LL) != PopIrpWorkerList )
        goto LABEL_57;
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v10 + 8) = &PopIrpWorkerList;
      PopIrpLockThread = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v11 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v11 == PopIrpWorkerCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerPendingCount
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
      v12 = *(_QWORD *)(v9 + 16);
      v13 = v9 - 168;
      v14 = *(_DWORD **)(v12 + 40);
      PoDeviceAcquireIrp(v13, *(_BYTE *)(v12 + 1), (__int64)v14);
      v16 = *(_QWORD *)(v13 + 72LL * *(char *)(v13 + 66) + 200);
      if ( *(_BYTE *)(v16 + 184) == 2 && *(_DWORD *)(v16 + 188) == 1 && *(_DWORD **)(v16 + 32) == v14 )
      {
        v17 = *(_QWORD *)(v16 + 24);
        v18 = *(_QWORD *)(v16 + 200);
        v19 = v17 ? *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) : 0LL;
        *(_DWORD *)(v19 + 156) = *(_DWORD *)(v16 + 192);
        if ( v18 )
        {
          DeviceDStateReason = PopFxGetDeviceDStateReason(v18);
          *(_DWORD *)(v16 + 280) = DeviceDStateReason;
          *(_BYTE *)(v16 + 208) = 0;
          if ( DeviceDStateReason == 1 )
            *(_BYTE *)(v16 + 208) = 1;
          v22 = *(_DWORD *)(v16 + 192);
          *(_BYTE *)(v16 + 209) = v22 != v21;
          if ( v22 != v21 )
          {
            if ( v22 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v18 + 32), 2u);
            }
            else if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline()
                   && (*(_DWORD *)(v18 + 864) & 1) == 0 )
            {
              _InterlockedOr((volatile signed __int32 *)(v18 + 32), 0x800u);
            }
            PopPepDeviceDState(*(_QWORD *)(v18 + 56), *(_DWORD *)(v16 + 192), 0LL, *(unsigned int *)(v16 + 280));
          }
        }
      }
      v27.m256i_i64[1] = v13;
      v23 = 0;
      v27.m256i_i64[2] = (__int64)v14;
      if ( (v14[12] & 0x2000) == 0 && v13 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
        }
        v23 = 1;
      }
      guard_dispatch_icall_no_overrides(v14, v13);
      v24 = KeGetCurrentIrql();
      if ( v23 )
      {
        if ( v24 != 2 )
          KeBugCheckEx(0xA0u, 0x902uLL, (ULONG_PTR)v14, v13, KeGetCurrentIrql());
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      else if ( v24 )
      {
        KeBugCheckEx(0xA0u, 0x902uLL, (ULONG_PTR)v14, v13, KeGetCurrentIrql());
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, (ULONG_PTR)v14, v13, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v27.m256i_u64[1] = 0LL;
      ObfDereferenceObjectWithTag(v14, 0x72496F50u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v5 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v6 = v26;
      v7 = 0;
      if ( *(__int128 **)(v26 + 8) != &v26 || **((__int128 ***)&v26 + 1) != &v26 )
        goto LABEL_57;
      **((_QWORD **)&v26 + 1) = v26;
      *(_QWORD *)(v6 + 8) = *((_QWORD *)&v6 + 1);
      PopIrpWorkerCount = v5;
    }
    else
    {
      v7 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  while ( v7 );
  return PsTerminateSystemThread(0);
}
