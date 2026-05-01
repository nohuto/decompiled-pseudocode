/*
 * XREFs of ?DoWork@GammaFlashAsyncOperation@@MEAAJXZ @ 0x1803437C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18031EE00 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GammaFlashAsyncOperation::DoWork(GammaFlashAsyncOperation *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r14d
  void *v5; // rbx
  __int64 (__fastcall *v6)(void *, _QWORD, __int64 *); // rdi
  int v7; // eax
  int v8; // ebx
  unsigned int i; // r13d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD); // rdi
  int v12; // eax
  int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  int v16; // eax
  int v17; // ebx
  int v18; // edi
  __int64 v20; // rdx
  const char *v21; // [rsp+28h] [rbp-38h]
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  void *ppFactory; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  ppFactory = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppFactory);
  v2 = CreateDXGIFactory(&GUID_7b7166ec_21c7_44ae_b21a_c9ae321ae369, &ppFactory);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 0;
    while ( !v22 )
    {
      v5 = ppFactory;
      v6 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v7 = v6(v5, v4, &v24);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v23 = 0LL;
        for ( i = 0; ; ++i )
        {
          while ( 1 )
          {
            v10 = v24;
            v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 56LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
            v12 = v11(v10, i, &v23);
            v13 = v12;
            if ( v12 >= 0 )
              break;
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xFF4,
              (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
              (const char *)(unsigned int)v12);
            ++i;
            if ( v13 == -2005270526 )
              goto LABEL_12;
          }
          v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
          v15 = **v23;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
          v16 = v15(v14, &GUID_a6d2316f_af6f_49f0_a8a8_a0c474f10236, &v22);
          if ( v16 >= 0 )
            break;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFF6,
            (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v16);
        }
LABEL_12:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
        ++v4;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xFED,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v7);
        ++v4;
        if ( v8 == -2005270526 )
        {
          if ( !v22 )
          {
            v3 = -2147467259;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0xFFF,
              (__int64)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
              (const char *)0x80004005LL,
              (int)"Failed to obtain DXGIOutputPartner for gamma flash",
              v21);
            goto LABEL_21;
          }
          break;
        }
      }
    }
    v17 = 0;
    if ( *((_DWORD *)this + 62) )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)this + 252) )
          goto LABEL_20;
        v18 = (*(__int64 (__fastcall **)(__int64, char *, void *))(*(_QWORD *)v22 + 24LL))(
                v22,
                (char *)this + 232,
                &unk_180771118);
        if ( v18 < 0 )
          break;
        Sleep(*((_DWORD *)this + 61));
        v18 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)v22 + 24LL))(
                v22,
                &unk_180771108,
                &unk_180771118);
        if ( v18 < 0 )
        {
          v20 = 4103LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v18);
          v3 = v18;
          goto LABEL_21;
        }
        Sleep(*((_DWORD *)this + 61));
        if ( (unsigned int)++v17 >= *((_DWORD *)this + 62) )
          goto LABEL_20;
      }
      v20 = 4101LL;
      goto LABEL_24;
    }
LABEL_20:
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE8,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
  }
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppFactory);
  return v3;
}
