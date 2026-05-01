/*
 * XREFs of ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180347AC8
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18034B060 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E6C0 (-InternalRelease@-$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::HandleGamingPostureHotkey(GamingOverlayExperienceManager *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, SID *, GUID *, _QWORD **); // rbx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(_QWORD *, __int64 *); // rdi
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v15 = 0LL;
  v1 = *((_QWORD *)this + 51);
  v2 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, _QWORD **))(*(_QWORD *)v1 + 24LL);
  Microsoft::WRL::ComPtr<IGameInput>::InternalRelease((__int64 *)&v15);
  v3 = v2(v1, &SID_GamingPostureController, &GUID_b525603c_e3b6_51fa_bdfc_1ac36cf03dc8, &v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v14 = 0LL;
    v5 = IsGamingFullScreenExperienceActive();
    v6 = v15;
    v7 = v5 == 0;
    v8 = *v15;
    if ( v7 )
    {
      v9 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v8 + 48);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      v10 = v9(v6, &v14);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 4501LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        goto LABEL_10;
      }
    }
    else
    {
      v12 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v8 + 56);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      v10 = v12(v6, &v14);
      v4 = v10;
      if ( v10 < 0 )
      {
        v11 = 4505LL;
        goto LABEL_6;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    v4 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1190,
    (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  Microsoft::WRL::ComPtr<IGameInput>::InternalRelease((__int64 *)&v15);
  return v4;
}
