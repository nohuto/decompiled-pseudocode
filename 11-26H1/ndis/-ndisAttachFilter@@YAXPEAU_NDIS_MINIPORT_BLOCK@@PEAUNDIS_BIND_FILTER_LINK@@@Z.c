/*
 * XREFs of ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140163ED0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140158AF0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x140054A80 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_Dq @ 0x140060BF0 (WPP_RECORDER_SF__guid_Dq.c)
 *     WPP_RECORDER_SF__guid_DqD @ 0x140062DC0 (WPP_RECORDER_SF__guid_DqD.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400713F0 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x140142144 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140164010 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 */

void __fastcall ndisAttachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2, __int64 a3)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rcx
  struct _NDIS_FILTER_DRIVER_BLOCK *RunningDriver; // r14
  int v7; // ebp
  __int64 v8; // r8
  int v9; // edx
  int v10; // [rsp+20h] [rbp-108h]
  struct _UNICODE_STRING v11[10]; // [rsp+50h] [rbp-D8h] BYREF

  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, a3, 0x20u, v10, (__int64)&p->_t.Guid);
  v7 = ndisAttachFilterInner(a1, RunningDriver, a2->FilterIndex, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_DqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&a2->BindDriver._p->_t.Guid,
      v8,
      0x21u,
      v10,
      (__int64)&a2->BindDriver._p->_t.Guid);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v7 )
  {
    a2->BindState.m_LastErrorCode = v7;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed) )
    {
      memset(v11, 0, sizeof(v11));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a2, v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            0x1Cu,
            0x22u,
            (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
            v11[0].Buffer,
            *(_QWORD *)&v11[0].Length);
      }
    }
    if ( ndisReferenceFilterDriver(RunningDriver, 0) )
    {
      NdisTraceLoggingRareFilterPath((__int64)RunningDriver);
      ndisDereferenceFilterDriver(RunningDriver, 0, 0);
    }
    else
    {
      NdisTraceLoggingRareFilterPath(0LL);
    }
  }
  else
  {
    ndisClearTransientBindFailuresAboveThisFilter(a1, a2);
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
