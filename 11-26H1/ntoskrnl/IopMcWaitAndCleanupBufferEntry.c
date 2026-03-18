/*
 * XREFs of IopMcWaitAndCleanupBufferEntry @ 0x1405D77E4
 * Callers:
 *     IopIoRingCleanupRegBufferArray @ 0x140797E80 (IopIoRingCleanupRegBufferArray.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x1407981A4 (IopIoRingDispatchRegisterBuffers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopMcDereferenceBufferEntry @ 0x140411A80 (IopMcDereferenceBufferEntry.c)
 *     IopMcTryUnlockMdl @ 0x1405D7788 (IopMcTryUnlockMdl.c)
 */

__int64 __fastcall IopMcWaitAndCleanupBufferEntry(ULONG_PTR BugCheckParameter2)
{
  int v2; // ecx
  KIRQL v4; // al
  __int64 v5; // r9
  _QWORD *v6; // rdx

  v2 = *(_DWORD *)(BugCheckParameter2 + 12);
  if ( (v2 & 6) != 6 )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 12));
    LOBYTE(v2) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 12), 6u);
  }
  if ( (v2 & 4) != 0 )
    return 255LL;
  if ( *(int *)(BugCheckParameter2 + 48) > 0 )
    KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 64), WrMdlCache, 0, 0, 0LL);
  IopMcTryUnlockMdl(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 56));
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F84D28);
  v5 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_QWORD *)(v5 + 8) != BugCheckParameter2 + 16
    || (v6 = *(_QWORD **)(BugCheckParameter2 + 24), *v6 != BugCheckParameter2 + 16) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock(&qword_140F84D28, v4);
  IopMcDereferenceBufferEntry(BugCheckParameter2);
  return 0LL;
}
