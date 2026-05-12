/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1400A6A10
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1400980E4 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     StorIsEventQueueEmpty @ 0x1400AAC58 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1920), &LockHandle);
  ++*(_DWORD *)(a1 + 1912);
  *(_QWORD *)(a1 + 1896) = 0LL;
  *(_DWORD *)(a1 + 1904) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 3368)
    || (result = StorIsEventQueueEmpty(*(_QWORD *)(a1 + 560)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1396) )
  {
    if ( (byte_140173444 & 1) != 0 )
      McTemplateK0zqjujssstq_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        a1 + 2104,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4784LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(_BYTE *)(a1 + 104),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        *(_BYTE *)(a1 + 506) & 1,
        4);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 104));
  }
  return result;
}
