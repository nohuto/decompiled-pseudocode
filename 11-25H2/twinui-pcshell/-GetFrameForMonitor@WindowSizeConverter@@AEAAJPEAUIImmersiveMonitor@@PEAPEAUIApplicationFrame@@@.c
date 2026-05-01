/*
 * XREFs of ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18029ED00
 * Callers:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180067F50 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801137B0 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z @ 0x1804D7290 (-GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z.c)
 *     ?GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplicationViewTitlebarConfiguration@@PEAUtagRECT@@@Z @ 0x1804D7430 (-GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplic.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ResultFromException__lambda_fa0a17b5823100ead362db86d99d2363___ @ 0x18029ED60 (wil--ResultFromException__lambda_fa0a17b5823100ead362db86d99d2363___.c)
 */

__int64 __fastcall WindowSizeConverter::GetFrameForMonitor(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        struct IApplicationFrame **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v8; // [rsp+58h] [rbp+10h] BYREF
  struct IApplicationFrame **v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v6[0] = this;
  v6[1] = &v8;
  v6[2] = &v9;
  v3 = wil::ResultFromException__lambda_fa0a17b5823100ead362db86d99d2363___(v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25F,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
