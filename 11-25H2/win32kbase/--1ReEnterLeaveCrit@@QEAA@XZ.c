/*
 * XREFs of ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28
 * Callers:
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E1830 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E1920 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1400EBCC0 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserDeleteW32Process @ 0x140162C50 (UserDeleteW32Process.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B6C6C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140218FA0 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 */

void __fastcall ReEnterLeaveCrit::~ReEnterLeaveCrit(ReEnterLeaveCrit *this, __int64 a2)
{
  if ( !*(_BYTE *)this )
    UserSessionSwitchLeaveCritWithNonPaged(0LL, a2);
}
