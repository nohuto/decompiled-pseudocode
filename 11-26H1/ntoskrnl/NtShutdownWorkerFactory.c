/*
 * XREFs of NtShutdownWorkerFactory @ 0x1406D3780
 * Callers:
 *     DifNtShutdownWorkerFactoryWrapper @ 0x14068EBA0 (DifNtShutdownWorkerFactoryWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpShutdownWorkerFactory @ 0x1403A9ED0 (ExpShutdownWorkerFactory.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExSystemExceptionFilter @ 0x140836A60 (ExSystemExceptionFilter.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtShutdownWorkerFactory(HANDLE Handle, volatile void *Address)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS v5; // edi
  char *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  char *v10; // [rsp+88h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForRead(Address, 4uLL, 4u);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object;
    ExpShutdownWorkerFactory((ULONG_PTR)Object);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v6 + 13);
    v10 = v6 + 392;
    _InterlockedAdd((volatile signed __int32 *)Address, *((_DWORD *)v6 + 98));
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v6 + 2), &LockHandle);
    *((_DWORD *)v6 + 98) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  return (unsigned int)v5;
}
