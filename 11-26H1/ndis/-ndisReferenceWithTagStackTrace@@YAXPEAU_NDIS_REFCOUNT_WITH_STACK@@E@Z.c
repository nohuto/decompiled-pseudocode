/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70
 * Callers:
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14000B530 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140010D10 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     NdisDereferenceWithTag @ 0x1400142A0 (NdisDereferenceWithTag.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400168D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016DC0 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1400179F0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019B70 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ndisInterruptDpc @ 0x140019F90 (ndisInterruptDpc.c)
 *     ndisQueueDpcWorkItem @ 0x14001AA60 (ndisQueueDpcWorkItem.c)
 *     ndisMTimerObjectDpc @ 0x14001AFB0 (ndisMTimerObjectDpc.c)
 *     ?ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001C480 (-ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140027820 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041D20 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x14004B070 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x140006C40 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1400669D0 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int v2; // eax
  int *v3; // rsi
  int v6; // edx
  unsigned int v7; // ebp
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // rcx
  __int64 v9; // r9
  char *v10; // r9
  __int64 i; // r8
  int v12; // edx
  _NDIS_REFCOUNT_STACK_BLOCK *Pool2; // rcx
  int v14; // eax
  __int64 v15; // rsi

  v2 = *((_DWORD *)a1 + 14);
  v3 = 0LL;
  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 14) & 0xFFFE) == 0x7FFE )
    {
      *((_DWORD *)a1 + 14) = v2 | 1;
      return;
    }
    v6 = v2 ^ ((unsigned __int16)v2 ^ (unsigned __int16)(v2 + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v2 & 0xFFFE0000) == 0x7FFE0000 )
    {
      *((_DWORD *)a1 + 14) = v2 | 0x10000;
      return;
    }
    v6 = (v2 + 0x20000) ^ (v2 ^ (v2 + 0x20000)) & 0x1FFFF;
  }
  *((_DWORD *)a1 + 14) = v6;
  v7 = ndisCaptureStackTrace();
  Next = a1;
LABEL_9:
  if ( !Next )
  {
    if ( !v3 )
    {
      Pool2 = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePool2(64LL, 56LL, 2020754510LL);
      if ( !Pool2 )
      {
        v14 = 1;
        if ( !a2 )
          v14 = 0x10000;
        *((_DWORD *)a1 + 14) |= v14;
        ndisReleaseStackTrace(v7);
        return;
      }
      v15 = 8LL;
      Pool2->Next = a1->Block.Next;
      if ( !a2 )
        v15 = 32LL;
      a1->Block.Next = Pool2;
      v3 = (int *)((char *)Pool2 + v15);
    }
    *v3 = (*v3 & 0x3FFFFFF | 0x4000000) ^ (v7 ^ (*v3 & 0x3FFFFFF | 0x4000000)) & 0x3FFFFFF;
    return;
  }
  v9 = 8LL;
  if ( !a2 )
    v9 = 32LL;
  v10 = (char *)Next + v9;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 6 )
    {
      Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
      goto LABEL_9;
    }
    v12 = *(_DWORD *)&v10[4 * i];
    if ( (v12 & 0x3FFFFFF) == v7 && (v12 & 0xFC000000) < 0xFC000000 )
      break;
    if ( !v3 && (v12 & 0x3FFFFFF) == 0 )
      v3 = (int *)&v10[4 * i];
  }
  *(_DWORD *)&v10[4 * i] = (v12 + 0x4000000) ^ (v12 ^ (v12 + 0x4000000)) & 0x3FFFFFF;
  ndisReleaseStackTrace(v7);
}
