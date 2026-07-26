/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041D20
 * Callers:
 *     NdisCmCloseAddressFamilyComplete @ 0x140041A50 (NdisCmCloseAddressFamilyComplete.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x140064B80 (NdisCmOpenAddressFamilyComplete.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007FF70 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x14008A2F0 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x14008A8C0 (NdisCmRegisterAddressFamilyEx.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1400A0AA0 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1401770E0 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1401774D0 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F330 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMDereferenceOpenLocked(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  ULONG_PTR v4; // r8
  __int64 v5; // r9
  unsigned __int8 i; // cl
  _BYTE *v7; // rdx
  char v8; // al
  bool v9; // zf
  KSPIN_LOCK *v10; // rcx
  ULONG_PTR v11; // rbp
  unsigned int v12; // edx
  int v13; // ecx

  v3 = a2;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 600));
  v4 = *(_QWORD *)(a1 + 592);
  if ( v4 != 2 && v4 != 3 )
  {
    if ( v4 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v4, 0LL);
    if ( (_BYTE)v3 == 0xFF )
    {
      if ( (*(_BYTE *)v4 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xFFuLL);
      *(_BYTE *)v4 &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v3 >= *(_BYTE *)(v4 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, v4, (unsigned int)v3);
      if ( *(_BYTE *)(v4 + 1) )
      {
        if ( *(_BYTE *)(v4 + 1) == 1 )
        {
          v11 = v4 + (v3 << 6);
          v12 = *(_DWORD *)(v11 + 64);
          v13 = (unsigned __int16)v12 >> 1;
          if ( v12 >> 17 < 0x3FFE && v13 == (v12 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v11 + 8));
            *(_DWORD *)(v11 + 64) &= 0x10001u;
          }
          else
          {
            if ( v13 == 0 && (v12 & 1) == 0 )
              ndisReportRefcountImbalance(*(_QWORD *)(a1 + 592), v3);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v11 + 8), 0);
          }
        }
      }
      else
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          for ( i = 0; i < *(_BYTE *)(v4 + 3); ++i )
          {
            v7 = (_BYTE *)(v5 + 2LL * i);
            if ( *v7 == (_BYTE)v3 )
            {
              v8 = v7[1];
              if ( v8 )
              {
                v7[1] = v8 - 1;
                goto LABEL_17;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)(v4 + 16), v3) )
          ndisReportRefcountImbalance(v4, v3);
      }
    }
  }
LABEL_17:
  v9 = (*(_DWORD *)(a1 + 228))-- == 1;
  v10 = (KSPIN_LOCK *)(a1 + 600);
  if ( v9 )
  {
    KeReleaseSpinLockFromDpcLevel(v10);
    ndisMFinishClose((struct _NDIS_OPEN_BLOCK *)a1);
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(v10);
  }
}
