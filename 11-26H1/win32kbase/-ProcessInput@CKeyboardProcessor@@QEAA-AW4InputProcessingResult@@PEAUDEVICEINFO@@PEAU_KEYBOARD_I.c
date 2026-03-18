/*
 * XREFs of ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400D5268
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1400D51D0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140123A88 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInput(int a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 UserSessionState; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  *(_QWORD *)(UserSessionState + 24) = v9;
  if ( v9 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v9) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 19720);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19776);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19760);
  }
  v11 = CKeyboardProcessor::ProcessInputNoLock(v10, a2, a3, a4, a5);
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  return v11;
}
