/*
 * XREFs of ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140010D10 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     NdisDereferenceWithTag @ 0x1400142A0 (NdisDereferenceWithTag.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400168D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016DC0 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 * Callees:
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1400669D0 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisFreeRefCountStacksInBlock(struct _NDIS_REFCOUNT_STACK_BLOCK *a1)
{
  ULONG_PTR v2; // rcx

  v2 = *(_DWORD *)a1->References & 0x3FFFFFF;
  if ( (_DWORD)v2 )
  {
    ndisReleaseStackTrace(v2);
    *(_DWORD *)a1->References &= 0xFC000000;
  }
  if ( (*(_DWORD *)a1->Dereferences & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)a1->Dereferences & 0x3FFFFFF);
    *(_DWORD *)a1->Dereferences &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[1] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[1] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[1] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[1] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[1] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[1] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[2] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[2] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[2] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[2] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[2] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[2] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[3] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[3] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[3] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[3] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[3] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[3] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[4] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[4] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[4] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[4] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[4] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[4] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->References[5] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->References[5] & 0x3FFFFFF);
    *(_DWORD *)&a1->References[5] &= 0xFC000000;
  }
  if ( (*(_DWORD *)&a1->Dereferences[5] & 0x3FFFFFF) != 0 )
  {
    ndisReleaseStackTrace(*(_DWORD *)&a1->Dereferences[5] & 0x3FFFFFF);
    *(_DWORD *)&a1->Dereferences[5] &= 0xFC000000;
  }
}
