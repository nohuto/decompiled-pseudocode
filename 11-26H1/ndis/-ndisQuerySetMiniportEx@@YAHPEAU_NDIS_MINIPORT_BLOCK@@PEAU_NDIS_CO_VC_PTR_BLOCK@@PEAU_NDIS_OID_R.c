/*
 * XREFs of ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930
 * Callers:
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x140045F20 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140046890 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400492E0 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140049560 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x14004CD50 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ndisQueryCustomGuids @ 0x140083800 (ndisQueryCustomGuids.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x140022AF0 (-ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1400237E0 (WPP_RECORDER_SF_qDqd_ea_1400237E0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     NdisMCoOidRequestComplete @ 0x140041B80 (NdisMCoOidRequestComplete.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041C80 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140042140 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400782D0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char a4,
        struct _NDIS_FILTER_BLOCK *a5,
        struct _NDIS_FILTER_BLOCK *a6)
{
  NDIS_OID Oid; // eax
  bool v7; // r15
  void *MiniportContext; // rdi
  char v9; // r12
  struct _NDIS_FILTER_BLOCK *v13; // r13
  unsigned int PnPFlags; // eax
  unsigned int v15; // edi
  _DWORD *v16; // rax
  unsigned int v17; // ecx
  unsigned int i; // ebp
  int v19; // edx
  int v20; // r8d
  struct _NDIS_MINIPORT_AOAC *AoAc; // rax
  struct _NDIS_MINIPORT_AOAC *v22; // rdx
  unsigned __int64 v23; // rax
  NDIS_STATUS v25; // eax
  unsigned int v26; // eax
  struct _KTIMER Timer; // [rsp+50h] [rbp-78h] BYREF
  char v28; // [rsp+D0h] [rbp+8h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+E0h] [rbp+18h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  v7 = 0;
  MiniportContext = 0LL;
  v28 = Oid;
  UnbiasedInterruptTime = 0LL;
  v9 = a4;
  v13 = a5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      (int)a3,
      0xCu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      Oid,
      a5);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a1->AoAc && a3->RequestType == NdisRequestSetInformation && a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( (a1->DriverVerifyFlags & 0x400) == 0 )
    a3->SupportedRevision = 1;
  if ( *(_QWORD *)&a3->NdisReserved[32] )
    v7 = v9 != 0;
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x100) != 0 )
  {
    v15 = -1073676280;
LABEL_31:
    if ( v7 && v9 )
      ndisMDereferenceOpenUnlocked(*(_QWORD *)&a3->NdisReserved[32], 6u);
    goto LABEL_34;
  }
  if ( (PnPFlags & 0x4000) != 0 )
  {
    v15 = -1073741823;
    goto LABEL_31;
  }
  if ( a1->CurrentDevicePowerState > PowerDeviceD0 && a3->DATA.QUERY_INFORMATION.Oid != -50265855 )
  {
    v15 = -1071448017;
    goto LABEL_31;
  }
  *(_DWORD *)&a3->NdisReserved[16] |= 8u;
  KeInitializeEvent((PRKEVENT)&a3->NdisReserved[40], NotificationEvent, 0);
  v16 = ndisDirectOidRequestPathOids;
  v17 = 0;
  while ( a3->DATA.QUERY_INFORMATION.Oid != *v16 )
  {
    ++v17;
    ++v16;
    if ( v17 >= 0x19 )
      goto LABEL_23;
  }
  *(_DWORD *)&a3->NdisReserved[16] |= 0x200000u;
LABEL_23:
  if ( KeGetCurrentIrql() < 2u )
  {
    for ( i = 0; i < 0x1388; ++i )
    {
      if ( (a1->Flags & 0x300000) == 0 )
        break;
      memset(&Timer, 0, sizeof(Timer));
      KeInitializeTimerEx(&Timer, SynchronizationTimer);
      KeSetTimer(&Timer, (LARGE_INTEGER)-10000LL, 0LL);
      KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
    }
    v13 = a5;
  }
  if ( (a1->Flags & 0x300000) != 0 )
  {
    v15 = -1073676275;
LABEL_30:
    v9 = a4;
    goto LABEL_31;
  }
  if ( (a1->Flags & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)&a3->NdisReserved[16] & 0x200000) != 0 )
      v26 = ndisDoDirectOidRequest(a3, a1, a6, v13);
    else
      v26 = ndisQueueOidRequest(a3, a1, a6, v13);
    v15 = v26;
    if ( v26 == 259 )
    {
      ndisWaitForKernelObject(&a3->NdisReserved[40]);
      v15 = *(_DWORD *)&a3->NdisReserved[8];
      goto LABEL_34;
    }
    goto LABEL_30;
  }
  if ( a2 )
  {
    if ( !ndisReferenceVcPtr(a2) )
    {
      v15 = -1073676286;
      goto LABEL_30;
    }
    MiniportContext = a2->MiniportContext;
  }
  if ( a1->MajorNdisVersion < 6u )
    v25 = ndisMCoOidRequestToRequest(a1, MiniportContext, a3);
  else
    v25 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, MiniportContext, a3);
  if ( v25 == 259 )
    ndisWaitForKernelObject(&a3->NdisReserved[40]);
  else
    NdisMCoOidRequestComplete(a1, a2, a3, v25);
  v15 = *(_DWORD *)&a3->NdisReserved[8];
  if ( a2 )
    ndisDereferenceVcPtr(a2);
LABEL_34:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      v20,
      0xDu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      v28,
      (char)v13,
      v15);
  AoAc = a1->AoAc;
  if ( AoAc && a3->RequestType == NdisRequestSetInformation && a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    ++*((_DWORD *)AoAc + 282);
    *((_QWORD *)a1->AoAc + 142) = (KeQueryUnbiasedInterruptTime() + 5000 - UnbiasedInterruptTime) / 0x2710;
    v22 = a1->AoAc;
    v23 = *((_QWORD *)v22 + 143);
    if ( v23 <= *((_QWORD *)v22 + 142) )
      v23 = *((_QWORD *)v22 + 142);
    *((_QWORD *)v22 + 143) = v23;
    *((_QWORD *)a1->AoAc + 144) += *((_QWORD *)a1->AoAc + 142);
  }
  return v15;
}
