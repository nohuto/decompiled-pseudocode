/*
 * XREFs of ?ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z @ 0x18008B000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x18008B10C (-GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::ConvertForDpiAndView(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        unsigned int a3,
        struct IApplicationView *a4,
        struct tagSIZE *a5)
{
  int MonitorForDpi; // eax
  unsigned int v10; // edi
  struct IImmersiveMonitor *v11; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  struct IImmersiveMonitor *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  MonitorForDpi = WindowSizeConverter::GetMonitorForDpi((WindowSizeConverter *)((char *)this - 88), a3, &v17);
  v10 = MonitorForDpi;
  if ( MonitorForDpi >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(WindowSizeConverter *, struct tagSIZE, struct IImmersiveMonitor *, struct IApplicationView *, struct tagSIZE *))(*(_QWORD *)this + 32LL))(
            this,
            a2,
            v17,
            a4,
            a5);
    v14 = v13;
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x130,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v13);
      v15 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12F,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)MonitorForDpi);
    v11 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v10;
  }
}
