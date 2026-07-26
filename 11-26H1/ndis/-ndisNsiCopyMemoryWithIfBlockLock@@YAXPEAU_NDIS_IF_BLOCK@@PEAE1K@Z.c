/*
 * XREFs of ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x140001008
 * Callers:
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016F0D0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x14016F790 (ndisNsiGetInterfaceRodInformation.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019B70 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisNsiCopyMemoryWithIfBlockLock(
        struct _NDIS_IF_BLOCK *a1,
        unsigned __int8 *a2,
        unsigned __int8 *Src,
        size_t Size)
{
  size_t v5; // r12
  _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  __int64 v9; // rdx
  KIRQL v10; // di
  KIRQL v11; // al
  KIRQL v12; // bl
  KIRQL v13; // bl

  v5 = (unsigned int)Size;
  Miniport = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( a1->MiniportAvailable )
  {
    LOBYTE(v9) = 2;
    Miniport = a1->Miniport;
    NdisReferenceWithTag(a1->MpRefCountTracker, v9);
    ++a1->MiniportLinkReference;
  }
  else
  {
    memmove(a2, Src, v5);
  }
  KeReleaseSpinLock(&SpinLock, v10);
  if ( Miniport )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&Miniport->Lock);
    Miniport->MiniportThread = KeGetCurrentThread();
    v12 = v11;
    memmove(a2, Src, v5);
    Miniport->MiniportThread = 0LL;
    KeReleaseSpinLock(&Miniport->Lock, v12);
    v13 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    IFBLOCK_DEREFERENCE_MINIPORT_LINK(a1, MPIFREF_QUERYOBJ);
    KeReleaseSpinLock(&SpinLock, v13);
  }
}
