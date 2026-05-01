/*
 * XREFs of ?HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z @ 0x180358AA4
 * Callers:
 *     ?RelaySimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x1803595A4 (-RelaySimpleVolumeChanged@SessionInfoItem@GamingAudio@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18033B5D4 (--$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingAudio::AppList::HandleSessionItemSimpleVolumeChanged(GamingAudio::AppList *this, unsigned int a2)
{
  int v3; // eax
  int v4; // eax
  struct IInspectable *v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
         (GamingAudio::AppList *)((char *)this + 104),
         &v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x383,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
      (const char *)(unsigned int)v3);
  if ( v5 )
  {
    v4 = ((__int64 (__fastcall *)(struct IInspectable *, _QWORD))v5->lpVtbl[8].AddRef)(v5, a2);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x386,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
}
