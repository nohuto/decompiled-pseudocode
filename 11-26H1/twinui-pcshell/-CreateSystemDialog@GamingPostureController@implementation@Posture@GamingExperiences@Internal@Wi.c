/*
 * XREFs of ?CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUGamingPostureSystemDialog@34567@AEBUhstring@7@AEBUguid@7@@Z @ 0x18032A600
 * Callers:
 *     ?CreateSystemDialog@?$produce@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureController@34567@@impl@winrt@@UEAAHPEAXUguid@3@PEAPEAX@Z @ 0x18032A5A0 (-CreateSystemDialog@-$produce@UGamingPostureController@implementation@Posture@GamingExperiences@.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x180337FF4 (--0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QE.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CreateSystemDialog(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rbx
  _QWORD *v9; // [rsp+58h] [rbp+10h]

  v7 = a1 + 152;
  v9 = operator new(0x48uLL);
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::GamingPostureSystemDialog(
    v9,
    a3,
    a4,
    v7);
  *v9 = &winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::`vftable';
  *a2 = v9 + 2;
  return a2;
}
