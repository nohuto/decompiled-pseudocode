/*
 * XREFs of ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x18008A930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180023974 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitor@@@Z @ 0x18008AA14 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@AEAPEAUI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::ConvertForMonitorAndView(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct IImmersiveMonitor *a3,
        struct IApplicationView *a4,
        struct tagSIZE *a5)
{
  WindowSizeConverter *v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  struct SizeConversionViewInfo *v9; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct SizeConversionViewInfo *v15; // [rsp+50h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v16; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v17; // [rsp+68h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = 0LL;
  v6 = (WindowSizeConverter *)((char *)this - 88);
  v13 = *((_QWORD *)this - 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  v7 = ((__int64 (__fastcall *)(struct SizeConversionViewInfo **, __int64 *, struct IApplicationView **, struct IImmersiveMonitor **))Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IUnknown *,IApplicationView * &,IImmersiveMonitor * &>)(
         &v15,
         &v13,
         &v17,
         &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = WindowSizeConverter::ConvertWithViewInfo(v6, a2, v15, a5);
    v12 = v11;
    if ( v11 >= 0 )
      v12 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x123,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    return v12;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v7);
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(struct SizeConversionViewInfo *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v8;
  }
}
