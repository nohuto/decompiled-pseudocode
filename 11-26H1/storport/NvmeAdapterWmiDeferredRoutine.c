/*
 * XREFs of NvmeAdapterWmiDeferredRoutine @ 0x1400AE7E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidFreeDeferredItem @ 0x140049E20 (RaidFreeDeferredItem.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

PSLIST_ENTRY __fastcall NvmeAdapterWmiDeferredRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _DEVICE_OBJECT *v4; // rsi
  unsigned int *v5; // r14
  _DWORD *Pool; // rax
  _DWORD *v7; // rbx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = (struct _DEVICE_OBJECT *)(a1 & -(__int64)((*(_BYTE *)(v2 + 144) & 8) != 0));
  if ( v4 )
  {
    v5 = (unsigned int *)(a2 + 32);
    Pool = (_DWORD *)RaidAllocatePool(64LL, *(unsigned int *)(a2 + 32), 1297572178LL, *(_QWORD *)(v2 + 8));
    v7 = Pool;
    if ( Pool )
    {
      memmove(Pool, v5, *v5);
      v7[1] = IoWMIDeviceObjectToProviderId(v4);
      *((_QWORD *)v7 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v7) < 0 )
        ExFreePoolWithTag(v7, 0x4D576152u);
    }
  }
  return RaidFreeDeferredItem((union _SLIST_HEADER *)(v2 + 752), a2);
}
