/*
 * XREFs of ??$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV?$tuple@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@1@@Z @ 0x180528E68
 * Callers:
 *     ?VirtualDesktopSwitched@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x18052A140 (-VirtualDesktopSwitched@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotification.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802C2908 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$?RAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@_lambda_c67266786afa5014962096fb4a54600c_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@Z @ 0x180528BB0 (--$-RAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@_lambda_c67266786afa5014962096fb4a5.c)
 */

__int64 __fastcall AddRefCountWrappers<IVirtualDesktop *,enum VirtualDesktopSwitchType>(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v8; // [rsp+40h] [rbp+8h] BYREF
  char **v9; // [rsp+50h] [rbp+18h] BYREF
  char ***v10; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v8) = 0;
  v9 = &v8;
  v10 = &v9;
  _lambda_c67266786afa5014962096fb4a54600c_::operator()<IVirtualDesktop * &,enum VirtualDesktopSwitchType &>(
    (int ***)&v10,
    (__int64)&v5,
    (__int64 *)(a1 + 8),
    (int *)a1);
  v3 = (unsigned int)v8;
  if ( (int)v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=((__int64 *)(a2 + 8), (char *)v6);
    v3 = 0;
    *(_DWORD *)a2 = v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v6);
  return v3;
}
