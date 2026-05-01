/*
 * XREFs of ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1801340E0
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180133154 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x18013361C (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$PerformCallbackOnView@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@ShellPositionerHelpers@@YAJPEAUIUnknown@@PEAUIApplicationView@@$$QEAV_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Z @ 0x1801343BC (--$PerformCallbackOnView@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@ShellPositionerHelpers@@YA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SizeConversionViewInfo::GetPositionerDataForView(
        SizeConversionViewInfo *this,
        struct IUnknown *a2,
        struct IApplicationView *a3)
{
  int v5; // edi
  __int64 v7[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a3 + 8LL))(a3);
  v7[0] = (__int64)a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
  v5 = ShellPositionerHelpers::PerformCallbackOnView<_lambda_1f0bee7b591eec396a7438297aca16b6_>(a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v5);
    if ( a3 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a3 + 16LL))(a3);
    return (unsigned int)v5;
  }
  else
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a3 + 16LL))(a3);
    return 0LL;
  }
}
