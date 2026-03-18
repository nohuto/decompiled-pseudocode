/*
 * XREFs of DrvGetDisplayConfigBufferSizesInternal @ 0x14007D414
 * Callers:
 *     DrvGetDisplayConfigBufferSizes @ 0x14007CE20 (DrvGetDisplayConfigBufferSizes.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14007D358 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14013DC0C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401D0BF8 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizesInternal(unsigned int a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v7; // ebx
  __int64 result; // rax
  int DisplayConfig; // eax
  bool v10; // [rsp+28h] [rbp-10h]

  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 11957;
  if ( (a1 & 7) == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      v7 = 0;
      DisplayConfig = DispBrokerQueryDisplayConfig(a1 & 0xFFFFFFEF, a1 & 0x10, a2, 0LL, 0LL, v10);
      if ( DisplayConfig != -1073741789 )
        v7 = DisplayConfig;
    }
    else
    {
      v7 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(DxgkWin32kInterface + 208))(a1, a2);
  }
  WdLogSingleEntry1(4LL, v7);
  result = (unsigned int)v7;
  WdLogGlobalForLineNumber = 11988;
  return result;
}
