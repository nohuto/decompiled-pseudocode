/*
 * XREFs of ?RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x1800F1460
 * Callers:
 *     ??$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Details@WRL@Microsoft@@YAJPEAPEAVCWindowIconLoader@@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Z @ 0x1800F136C (--$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x1800F16D4 (-_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowIconLoader::RuntimeClassInitialize(
        CWindowIconLoader *this,
        struct IWin32ApplicationView *a2,
        const struct tagSIZE *a3,
        struct IApplicationViewIconLoaderNotifications *a4,
        struct IIconLoadingFunctions *a5)
{
  struct IIconLoadingFunctions *v9; // rdi
  _QWORD *v10; // r14
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // r10
  int v14; // edi
  int v15; // eax
  __int64 v17; // r10
  int v18; // eax
  __int64 v19; // r10
  int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF

  if ( *((struct IApplicationViewIconLoaderNotifications **)this + 3) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IApplicationViewIconLoaderNotifications *))(*(_QWORD *)a4 + 8LL))(a4);
    v23 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  }
  v9 = a5;
  if ( *((struct IIconLoadingFunctions **)this + 4) != a5 )
  {
    if ( a5 )
      (*(void (__fastcall **)(struct IIconLoadingFunctions *))(*(_QWORD *)a5 + 8LL))(a5);
    a5 = (struct IIconLoadingFunctions *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  }
  *(struct tagSIZE *)((char *)this + 44) = *a3;
  v10 = (_QWORD *)((char *)this + 16);
  v11 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, char *))(*(_QWORD *)a2 + 24LL))(
          a2,
          (char *)this + 16);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 32LL))(
            *((_QWORD *)this + 4),
            *v10,
            4294967282LL);
    v22 = 0LL;
    v14 = 0;
    if ( v13 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v13,
              (char *)this + 44,
              &v22);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x43,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v15);
      else
        v14 = 3;
      if ( v22 )
        goto LABEL_8;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 32LL))(
            *((_QWORD *)this + 4),
            *v10,
            4294967262LL);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v17,
              (char *)this + 44,
              &v22);
      if ( v18 >= 0 )
        v14 = 2;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4F,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v18);
    }
    if ( v22 )
      goto LABEL_8;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 40LL))(
            *((_QWORD *)this + 4),
            0LL,
            32517LL);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v19,
              (char *)this + 44,
              &v22);
      if ( v20 >= 0 )
        v14 = 1;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5C,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v20);
    }
    if ( v22 )
    {
LABEL_8:
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
      *((_DWORD *)this + 10) = v14;
    }
    CWindowIconLoader::_LoadAsyncIcon(this, 1);
    return 0LL;
  }
}
