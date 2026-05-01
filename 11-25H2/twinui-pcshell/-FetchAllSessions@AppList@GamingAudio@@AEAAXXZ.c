/*
 * XREFs of ?FetchAllSessions@AppList@GamingAudio@@AEAAXXZ @ 0x180358014
 * Callers:
 *     _lambda_31d8d0e2e273500a7c1ca167a6f55928_::operator() @ 0x180357B94 (_lambda_31d8d0e2e273500a7c1ca167a6f55928_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetEndpointSessions@AppList@GamingAudio@@AEAAXV?$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z @ 0x180358180 (-GetEndpointSessions@AppList@GamingAudio@@AEAAXV-$ComPtr@UIMMDevice@@@WRL@Microsoft@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GamingAudio::AppList::FetchAllSessions(GamingAudio::AppList *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, __int64 *); // rbx
  int v4; // r14d
  unsigned int i; // esi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v11 = 0LL;
  v2 = *((_QWORD *)this + 19);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  v4 = v3(v2, (unsigned int)GamingAudio::c_dataFlow, 1LL, &v11);
  if ( v4 >= 0 )
  {
    v10 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
    if ( v4 >= 0 )
    {
      for ( i = 0; i < v10; ++i )
      {
        v12 = 0LL;
        v6 = v11;
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
        v8 = v7(v6, i, &v12);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x26C,
            (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
            (const char *)(unsigned int)v8);
        v9 = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        GamingAudio::AppList::GetEndpointSessions(this, &v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      }
    }
  }
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x272,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
      (const char *)(unsigned int)v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
}
