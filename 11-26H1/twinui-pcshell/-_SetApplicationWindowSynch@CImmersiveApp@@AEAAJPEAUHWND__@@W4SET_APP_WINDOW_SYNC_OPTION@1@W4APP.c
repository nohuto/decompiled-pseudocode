/*
 * XREFs of ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180300CB4
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1802FF790 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180300F30 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800655C0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800AE7DC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1802FF9FC (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdl @ 0x180301558 (WPP_SF_Sdl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::_SetApplicationWindowSynch(__int64 a1, HWND a2, int a3, int a4)
{
  int v7; // ebx
  bool v8; // r15
  struct IUnknown **v9; // rax
  int v10; // ebx
  HWND ApplicationWindow; // rax
  unsigned int v12; // ebx
  void *v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+38h] [rbp-31h] BYREF
  __m128i si128; // [rsp+40h] [rbp-29h] BYREF
  int v17; // [rsp+50h] [rbp-19h]
  int v18; // [rsp+54h] [rbp-15h]
  int v19; // [rsp+58h] [rbp-11h]
  HWND v20; // [rsp+60h] [rbp-9h]
  HWND v21; // [rsp+68h] [rbp-1h]
  __int128 *v22; // [rsp+70h] [rbp+7h]
  bool v23; // [rsp+78h] [rbp+Fh]
  __int128 v24; // [rsp+80h] [rbp+17h] BYREF

  v7 = *(_DWORD *)(a1 + 568) & 4;
  v8 = v7 != 0;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Sdl(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      (_DWORD)a2,
      a3,
      *(_QWORD *)(a1 + 576),
      *(_DWORD *)(a1 + 584),
      1);
  }
  v14 = 0LL;
  if ( v7 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    v9 = (struct IUnknown **)CWRLObjectWithGITSite::SiteUnk(a1 + 48, &v15);
    v10 = IAMPrivate_QueryObject(
            *v9,
            &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
            &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
            &v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    if ( v10 >= 0 )
    {
      v24 = 0LL;
      v15 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *, __int128 *))(*(_QWORD *)(a1 + 112) + 328LL))(a1 + 112, &v15, &v24);
      ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v17 = 0;
      v18 = 6;
      v19 = a4;
      v20 = ApplicationWindow;
      v21 = a2;
      v22 = &v24;
      v23 = v8;
      if ( (*(int (__fastcall **)(void *, __m128i *))(*(_QWORD *)v14 + 40LL))(v14, &si128) < 0 )
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    }
  }
  v12 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288),
          a2);
  if ( v14 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 48LL))(v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  return v12;
}
