/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14005C360
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14005C320 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 *     ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14005C340 (-ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000E6D0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14004BE70 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMRawOidRequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  unsigned int Flags; // eax
  struct _NDIS_OID_REQUEST *v5; // rsi
  NDIS_OID Oid; // eax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx
  struct NDISWATCHDOG__ *m_ptr; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  unsigned int v12; // ebx
  KIRQL v13; // al
  KIRQL v14; // r15
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  struct _NDIS_OID_REQUEST *v16; // [rsp+40h] [rbp+8h] BYREF

  Flags = a1->Flags;
  v16 = a2;
  v5 = a2;
  if ( (Flags & 0x80u) == 0
    || (Oid = a2->DATA.QUERY_INFORMATION.Oid, Oid != 131334) && Oid != -50265847
    || *(_UNKNOWN **)&a2->NdisReserved[32] != &ndisIntReqGeneric )
  {
    DriverHandle = a1->DriverHandle;
    value = DriverHandle->UnhookedCharacteristics.__ptr_.__value_;
    if ( !value || value->OidRequestHandler == DriverHandle->MiniportDriverCharacteristics.OidRequestHandler )
      m_ptr = a1->PendingOidWatchdog.m_ptr;
    else
      m_ptr = a1->HookedOidWatchdog.m_ptr;
    ndisDisarmWatchdogAsync(m_ptr);
  }
  if ( (*(_DWORD *)&v5->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest(&a1->Header, v5, 1, &v16);
    v5 = v16;
  }
  if ( (*(_DWORD *)&v5->NdisReserved[16] & 0x400) != 0 )
  {
    *(_DWORD *)&v5->NdisReserved[8] = a3;
    KeSetEvent((PRKEVENT)&v5->NdisReserved[40], 0, 0);
  }
  else
  {
    if ( (a1->Flags & 0x80u) == 0 )
    {
      SelectiveSuspend = a1->SelectiveSuspend;
      if ( SelectiveSuspend )
      {
        v12 = a1->Flags;
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        *((_DWORD *)SelectiveSuspend + 128) &= ~1u;
        v14 = v13;
        if ( (v12 & 0x80u) != 0
          && !*((_DWORD *)SelectiveSuspend + 128)
          && !*((_DWORD *)SelectiveSuspend + 129)
          && !*((_DWORD *)SelectiveSuspend + 132)
          && !*((_DWORD *)SelectiveSuspend + 133)
          && !*((_DWORD *)SelectiveSuspend + 130)
          && !*((_DWORD *)SelectiveSuspend + 131)
          && !*((_DWORD *)SelectiveSuspend + 144)
          && !*((_DWORD *)SelectiveSuspend + 127) )
        {
          CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
          CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
      }
    }
    ndisMOidRequestCompleteInternal(a1, v5, a3, 0LL);
  }
}
