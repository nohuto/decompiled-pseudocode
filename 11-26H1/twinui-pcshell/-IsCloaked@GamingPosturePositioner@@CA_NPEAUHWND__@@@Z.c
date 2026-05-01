/*
 * XREFs of ?IsCloaked@GamingPosturePositioner@@CA_NPEAUHWND__@@@Z @ 0x1804FED00
 * Callers:
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180500E90 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall GamingPosturePositioner::IsCloaked(HWND a1)
{
  HRESULT WindowAttribute; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  pvAttribute = 0;
  WindowAttribute = DwmGetWindowAttribute(a1, 0xEu, &pvAttribute, 4u);
  if ( WindowAttribute >= 0 )
    return pvAttribute != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xF06,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
    (const char *)(unsigned int)WindowAttribute);
  return 0;
}
