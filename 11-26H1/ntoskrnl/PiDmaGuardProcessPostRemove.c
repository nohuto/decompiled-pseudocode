/*
 * XREFs of PiDmaGuardProcessPostRemove @ 0x140B2C010
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404EBFC4 (PiDmaGuardQueueRemoveEntry.c)
 *     PiIommuUninitializeDeviceAts @ 0x1404F8CB0 (PiIommuUninitializeDeviceAts.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PipDmgReevaluateQueue @ 0x140773D50 (PipDmgReevaluateQueue.c)
 *     PiDmaGuardQueueInsertEntry @ 0x140778870 (PiDmaGuardQueueInsertEntry.c)
 *     PiIommuBlockDevice @ 0x1407B79E4 (PiIommuBlockDevice.c)
 *     PipDmgDestroyIommuExtension @ 0x1409DB1F0 (PipDmgDestroyIommuExtension.c)
 */

void __fastcall PiDmaGuardProcessPostRemove(ULONG_PTR MaxDataSize, int a2, char a3)
{
  void *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  ULONG_PTR v9; // rbp
  __int64 v10; // rax

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v8 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720), v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
      if ( *(_WORD *)(MaxDataSize + 40) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v10 = *(_QWORD *)(MaxDataSize + 16);
      if ( v10 && *(_WORD *)(v10 + 56) )
      {
        IoAddTriageDumpDataBlock(v10 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v9, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  if ( a3 && PipDmaGuardPolicy )
  {
    v6 = *(void **)(MaxDataSize + 32);
    if ( a2 == 55 )
    {
      PiDmaGuardQueueInsertEntry(v6, 6);
      PipDmgReevaluateQueue();
    }
    else
    {
      PiDmaGuardQueueRemoveEntry(v6);
    }
  }
}
