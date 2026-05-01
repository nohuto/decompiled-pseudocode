/*
 * XREFs of _lambda_201adf67891f12ccd8a16b46f471aeff_::_lambda_201adf67891f12ccd8a16b46f471aeff_ @ 0x180304188
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801F1890 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800AE0F8 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800AE0F8.c)
 */

__int64 *__fastcall lambda_201adf67891f12ccd8a16b46f471aeff_::_lambda_201adf67891f12ccd8a16b46f471aeff_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = a3;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 2),
    a4);
  a1[2] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
  return a1;
}
