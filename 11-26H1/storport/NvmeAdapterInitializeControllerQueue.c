/*
 * XREFs of NvmeAdapterInitializeControllerQueue @ 0x1400E9F68
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterSendControlAddNvmeController @ 0x1401A10DC (NvmeAdapterSendControlAddNvmeController.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterInitializeControllerQueue(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 v5; // rbx
  int v6; // ecx
  __int16 v7; // ax

  v5 = 0LL;
  if ( a2 )
  {
    if ( a2 <= *(_WORD *)(a1 + 20) )
      v5 = 192LL * a2 + *(_QWORD *)(a1 + 728) - 192LL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 712);
  }
  if ( !a3 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 104));
    *(_QWORD *)(v5 + 88) = a1;
    *(_WORD *)(v5 + 136) = a2;
    if ( a2 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      v7 = 0;
    }
    else
    {
      v6 = *(unsigned __int16 *)(a1 + 6);
      v7 = 1;
    }
    *(_DWORD *)(v5 + 124) = v6;
    *(_WORD *)(v5 + 150) = v7;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
  }
  *(_QWORD *)(v5 + 112) &= ~4uLL;
  *(_DWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 140) = 0LL;
  *(_WORD *)(v5 + 148) = 0;
  *(_WORD *)(v5 + 152) = 0;
}
