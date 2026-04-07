/*
 * XREFs of ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800AD150
 * Callers:
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C1010 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18008BE84 (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::IsMonitorVirtual(CDWMDXGIEnumeration **this, HMONITOR a2, bool *a3)
{
  int DxgiOutputDescriptor; // eax
  unsigned int v7; // ebx
  _BYTE v9[320]; // [rsp+20h] [rbp-148h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  *a3 = 0;
  memset_0(v9, 0, 0x138uLL);
  DxgiOutputDescriptor = CDWMDXGIEnumeration::FindDxgiOutputDescriptor(this[17], a2, (struct DXGIOutputInfo *)v9);
  v7 = DxgiOutputDescriptor;
  if ( DxgiOutputDescriptor >= 0 )
  {
    if ( v9[220] < 0 )
      *a3 = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDDD,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)DxgiOutputDescriptor);
    return v7;
  }
}
