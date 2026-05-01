/*
 * XREFs of ?EnsureGamingOverlayEMConnection@GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@AEAAXXZ @ 0x1803383EC
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x1803391B0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18002A230 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??$as@UIGameBarProtocolForResultsLauncher@GamingOverlay@Internal@Windows@@@?$com_ptr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@winrt@@QEBA?A_PXZ @ 0x180337914 (--$as@UIGameBarProtocolForResultsLauncher@GamingOverlay@Internal@Windows@@@-$com_ptr@UIGamingOve.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::EnsureGamingOverlayEMConnection(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *this)
{
  winrt *v1; // rbx
  int v2; // eax
  struct IUnknown **v3; // rax
  void *v4; // r8
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = (winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *)((char *)this + 64);
  if ( !*((_QWORD *)this + 8) )
  {
    v7 = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(**((_QWORD **)this + 7) + 24LL))(
           *((_QWORD *)this + 7),
           &GUID_c44450f0_731e_4fdb_95fe_d031838a5b14,
           &GUID_c44450f0_731e_4fdb_95fe_d031838a5b14,
           &v7);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x59,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturesystemdialog.cpp",
        (const char *)(unsigned int)v2,
        v5);
    v3 = (struct IUnknown **)winrt::com_ptr<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>::as<Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher>(
                               &v7,
                               &v8);
    winrt::copy_from_abi(v1, *v3, v4);
    if ( v8 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v8);
    if ( v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v7);
  }
}
