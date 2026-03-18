/*
 * XREFs of ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1400816C4 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1401AA1AC (DxgkOpmGetRedirectionInfo.c)
 *     ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@@Z @ 0x1401D0AB8 (-GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIF.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     CheckGivenTargetIsPartOfCloneGroup @ 0x1402AC654 (CheckGivenTargetIsPartOfCloneGroup.c)
 *     IsCurrentModeAdvancedColor @ 0x1402AC768 (IsCurrentModeAdvancedColor.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x14036ACC4 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403D0C7C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x14042C784 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DmmGetSourceConnectedToTargetInClientVidPn(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  VIDPN_MGR *v7; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v9; // rcx
  const struct DMMVIDPN *v10; // rdx
  char *v11; // rdi
  char *v12; // rcx
  const struct DMMVIDPN *v13; // r8
  const struct DMMVIDPN *v14; // r9
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned int v17; // ebx
  char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  const struct DMMVIDPN *v22; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a3 )
    return 3221225485LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9385;
    return 3223191554LL;
  }
  v6 = a1[395];
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9394;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(VIDPN_MGR **)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, (__int64)v7);
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
    v22 = ClientCommittedVidPnRef;
    v10 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef )
    {
      v11 = (char *)ClientCommittedVidPnRef + 96;
      v12 = 0LL;
      v13 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 120);
      v14 = (const struct DMMVIDPN *)*((_QWORD *)ClientCommittedVidPnRef + 15);
      if ( v14 != (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 120) )
        v12 = (char *)v14 - 8;
      while ( 1 )
      {
        if ( !v12 )
        {
          if ( v14 == v13 || v14 == (const struct DMMVIDPN *)8 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v10) + 24) = v11;
            WdLogGlobalForLineNumber = 245;
          }
          else
          {
            v19 = WdLogNewEntry5_WdTrace(0LL, v10);
            *(_QWORD *)(v19 + 24) = v3;
            *(_QWORD *)(v19 + 32) = v11;
            WdLogGlobalForLineNumber = 240;
          }
          goto LABEL_23;
        }
        if ( *(_DWORD *)(*((_QWORD *)v12 + 12) + 24LL) == (_DWORD)v3 )
          break;
        v18 = (char *)*((_QWORD *)v12 + 1);
        v12 = v18 - 8;
        if ( v18 == (char *)v13 )
          v12 = 0LL;
      }
      v15 = *(unsigned int *)(*((_QWORD *)v12 + 11) + 24LL);
      if ( (_DWORD)v15 != -1 )
      {
        *a3 = v15;
        ReferenceCounted::Release((const struct DMMVIDPN *)((char *)v10 + 24));
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
        return 0LL;
      }
LABEL_23:
      v20 = WdLogNewEntry5_WdTrace(v15, v10);
      *(_QWORD *)(v20 + 32) = a1;
      v17 = -1071774912;
      *(_QWORD *)(v20 + 24) = v3;
      WdLogGlobalForLineNumber = 9432;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, 0LL) + 24) = a1;
      v17 = -1071774884;
      WdLogGlobalForLineNumber = 9419;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v22, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
    return v17;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 9405;
  }
  return result;
}
