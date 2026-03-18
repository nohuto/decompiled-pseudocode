/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021ECE0
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021F6F0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1401B6458 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x14021E04C (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, void **a2)
{
  __int64 v3; // rdx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v8; // rax
  int v9; // r8d
  __int64 CurrentProcessWin32Process; // rax
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void **v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = a2;
  CIVDeserializer::Deserialize((CIVDeserializer *)&v17, a2);
  CIVDeserializer::Deserialize((CIVDeserializer *)&v17, (void **)(v3 + 8));
  UserSessionState = (_QWORD *)W32GetUserSessionState(v5, v4, v6);
  v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v8;
  if ( v8 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v8 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v11, v9);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
        }
      }
    }
  }
  ApplyFullKeyboardStates(*a2, a2[1], v9);
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  return 1LL;
}
