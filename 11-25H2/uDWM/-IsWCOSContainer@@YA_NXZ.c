/*
 * XREFs of ?IsWCOSContainer@@YA_NXZ @ 0x1800E9C40
 * Callers:
 *     ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x18000C094 (-UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ.c)
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180015D40 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x1800657F0 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18008A490 (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E6060 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800E9DC0 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsWCOSContainer(void)
{
  int v0; // eax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_18011CB28;
  if ( !dword_18011CB28 )
  {
    v2 = 0;
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
      v0 = 2 - (v2 != 0);
    else
      v0 = 2;
    dword_18011CB28 = v0;
  }
  return v0 == 1;
}
