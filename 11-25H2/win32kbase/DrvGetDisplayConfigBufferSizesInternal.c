/*
 * XREFs of DrvGetDisplayConfigBufferSizesInternal @ 0x14002BF94
 * Callers:
 *     DrvGetDisplayConfigBufferSizes @ 0x14002B9B0 (DrvGetDisplayConfigBufferSizes.c)
 *     RIMGetQDCActivePathsData @ 0x14002B9C8 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14002BEE0 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F7B3C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401AEB58 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401ABA3C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizesInternal(unsigned int a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v6; // ebx
  __int64 result; // rax
  int DisplayConfig; // eax
  bool v9; // [rsp+28h] [rbp-10h]

  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 12101;
  if ( (a1 & 7) == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      v6 = 0;
      DisplayConfig = DispBrokerQueryDisplayConfig(a1 & 0xFFFFFFEF, a1 & 0x10, a2, 0LL, 0LL, v9);
      if ( DisplayConfig != -1073741789 )
        v6 = DisplayConfig;
    }
    else
    {
      v6 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(DxgkWin32kInterface + 208))(a1, a2);
  }
  WdLogSingleEntry1(4LL, v6);
  result = (unsigned int)v6;
  WdLogGlobalForLineNumber = 12132;
  return result;
}
