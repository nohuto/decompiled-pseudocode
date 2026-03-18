/*
 * XREFs of memcmp @ 0x1400A6320
 * Callers:
 *     CompareEventEntry @ 0x140057714 (CompareEventEntry.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140090678 (DpiMdmProcessAdapterBrightness.c)
 *     DpiCompareAcpiPaths @ 0x1400934D8 (DpiCompareAcpiPaths.c)
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140194F34 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1401B77F0 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     NtDxgkDuplicateHandle @ 0x1401EC630 (NtDxgkDuplicateHandle.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?FindEdidInCache@EDIDCACHE@DxgMonitor@@AEAAHU_LUID@@IPEBE@Z @ 0x140270718 (-FindEdidInCache@EDIDCACHE@DxgMonitor@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x140274780 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14027E0EC (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x14033BAC4 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x14033D004 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1403B4880 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@CAHPEBX0@Z @ 0x1403C4340 (-_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@CAHPEBX0@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1403F742C (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x140405088 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1404085E8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x140412E24 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x140419E20 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
