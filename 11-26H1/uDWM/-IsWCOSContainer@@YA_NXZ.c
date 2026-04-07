/*
 * XREFs of ?IsWCOSContainer@@YA_NXZ @ 0x1800E58A8
 * Callers:
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010CF0 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180014F5C (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180021580 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x18005454C (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180079370 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800E5A28 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsWCOSContainer(void)
{
  int v0; // eax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_180118AF8;
  if ( !dword_180118AF8 )
  {
    v2 = 0;
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
      v0 = 2 - (v2 != 0);
    else
      v0 = 2;
    dword_180118AF8 = v0;
  }
  return v0 == 1;
}
