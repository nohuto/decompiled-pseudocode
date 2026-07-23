/*
 * XREFs of SepRmCallLsa @ 0x14030EA80
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     SepRmDispatchDataToLsa @ 0x1404D7174 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtWaitForSingleObject @ 0x14092A200 (NtWaitForSingleObject.c)
 *     AdtpWriteToEtw @ 0x140AAA894 (AdtpWriteToEtw.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140B4E784 (SepAdtOpenEtwReadyEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1)
{
  char v1; // r15
  int v3; // r14d
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *v10; // rax
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v13; // eax
  int v14; // eax
  signed __int32 v15; // r14d
  void *v16; // rcx
  __int64 result; // rax
  _QWORD *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  NTSTATUS v21; // ebx
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  _BYTE v24[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v1 = SepRmAuditingEnabled;
  Handle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    v21 = NtWaitForSingleObject(Handle, 1u, 0LL);
    NtClose(Handle);
    if ( v21 < 0 )
      return (unsigned int)v21;
  }
  if ( v1 )
    KeStackAttachProcess((PRKPROCESS)PspSiloMonitorLock.SuspendEvent.Header.WaitListHead.Flink, &ApcState);
  do
  {
    v4 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_49;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v6 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v22 = (struct _KEVENT *)a1[24];
      if ( v22 )
        KeSetEvent(v22, 0, 0);
    }
    else if ( *((_DWORD *)v6 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v4 = *a1;
      if ( (__int64 **)v6[1] != a1 || (v7 = (__int64 *)*v6, *(__int64 **)(*v6 + 8) != v6) )
LABEL_39:
        __fastfail(3u);
      *a1 = v7;
      v7[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegion();
    if ( !v4 )
    {
LABEL_49:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v18 = a1 + 2;
      v19 = a1[2];
      if ( v19 == (__int64 *)(a1 + 2) )
      {
        v23 = (struct _KEVENT *)a1[25];
        if ( v23 )
          KeSetEvent(v23, 0, 0);
      }
      else if ( *((_DWORD *)v19 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v4 = a1[2];
        if ( (_QWORD *)v19[1] != v18 )
          goto LABEL_39;
        v20 = *v19;
        if ( *(__int64 **)(*v19 + 8) != v19 )
          goto LABEL_39;
        *v18 = v20;
        *(_QWORD *)(v20 + 8) = v18;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v4 )
        continue;
    }
    if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
    {
      if ( v1 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v10 = KeGetCurrentThread();
      v11 = (struct _LIST_ENTRY *)v4[7];
      v24[0] = 0;
      Blink = v10[1].WaitBlock[3].WaitListEntry.Blink;
      v10[1].WaitBlock[3].WaitListEntry.Blink = v11;
      v13 = AdtpWriteToEtw(v4[3], v24);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v13 < 0 )
      {
        SepAdtLastAuditFailStatus = v13;
        _InterlockedIncrement((volatile signed __int32 *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue);
        if ( !v24[0] )
          SepAuditFailed((unsigned int)v13);
      }
      v14 = *((_DWORD *)v4 + 4);
      if ( v14 == 4 || v14 == 5 )
        ExFreePoolWithTag((PVOID)v4[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v15 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v16 = (void *)v4[7];
    v3 = v15 - 1;
    if ( v16 )
    {
      ObfDereferenceObjectWithTag(v16, 0x69416553u);
      v4[7] = 0LL;
    }
    guard_dispatch_icall_no_overrides(v4, v8, v9);
  }
  while ( v3 );
  if ( v1 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  return 0LL;
}
