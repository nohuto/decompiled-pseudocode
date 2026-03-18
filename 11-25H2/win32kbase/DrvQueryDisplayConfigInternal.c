/*
 * XREFs of DrvQueryDisplayConfigInternal @ 0x14002C0C8
 * Callers:
 *     RIMGetQDCActivePathsData @ 0x14002B9C8 (RIMGetQDCActivePathsData.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14002BEE0 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     DrvQueryDisplayConfig @ 0x14002C0B0 (DrvQueryDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F7B3C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401AEB58 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401ABA3C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvQueryDisplayConfigInternal(
        unsigned int a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  __int64 v8; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v10; // ebx
  __int64 result; // rax
  bool v12; // [rsp+28h] [rbp-10h]
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 12178;
  if ( (a1 & 7) == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      v13 = *a2;
      v10 = DispBrokerQueryDisplayConfig(a1 & 0xFFFFFFEF, a1 & 0x10, &v13, a3, a4, v12);
      if ( v10 >= 0 )
        *a2 = v13;
    }
    else
    {
      v10 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, enum DISPLAYCONFIG_TOPOLOGY_ID *))(DxgkWin32kInterface + 216))(
            a1 & 0xFFFFFFEF,
            a1 & 0x10,
            a2,
            a3,
            a4);
  }
  WdLogSingleEntry1(4LL, v10);
  result = (unsigned int)v10;
  WdLogGlobalForLineNumber = 12215;
  return result;
}
