/*
 * XREFs of IopMcWaitAndCleanupBufferEntry @ 0x1405D9FD4
 * Callers:
 *     IopIoRingCleanupRegBufferArray @ 0x14079A9B0 (IopIoRingCleanupRegBufferArray.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x14079ACD4 (IopIoRingDispatchRegisterBuffers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopMcDereferenceBufferEntry @ 0x1404111A0 (IopMcDereferenceBufferEntry.c)
 *     IopMcTryUnlockMdl @ 0x1405D9F78 (IopMcTryUnlockMdl.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F850C8);
  v5 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_QWORD *)(v5 + 8) != BugCheckParameter2 + 16
    || (v6 = *(_QWORD **)(BugCheckParameter2 + 24), *v6 != BugCheckParameter2 + 16) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock(&qword_140F850C8, v4);
  IopMcDereferenceBufferEntry(BugCheckParameter2);
  return 0LL;
}
