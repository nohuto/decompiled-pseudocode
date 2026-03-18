/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A380
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021AEA0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x14019C34C (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x140219624 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, void **a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  void **v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  CIVDeserializer::Deserialize((CIVDeserializer *)&v12, a2);
  CIVDeserializer::Deserialize((CIVDeserializer *)&v12, (void **)(v3 + 8));
  UserSessionState = (_QWORD *)W32GetUserSessionState(v5, v4);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
  v8 = v7;
  UserSessionState[3] = v7;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v8 )
      goto LABEL_10;
  }
  else
  {
    if ( !v8 )
      goto LABEL_10;
    *(_BYTE *)(v8 + 1708) = 1;
  }
  if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v8) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  ApplyFullKeyboardStates(*a2, a2[1]);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v10);
  return 1LL;
}
