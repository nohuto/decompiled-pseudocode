/*
 * XREFs of ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x140089BB0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1401693D0 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMUpdateHiddenFlag(struct _NDIS_MINIPORT_BLOCK *a1, bool a2)
{
  KIRQL v4; // al
  unsigned int PnPFlags; // edx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  KIRQL v8; // al
  unsigned __int16 *v9; // rbx
  KIRQL v10; // bp
  __int64 *v11; // rdi
  KIRQL v12; // al

  if ( a2 != ((a1->PnPFlags & 0x1000) != 0) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    PnPFlags = a1->PnPFlags;
    v6 = PnPFlags | 0x1000;
    v7 = PnPFlags & 0xFFFFEFFF;
    if ( !a2 )
      v6 = v7;
    a1->PnPFlags = v6;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    v9 = *(unsigned __int16 **)&WPP_MAIN_CB.SectorSize;
    v10 = v8;
    while ( v9 != &WPP_MAIN_CB.SectorSize )
    {
      v11 = (__int64 *)(v9 - 616);
      if ( *((_BYTE *)v9 + 162) && *(struct _NDIS_MINIPORT_BLOCK **)(v11[176] + 32) == a1 )
      {
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v11[179], 0xEu);
        ++*((_DWORD *)v11 + 326);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v10);
        ndisIfUpdateInterfaceHiddenFlag((struct _NDIS_IF_BLOCK *)(v9 - 616), a2);
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
        v9 = *(unsigned __int16 **)v9;
        v10 = v12;
        IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v11, 0xEu);
      }
      else
      {
        v9 = *(unsigned __int16 **)v9;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v10);
    if ( (a1->Flags & 0x100) == 0 )
      IoInvalidateDeviceState(a1->PhysicalDeviceObject);
  }
}
