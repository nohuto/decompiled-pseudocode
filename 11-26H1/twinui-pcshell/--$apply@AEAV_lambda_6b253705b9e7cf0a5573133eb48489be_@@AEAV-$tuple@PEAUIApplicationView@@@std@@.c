/*
 * XREFs of ??$apply@AEAV_lambda_6b253705b9e7cf0a5573133eb48489be_@@AEAV?$tuple@PEAUIApplicationView@@@std@@@std@@YA?A_TAEAV_lambda_6b253705b9e7cf0a5573133eb48489be_@@AEAV?$tuple@PEAUIApplicationView@@@0@@Z @ 0x18054C850
 * Callers:
 *     ?ViewVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIApplicationView@@@Z @ 0x180065250 (-ViewVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::apply<_lambda_6b253705b9e7cf0a5573133eb48489be_ &,std::tuple<IApplicationView *> &>(
        _QWORD *a1,
        int ***a2,
        __int64 *a3)
{
  int **v3; // rdi
  __int64 v5; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = *a3;
  v7 = 0LL;
  if ( **v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v7, v5);
    **v3 = 0;
  }
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a1, &v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return a1;
}
