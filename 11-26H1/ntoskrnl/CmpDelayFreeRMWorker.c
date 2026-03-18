/*
 * XREFs of CmpDelayFreeRMWorker @ 0x140B43590
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *CmpDelayFreeRMWorker()
{
  PERESOURCE *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  while ( 1 )
  {
    v0 = (PERESOURCE *)CmpDelayFreeRMListHead;
    if ( CmpDelayFreeRMListHead == &CmpDelayFreeRMListHead )
      break;
    if ( *((PVOID **)CmpDelayFreeRMListHead + 1) != &CmpDelayFreeRMListHead
      || (v1 = *(_QWORD *)CmpDelayFreeRMListHead,
          *(PVOID *)(*(_QWORD *)CmpDelayFreeRMListHead + 8LL) != CmpDelayFreeRMListHead) )
    {
      __fastfail(3u);
    }
    CmpDelayFreeRMListHead = *(PVOID *)CmpDelayFreeRMListHead;
    *(_QWORD *)(v1 + 8) = &CmpDelayFreeRMListHead;
    KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
    CmpLockRegistryExclusive();
    ExDeleteResourceLite(v0[16]);
    ExFreePoolWithTag(v0[16], 0);
    ExFreePoolWithTag(v0, 0x6D524D43u);
    CmpUnlockRegistry(v2);
    ExAcquireFastMutex(&CmpDelayFreeRMLock);
  }
  LOBYTE(WheapPfaLock.Timer.Header.WaitListHead.Blink) = 0;
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
}
