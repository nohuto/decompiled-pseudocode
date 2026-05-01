/*
 * XREFs of ??0_lambda_1f0bee7b591eec396a7438297aca16b6_@@QEAA@PEAVSizeConversionViewInfo@@AEBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1804E9188
 * Callers:
 *     ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x18008C114 (-GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall _lambda_1f0bee7b591eec396a7438297aca16b6_::_lambda_1f0bee7b591eec396a7438297aca16b6_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v4; // rcx

  *a1 = a2;
  v4 = a1 + 1;
  *v4 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  return a1;
}
