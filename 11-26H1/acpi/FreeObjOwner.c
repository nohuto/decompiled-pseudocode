/*
 * XREFs of FreeObjOwner @ 0x14000C7F0
 * Callers:
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x14006D43C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 *     FreeObjOwnerWorker @ 0x14006E090 (FreeObjOwnerWorker.c)
 *     ParseUnload @ 0x1400708B0 (ParseUnload.c)
 * Callees:
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall FreeObjOwner(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  NTSTATUS v4; // ebx
  KIRQL v6; // al
  unsigned __int64 Count; // rbx
  struct _KDPC Dpc; // [rsp+40h] [rbp-29h] BYREF
  struct _KTIMER Timer; // [rsp+80h] [rbp+17h] BYREF
  void *ThreadHandle; // [rsp+E0h] [rbp+77h] BYREF

  ThreadHandle = 0LL;
  memset(&Dpc, 0, 60);
  memset(&Timer, 0, sizeof(Timer));
  if ( (gdwfAMLI & 4) == 0 )
    goto LABEL_2;
  if ( !a1
    || (v6 = ExAcquireSpinLockShared(&ACPINamespaceLock),
        Count = a2[3].Count,
        ExReleaseSpinLockShared(&ACPINamespaceLock, v6),
        !Count) )
  {
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, a2);
    KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
    ExWaitForRundownProtectionRelease(a2 + 4);
    KeCancelTimer(&Timer);
LABEL_2:
    HeapFree(a2);
    return 0;
  }
  v4 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, FreeObjOwnerWorker, a2);
  if ( v4 >= 0 )
  {
    v4 = 32772;
    NtClose(ThreadHandle);
  }
  return (unsigned int)v4;
}
