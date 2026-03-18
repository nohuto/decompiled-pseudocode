/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1400BF9C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14018A3EC (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x14018A5BC (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x14018A604 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *UserSessionState; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rbx
  void (*v12)(void); // rax

  while ( 1 )
  {
    while ( 1 )
    {
      if ( !NeedsUpdateKeyboardLEDs() )
        goto LABEL_14;
      UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2);
      v5 = (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline()
         ? UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
             UserSessionState,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_)
         : UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
      v6 = v5;
      UserSessionState[3] = v5;
      if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v6 )
          goto LABEL_9;
      }
      else if ( v6 )
      {
        *(_BYTE *)(v6 + 1708) = 1;
LABEL_9:
        if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
        {
          DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
        }
      }
      if ( NeedsUpdateKeyboardLEDs() )
      {
        v9 = W32GetUserSessionState(v8, v7);
        CKeyboardSensor::UpdateKeyboardLEDs(*(CKeyboardSensor **)(v9 + 12928));
      }
      UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
LABEL_14:
      v10 = KeWaitForMultipleObjects(
              *((_DWORD *)this + 13),
              *((PVOID **)this + 1),
              WaitAny,
              WrUserRequest,
              *((_BYTE *)this + 56),
              *((_BYTE *)this + 57),
              0LL,
              *((PKWAIT_BLOCK *)this + 3));
      v11 = (unsigned int)v10;
      if ( v10 < 0 )
        return (unsigned int)v11;
      if ( (unsigned int)v10 >= *((_DWORD *)this + 13) || !LegacyInputDispatcher::HasInputDispatcherObjects(this) )
        break;
      if ( (unsigned int)v11 < *((_DWORD *)this + 10) )
        goto LABEL_20;
      LegacyInputDispatcher::Dispatch(this, v11);
    }
    if ( (unsigned int)v11 >= *((_DWORD *)this + 10) )
      return (unsigned int)v11;
LABEL_20:
    v12 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v11);
    if ( !v12 )
      return (unsigned int)v11;
    v12();
  }
}
