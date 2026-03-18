/*
 * XREFs of ?GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x140280F30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x140063CD4 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x14009E0E0 (-EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x14009E18C (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403F2E20 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetUsageParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        enum DISPLAY_USE_CASE *a2,
        bool *a3,
        bool *a4)
{
  int DisplayPrimaryUse; // edi
  unsigned __int8 *v9; // [rsp+28h] [rbp-10h] BYREF

  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this);
  DisplayPrimaryUse = EDID_V1_GetDisplayPrimaryUse(0, v9, a2);
  if ( DisplayPrimaryUse >= 0 )
  {
    DisplayPrimaryUse = EDID_V1_GetDisplayIsMsftOnlyPrimaryUse(0, v9, a3);
    if ( DisplayPrimaryUse >= 0 )
    {
      DisplayPrimaryUse = EDID_V1_GetDisplayIsForDesktopUsage(0, v9, a4);
      if ( DisplayPrimaryUse >= 0 )
      {
        DisplayPrimaryUse = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 646;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 645;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 644;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v9);
  return (unsigned int)DisplayPrimaryUse;
}
