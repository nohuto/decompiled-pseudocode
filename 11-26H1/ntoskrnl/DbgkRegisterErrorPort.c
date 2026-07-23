/*
 * XREFs of DbgkRegisterErrorPort @ 0x140B5AFE4
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     DbgkpDereferenceErrorPort @ 0x140534F5C (DbgkpDereferenceErrorPort.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x140728F20 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x140729080 (ZwAlpcDisconnectPort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  wchar_t *Pool2; // rax
  __int64 v6; // rax
  _QWORD *v7; // r15
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 ProcessServerSilo; // r12
  char *v12; // rsi
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // r14
  __int64 v17; // r14
  __int64 v18; // rdx
  ULONG_PTR BufferLength; // [rsp+68h] [rbp-100h] BYREF
  UNICODE_STRING PortName; // [rsp+70h] [rbp-F8h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-E8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-E0h] BYREF
  _PORT_MESSAGE ConnectionMessage; // [rsp+B8h] [rbp-B0h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+E0h] [rbp-88h] BYREF

  v2 = Size;
  PortName = 0LL;
  memset(&ConnectionMessage, 0, sizeof(ConnectionMessage));
  BufferLength = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  if ( !v2 || (v2 & 1) != 0 || v2 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (wchar_t *)ExAllocatePool2(0x101uLL);
  PortName.Buffer = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  PortName.MaximumLength = v2;
  PortName.Length = v2;
  RtlCopyFromUser(Pool2, Src, v2);
  v6 = ExAllocatePool2(0x101uLL);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    *(unsigned int *)((char *)&ConnectionMessage.u1.Length + 2) = -2147483608;
    BufferLength = 40LL;
    PortAttributes.MaxMessageLength = 272LL;
    PortAttributes.MaxPoolUsage = 8704LL;
    PortAttributes.Flags = 0x100000;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwAlpcConnectPort(
           (PHANDLE)(v6 + 8),
           &PortName,
           &ObjectAttributes,
           &PortAttributes,
           0x120000u,
           0LL,
           &ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           0LL);
    v8 = v9;
    if ( v9 == 192 )
    {
      v8 = -1073741749;
    }
    else if ( v9 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1LL;
      Process = CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
      v12 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 936;
      --CurrentThread->KernelApcDisable;
      v14 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v13);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12, v14, (__int64)v12);
      if ( v16 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v16, v15);
        else
          *((_BYTE *)v16 + 10) = 1;
      }
      v17 = *((_QWORD *)v12 + 1);
      if ( !v17 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
      *((_QWORD *)v12 + 1) = v7;
      *((_QWORD *)v12 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((unsigned __int64)v12);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v18);
      v8 = 0;
      v7 = 0LL;
      if ( v17 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v17 + 4), 0) )
          ZwAlpcDisconnectPort(*(HANDLE *)(v17 + 8), 0);
        DbgkpDereferenceErrorPort((volatile signed __int32 *)v17);
      }
      KeSetEvent(*((PRKEVENT *)v12 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
  }
  if ( PortName.Buffer )
    ExFreePool(PortName.Buffer);
  return v8;
}
