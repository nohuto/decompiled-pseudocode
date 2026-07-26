/*
 * XREFs of ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x140137840
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14001C9E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwNotifyIfBlockRemoval(struct _NDIS_IF_BLOCK *a1)
{
  struct _NDIS_PCW_DATA_BLOCK *v2; // rdi
  struct _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  struct _NDIS_PCW_DATA_BLOCK *v4; // rax
  void *v5; // rax

  v2 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  PcwDataBlock = a1->PcwDataBlock;
  if ( PcwDataBlock )
  {
    --*((_DWORD *)PcwDataBlock + 42);
    v4 = (struct _NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList;
    a1->PcwDataBlock = 0LL;
    while ( v4 )
    {
      if ( v4 == PcwDataBlock )
      {
        v5 = (void *)*((_QWORD *)v4 + 20);
        if ( v2 )
          *((_QWORD *)v2 + 20) = v5;
        else
          ndisPcwDataBlockList = v5;
        break;
      }
      v2 = v4;
      v4 = (struct _NDIS_PCW_DATA_BLOCK *)*((_QWORD *)v4 + 20);
    }
    if ( !*((_DWORD *)PcwDataBlock + 42) )
      ExFreePoolWithTag(PcwDataBlock, 0);
  }
  ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  KeLeaveCriticalRegion();
}
