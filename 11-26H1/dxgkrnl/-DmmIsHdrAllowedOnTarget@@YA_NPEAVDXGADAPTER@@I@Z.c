/*
 * XREFs of ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1402DAD90
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1402DB0E0 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1402DB7D8 (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 */

bool __fastcall DmmIsHdrAllowedOnTarget(struct DXGADAPTER *a1, unsigned int a2)
{
  __int64 v4; // rax
  VIDPN_MGR *v6; // rdi
  DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // rax
  bool IsHdrAllowedOnVidPnPath; // bl
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305220) )
    return 0;
  v4 = *((_QWORD *)a1 + 395);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15804;
    return 0;
  }
  v6 = *(VIDPN_MGR **)(v4 + 104);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15812;
    return 0;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v9, *(_QWORD *)(v4 + 104));
  PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v6, a2);
  if ( PathFromTargetInClientVidPn )
  {
    IsHdrAllowedOnVidPnPath = DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath(PathFromTargetInClientVidPn);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 15832;
    IsHdrAllowedOnVidPnPath = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 40));
  return IsHdrAllowedOnVidPnPath;
}
