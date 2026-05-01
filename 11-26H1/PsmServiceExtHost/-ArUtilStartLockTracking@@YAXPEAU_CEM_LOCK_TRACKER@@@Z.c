/*
 * XREFs of ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180014F54
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180014468 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x18001B5E8 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 *     ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180067CC0 (-ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074DBC (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x180074F20 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall ArUtilStartLockTracking(struct _CEM_LOCK_TRACKER *lpTlsValue)
{
  DWORD v2; // ebx

  memset_0(lpTlsValue, 0, 0x88uLL);
  v2 = ArLockTrackerId;
  if ( ArLockTrackerId != -1 )
  {
    if ( TlsGetValue(ArLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v2, lpTlsValue);
  }
}
