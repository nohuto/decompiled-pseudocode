/*
 * XREFs of ??1GamepadButtonTracker@@QEAA@XZ @ 0x1803620DC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UGamepadButtonTracker@@@std@@EEAAXXZ @ 0x180362CD0 (-_Destroy@-$_Ref_count_obj2@UGamepadButtonTracker@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Shutdown@GamepadButtonTracker@@QEAAXXZ @ 0x180362BD8 (-Shutdown@GamepadButtonTracker@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamepadButtonTracker::~GamepadButtonTracker(GamepadButtonTracker *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  GamepadButtonTracker::Shutdown(this);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 17);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    LOBYTE(v2) = v3 != (_QWORD)this + 56;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, v2);
    *((_QWORD *)this + 14) = 0LL;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((GamepadButtonTracker *)((char *)this + 16));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((GamepadButtonTracker *)((char *)this + 8));
}
