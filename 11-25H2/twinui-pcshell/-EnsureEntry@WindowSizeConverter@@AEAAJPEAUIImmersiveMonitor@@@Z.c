/*
 * XREFs of ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180068428
 * Callers:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180067F50 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801137B0 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     _lambda_fa0a17b5823100ead362db86d99d2363_::operator() @ 0x18029ED80 (_lambda_fa0a17b5823100ead362db86d99d2363_--operator().c)
 *     ?GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z @ 0x1804D7290 (-GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ResultFromException__lambda_c8a2fb21ce249544899dca467e4f9e40___ @ 0x1802CF67C (wil--ResultFromException__lambda_c8a2fb21ce249544899dca467e4f9e40___.c)
 */

__int64 __fastcall WindowSizeConverter::EnsureEntry(WindowSizeConverter *this, struct IImmersiveMonitor *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IImmersiveMonitor *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v5[1] = this;
  v5[0] = &v7;
  v2 = wil::ResultFromException__lambda_c8a2fb21ce249544899dca467e4f9e40___(v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x214,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
