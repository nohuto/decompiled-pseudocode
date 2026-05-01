/*
 * XREFs of ?DoWork@GammaFlashAsyncOperation@@MEAAJXZ @ 0x180346340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18031B4C0 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GammaFlashAsyncOperation::DoWork(GammaFlashAsyncOperation *this)
{
  unsigned int v2; // r12d
  HRESULT v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  void *v6; // rbx
  __int64 (__fastcall *v7)(void *, _QWORD, __int64 *); // rdi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD); // rdi
  int v12; // eax
  int v13; // r13d
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // ebx
  int v19; // edi
  __int64 v21; // rdx
  const char *v22; // [rsp+28h] [rbp-38h]
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  void *ppFactory; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v2 = 0;
  ppFactory = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppFactory);
  v3 = CreateDXGIFactory(&GUID_7b7166ec_21c7_44ae_b21a_c9ae321ae369, &ppFactory);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0;
    while ( !v23 )
    {
      v6 = ppFactory;
      v7 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      v8 = v7(v6, v5, &v25);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v24 = 0LL;
        do
        {
          v10 = v25;
          v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v25 + 56LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
          v12 = v11(v10, v2, &v24);
          v13 = v12;
          v14 = retaddr;
          if ( v12 >= 0 )
          {
            v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
            v17 = **v24;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
            v12 = v17(v16, &GUID_a6d2316f_af6f_49f0_a8a8_a0c474f10236, &v23);
            v14 = retaddr;
            if ( v12 >= 0 )
              break;
            v15 = 4309LL;
          }
          else
          {
            v15 = 4307LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v14,
            (void *)v15,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v12);
          ++v2;
        }
        while ( v13 != -2005270526 );
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        ++v5;
        v2 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10CC,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v8);
        ++v5;
        if ( v9 == -2005270526 )
        {
          if ( !v23 )
          {
            v4 = -2147467259;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x10DE,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
              (const char *)0x80004005LL,
              (int)"Failed to obtain DXGIOutputPartner for gamma flash",
              v22);
            goto LABEL_22;
          }
          break;
        }
      }
    }
    v18 = 0;
    if ( *((_DWORD *)this + 64) )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)this + 260) )
          goto LABEL_21;
        v19 = (*(__int64 (__fastcall **)(__int64, char *, void *))(*(_QWORD *)v23 + 24LL))(
                v23,
                (char *)this + 240,
                &unk_18079C380);
        if ( v19 < 0 )
          break;
        Sleep(*((_DWORD *)this + 63));
        v19 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)v23 + 24LL))(
                v23,
                &unk_18079C300,
                &unk_18079C380);
        if ( v19 < 0 )
        {
          v21 = 4326LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v19);
          v4 = v19;
          goto LABEL_22;
        }
        Sleep(*((_DWORD *)this + 63));
        if ( (unsigned int)++v18 >= *((_DWORD *)this + 64) )
          goto LABEL_21;
      }
      v21 = 4324LL;
      goto LABEL_25;
    }
LABEL_21:
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C7,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v3);
  }
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppFactory);
  return v4;
}
