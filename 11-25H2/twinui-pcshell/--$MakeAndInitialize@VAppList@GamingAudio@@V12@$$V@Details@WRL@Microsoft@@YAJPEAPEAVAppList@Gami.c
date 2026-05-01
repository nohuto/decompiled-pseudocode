/*
 * XREFs of ??$MakeAndInitialize@VAppList@GamingAudio@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppList@GamingAudio@@@Z @ 0x18033CD2C
 * Callers:
 *     ?add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180352B80 (-add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppList@GamingAudio@@QEAA@XZ @ 0x180340A28 (--0AppList@GamingAudio@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppList@GamingAudio@@QEAAJXZ @ 0x1803596C0 (-RuntimeClassInitialize@AppList@GamingAudio@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GamingAudio::AppList,GamingAudio::AppList,>(
        GamingAudio::AppList **a1)
{
  void *v2; // rax
  int v3; // ebx
  GamingAudio::AppList *v4; // rdi
  GamingAudio::AppList *v6; // [rsp+28h] [rbp-20h] BYREF
  void *v7; // [rsp+30h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v6 = (GamingAudio::AppList *)v2;
  if ( v2 )
  {
    v4 = (GamingAudio::AppList *)GamingAudio::AppList::AppList((GamingAudio::AppList *)v2);
    v6 = v4;
    v7 = 0LL;
    v3 = GamingAudio::AppList::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
      *a1 = v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
      v3 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v7);
  return (unsigned int)v3;
}
