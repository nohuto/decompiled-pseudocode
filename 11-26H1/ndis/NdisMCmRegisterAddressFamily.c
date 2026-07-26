/*
 * XREFs of NdisMCmRegisterAddressFamily @ 0x1401760E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

NDIS_STATUS __stdcall NdisMCmRegisterAddressFamily(
        NDIS_HANDLE MiniportAdapterHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
        UINT SizeOfCmCharacteristics)
{
  NDIS_STATUS v8; // ebx
  __int64 *i; // rcx
  __int64 Pool2; // rax
  KIRQL v11; // dl
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  v8 = -1073676286;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 0x20000) != 0
    && CmCharacteristics->MajorVersion >= 5u
    && SizeOfCmCharacteristics >= 0x88 )
  {
    for ( i = (__int64 *)*((_QWORD *)MiniportAdapterHandle + 64); i; i = (__int64 *)*i )
    {
      if ( i[2] == *(_QWORD *)&AddressFamily->AddressFamily && *((_DWORD *)i + 6) == AddressFamily->MinorVersion )
      {
        v8 = -1073741823;
        goto LABEL_16;
      }
    }
    if ( (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu) )
    {
      Pool2 = ExAllocatePool2(64LL, 320LL, 1868776526LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)&AddressFamily->AddressFamily;
        *(_DWORD *)(Pool2 + 24) = AddressFamily->MinorVersion;
        *(_OWORD *)(Pool2 + 32) = *(_OWORD *)&CmCharacteristics->MajorVersion;
        *(_OWORD *)(Pool2 + 48) = *(_OWORD *)&CmCharacteristics->CmDeleteVcHandler;
        *(_OWORD *)(Pool2 + 64) = *(_OWORD *)&CmCharacteristics->CmCloseAfHandler;
        *(_OWORD *)(Pool2 + 80) = *(_OWORD *)&CmCharacteristics->CmDeregisterSapHandler;
        *(_OWORD *)(Pool2 + 96) = *(_OWORD *)&CmCharacteristics->CmCloseCallHandler;
        *(_OWORD *)(Pool2 + 112) = *(_OWORD *)&CmCharacteristics->CmAddPartyHandler;
        *(_OWORD *)(Pool2 + 128) = *(_OWORD *)&CmCharacteristics->CmActivateVcCompleteHandler;
        *(_OWORD *)(Pool2 + 144) = *(_OWORD *)&CmCharacteristics->CmModifyCallQoSHandler;
        *(_QWORD *)(Pool2 + 160) = CmCharacteristics->CmRequestCompleteHandler;
        *(_QWORD *)(Pool2 + 8) = 0LL;
        *(_QWORD *)Pool2 = *((_QWORD *)MiniportAdapterHandle + 64);
        *(_DWORD *)(Pool2 + 312) = 5;
        *((_QWORD *)MiniportAdapterHandle + 64) = Pool2;
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu);
        v8 = 0;
      }
      else
      {
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x4Fu);
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741823;
  }
LABEL_16:
  v11 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v11);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  return v8;
}
