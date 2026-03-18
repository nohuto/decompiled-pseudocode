/*
 * XREFs of DrvQueryDisplayConfigInternal @ 0x14007D4F8
 * Callers:
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     DrvQueryDisplayConfig @ 0x14007D0B0 (DrvQueryDisplayConfig.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14007D358 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14013DC0C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401D0BF8 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvQueryDisplayConfigInternal(
        unsigned int a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v11; // ebx
  __int64 result; // rax
  bool v13; // [rsp+28h] [rbp-20h]
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 12034;
  if ( (a1 & 7) == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      v14 = *a2;
      v11 = DispBrokerQueryDisplayConfig(a1 & 0xFFFFFFEF, a1 & 0x10, &v14, a3, a4, v13);
      if ( v11 >= 0 )
        *a2 = v14;
    }
    else
    {
      v11 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, v8);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, enum DISPLAYCONFIG_TOPOLOGY_ID *))(DxgkWin32kInterface + 216))(
            a1 & 0xFFFFFFEF,
            a1 & 0x10,
            a2,
            a3,
            a4);
  }
  WdLogSingleEntry1(4LL, v11);
  result = (unsigned int)v11;
  WdLogGlobalForLineNumber = 12071;
  return result;
}
