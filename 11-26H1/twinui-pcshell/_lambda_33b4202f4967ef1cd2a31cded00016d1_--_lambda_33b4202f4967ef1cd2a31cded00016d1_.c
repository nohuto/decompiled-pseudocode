/*
 * XREFs of _lambda_33b4202f4967ef1cd2a31cded00016d1_::_lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x1802B0764
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1802275CC (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall lambda_33b4202f4967ef1cd2a31cded00016d1_::_lambda_33b4202f4967ef1cd2a31cded00016d1_(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        __int64 *a8)
{
  __int64 v11; // rax

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(_DWORD *)(a1 + 32) = *a6;
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>((_QWORD *)(a1 + 40), a7);
  v11 = *a8;
  *a8 = 0LL;
  *(_QWORD *)(a1 + 48) = v11;
  return a1;
}
