/*
 * XREFs of ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x18033847C
 * Callers:
 *     ?CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUGamingPostureSystemDialog@34567@AEBUhstring@7@AEBUguid@7@@Z @ 0x18032D16C (-CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Wi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::GamingPostureSystemDialog(
        __int64 a1,
        const struct winrt::hstring *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureSystemDialog>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(a1 + 24), a2);
  *(_OWORD *)(a1 + 32) = *a3;
  *(_WORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 50) = 0;
  *(_QWORD *)(a1 + 56) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( !*(_QWORD *)a2 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturesystemdialog.cpp",
      (const char *)0x80070057LL,
      v9);
  if ( !*a4 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x23,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturesystemdialog.cpp",
      (const char *)0x80070057LL,
      v9);
  return a1;
}
