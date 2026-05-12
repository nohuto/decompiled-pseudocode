/*
 * XREFs of NvmeNamespacePreProcessSetDevicePowerIrp @ 0x140128AF4
 * Callers:
 *     NvmeNamespaceSetPowerIrp @ 0x1401299C8 (NvmeNamespaceSetPowerIrp.c)
 * Callees:
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 */

__int64 __fastcall NvmeNamespacePreProcessSetDevicePowerIrp(struct _SLIST_ENTRY *a1, __int64 a2, char a3)
{
  _SLIST_ENTRY *Next; // rbx
  _SLIST_ENTRY *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Next = a1[1].Next[8].Next;
  if ( a3 )
  {
    v6 = Next[10].Next;
    if ( LOBYTE(v6->Next) == 1
      && ((__int64)v6[11].Next & 0x100) == 0
      && !_InterlockedCompareExchange((volatile signed __int32 *)&a1[8].Next[6], 1, 0) )
    {
      PoFxActivateComponent(**((_QWORD **)&Next[10].Next->Next + 1), 0LL, 0LL);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&Next[10].Next[7].Next + 1, &LockHandle);
    if ( SHIDWORD(Next[10].Next[4].Next) > 1 )
    {
      BYTE2(a1[8].Next[3].Next) |= 2u;
      *((_QWORD *)&a1[8].Next[3].Next + 1) = a2;
      NvmeNamespaceAcquireRemoveLock((__int64)a1, a2);
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[10].Next[6], a1 + 9);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 259LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return 0LL;
}
