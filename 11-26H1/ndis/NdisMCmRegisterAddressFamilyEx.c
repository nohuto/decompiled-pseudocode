/*
 * XREFs of NdisMCmRegisterAddressFamilyEx @ 0x1400D4930
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMCmRegisterAddressFamilyEx(
        NDIS_HANDLE MiniportAdapterHandle,
        PCO_ADDRESS_FAMILY AddressFamily)
{
  NDIS_STATUS v4; // ebx
  _OWORD *v5; // rsi
  __int64 *i; // rcx
  __int64 Pool2; // rax
  __int128 v8; // xmm1
  KIRQL v9; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  v4 = -1073676286;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v5 = (_OWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 632LL);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) != 0 )
  {
    if ( *(_BYTE *)v5 == 0xA5 )
    {
      for ( i = (__int64 *)*((_QWORD *)MiniportAdapterHandle + 64); i; i = (__int64 *)*i )
      {
        if ( i[2] == *(_QWORD *)&AddressFamily->AddressFamily && *((_DWORD *)i + 6) == AddressFamily->MinorVersion )
        {
          v4 = -1073741823;
          goto LABEL_16;
        }
      }
      if ( (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x50u) )
      {
        Pool2 = ExAllocatePool2(64LL, 320LL, 1868776526LL);
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 16) = *(_QWORD *)&AddressFamily->AddressFamily;
          *(_DWORD *)(Pool2 + 24) = AddressFamily->MinorVersion;
          *(_OWORD *)(Pool2 + 168) = *v5;
          *(_OWORD *)(Pool2 + 184) = v5[1];
          *(_OWORD *)(Pool2 + 200) = v5[2];
          *(_OWORD *)(Pool2 + 216) = v5[3];
          *(_OWORD *)(Pool2 + 232) = v5[4];
          *(_OWORD *)(Pool2 + 248) = v5[5];
          *(_OWORD *)(Pool2 + 264) = v5[6];
          *(_OWORD *)(Pool2 + 280) = v5[7];
          v8 = v5[8];
          *(_QWORD *)(Pool2 + 8) = 0LL;
          *(_OWORD *)(Pool2 + 296) = v8;
          *(_QWORD *)Pool2 = *((_QWORD *)MiniportAdapterHandle + 64);
          *(_DWORD *)(Pool2 + 312) = 6;
          *((_QWORD *)MiniportAdapterHandle + 64) = Pool2;
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x50u);
          v4 = 0;
        }
        else
        {
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x50u);
          v4 = -1073741670;
        }
      }
    }
    else
    {
      v4 = -1073676283;
    }
  }
  else
  {
    v4 = -1073741823;
  }
LABEL_16:
  v9 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v9);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  return v4;
}
