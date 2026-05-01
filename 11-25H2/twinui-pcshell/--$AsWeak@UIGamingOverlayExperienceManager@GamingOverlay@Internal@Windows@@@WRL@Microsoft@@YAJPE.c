/*
 * XREFs of ??$AsWeak@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@YAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x18035732C
 * Callers:
 *     ?add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180352B80 (-add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x180358BE4 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF

  v11 = 0LL;
  v3 = (**a1)(a1, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v11);
  if ( v3 < 0 )
  {
    v4 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return (unsigned int)v3;
  }
  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v12);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v6 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)v3;
  }
  v7 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v10 = 0LL;
  v9 = *a2;
  *a2 = v7;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
