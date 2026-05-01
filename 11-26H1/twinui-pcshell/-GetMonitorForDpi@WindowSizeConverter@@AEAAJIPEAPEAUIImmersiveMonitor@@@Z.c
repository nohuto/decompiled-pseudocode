/*
 * XREFs of ?GetMonitorForDpi@WindowSizeConverter@@AEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x1801C0A58
 * Callers:
 *     ?ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z @ 0x1801C0940 (-ConvertForDpiAndView@WindowSizeConverter@@UEAAJUtagSIZE@@IPEAUIApplicationView@@PEAU2@@Z.c)
 *     ?ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x1804E9410 (-ConvertForDpiAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@IHHPEAUIApplicationView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowSizeConverter::GetMonitorForDpi(
        WindowSizeConverter *this,
        int a2,
        struct IImmersiveMonitor **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int i; // esi
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **); // rdi
  int v18; // eax
  struct IImmersiveMonitor *v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v22; // [rsp+70h] [rbp+30h] BYREF
  int v23; // [rsp+80h] [rbp+40h] BYREF
  int v24; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v20 = 0LL;
  v6 = *((_QWORD *)this + 14);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v8 = v7(v6, &v20);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v22 = 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 24LL))(
            *((_QWORD *)this + 14),
            &v22);
    v9 = v12;
    if ( v12 >= 0 )
    {
      for ( i = 0; i < v22; ++i )
      {
        v19 = 0LL;
        v16 = v20;
        v17 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v20 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        if ( v17(v16, i, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v19) >= 0 )
        {
          v23 = 0;
          v24 = 0;
          v18 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *, int *))(*(_QWORD *)v19 + 112LL))(
                  v19,
                  &v23,
                  &v24);
          v9 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x245,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
              (const char *)(unsigned int)v18);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
            goto LABEL_19;
          }
          if ( a2 == v23 )
          {
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
            *a3 = v19;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
            break;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      }
      if ( *a3 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        return 0LL;
      }
      v9 = -2147023728;
      v13 = 2147943568LL;
      v14 = 592LL;
    }
    else
    {
      v13 = (unsigned int)v12;
      v14 = 572LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)v13);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x239,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v8);
    v10 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return v9;
}
