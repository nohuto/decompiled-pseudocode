/*
 * XREFs of ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EB50
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021F6F0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x140123A60 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x14021E144 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardAsyncKeyStatePacket(int a1, __int64 a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // r8d
  __int64 CurrentProcessWin32Process; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  if ( v5 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v5 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v6);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
        }
      }
    }
  }
  ApplyKeyStateUpdate(*(_BYTE *)a2, *(_DWORD *)(a2 + 4) != 0, v6);
  v10 = CKeyboardProcessor::HandleLeftRightVKs(*(_BYTE *)a2);
  if ( (_WORD)v10 != *(_WORD *)a2 )
    ApplyKeyStateUpdate(v10, *(_DWORD *)(a2 + 4) != 0, v11);
  UserSessionSwitchLeaveCritWithNonPaged(v10, v9, v11, v12);
  return 1LL;
}
