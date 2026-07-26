/*
 * XREFs of ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0
 * Callers:
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14000B530 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x140019210 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140053270 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     NdisCmAddPartyComplete @ 0x1400D47C0 (NdisCmAddPartyComplete.c)
 *     NdisCmDropPartyComplete @ 0x1400D4860 (NdisCmDropPartyComplete.c)
 *     NdisClMakeCall @ 0x1400D4D90 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1400D4F30 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1400D5250 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1400D68B0 (NdisCoDeleteVc.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qDLLq @ 0x1400D74D8 (WPP_RECORDER_SF_qDLLq.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisDereferenceVcPtr(struct _NDIS_CO_VC_PTR_BLOCK *a1, __int64 a2, int a3, int a4)
{
  struct _NDIS_CO_VC_PTR_BLOCK *v4; // rbx
  KIRQL v5; // al
  bool v6; // zf
  KSPIN_LOCK *p_References; // rdi
  KIRQL v8; // r15
  unsigned int *pVcFlags; // rdx
  char v10; // r14
  KIRQL v11; // al
  int v12; // edx
  int v13; // edx

  v4 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDLLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->pVcFlags, a3, a4);
  v5 = KeAcquireSpinLockRaiseToDpc(&v4->Lock);
  v6 = v4->References-- == 1;
  p_References = (KSPIN_LOCK *)&v4->VcBlock->References;
  v8 = v5;
  if ( v6 )
  {
    pVcFlags = v4->pVcFlags;
    if ( (*pVcFlags & 8) != 0 )
      *pVcFlags &= ~8u;
    if ( v4->CallMiniportDeleteVc )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(pVcFlags) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)pVcFlags,
          20,
          31,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      }
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
      v4->WCoDeleteVcHandler(v4->MiniportContext);
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
    }
    if ( v4 == (struct _NDIS_CO_VC_PTR_BLOCK *)p_References[5] )
    {
      v10 = 0;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(pVcFlags) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)pVcFlags,
          20,
          32,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      }
      v10 = 1;
    }
    KeReleaseSpinLock(&v4->Lock, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x21u,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
        (char)v4,
        v4->VcBlock);
    ExFreePoolWithTag(v4, 0);
    LOBYTE(v4) = 0;
    v11 = KeAcquireSpinLockRaiseToDpc(p_References + 1);
    if ( v10 )
      p_References[4] = 0LL;
    else
      p_References[5] = 0LL;
    if ( p_References[4] || p_References[5] )
    {
      KeReleaseSpinLock(p_References + 1, v11);
    }
    else
    {
      KeReleaseSpinLock(p_References + 1, v11);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          20,
          34,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
          (char)p_References);
      }
      ExFreePoolWithTag(p_References, 0);
    }
  }
  else
  {
    KeReleaseSpinLock(&v4->Lock, v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      20,
      35,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      (char)v4);
  }
}
