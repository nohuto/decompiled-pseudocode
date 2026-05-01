/*
 * XREFs of ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x18008C114
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18008BFB8 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x18008C3D0 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$PerformCallbackOnView@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@ShellPositionerHelpers@@YAJPEAUIUnknown@@PEAUIApplicationView@@$$QEAV_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Z @ 0x18008C1D8 (--$PerformCallbackOnView@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@ShellPositionerHelpers@@YA.c)
 *     ??0_lambda_1f0bee7b591eec396a7438297aca16b6_@@QEAA@PEAVSizeConversionViewInfo@@AEBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1804E9188 (--0_lambda_1f0bee7b591eec396a7438297aca16b6_@@QEAA@PEAVSizeConversionViewInfo@@AEBV-$ComPtr@UIAp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SizeConversionViewInfo::GetPositionerDataForView(
        SizeConversionViewInfo *this,
        struct IUnknown *a2,
        struct IApplicationView *a3)
{
  int v6; // edi
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a3 + 8LL))(a3);
  _lambda_1f0bee7b591eec396a7438297aca16b6_::_lambda_1f0bee7b591eec396a7438297aca16b6_(v8, this, &v11);
  v6 = ShellPositionerHelpers::PerformCallbackOnView<_lambda_1f0bee7b591eec396a7438297aca16b6_>(a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6);
    if ( a3 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a3 + 16LL))(a3);
    return (unsigned int)v6;
  }
  else
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a3 + 16LL))(a3);
    return 0LL;
  }
}
