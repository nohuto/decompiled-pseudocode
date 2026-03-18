/*
 * XREFs of NtUserCreateActivationObject @ 0x14012ED30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E3C64 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserCreateActivationObject(HWND a1, void *Src, void *a3)
{
  _QWORD *UserSessionState; // rsi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  ULONG v11; // ecx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  struct _OBJECT_ATTRIBUTES *v18; // r8
  __int64 v19; // r9
  NTSTATUS v20; // eax
  char v22; // [rsp+20h] [rbp-78h]
  unsigned __int64 v23; // [rsp+A0h] [rbp+8h] BYREF
  struct _LUID Srca; // [rsp+B8h] [rbp+20h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, Src);
  v8 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v7) = 1;
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v7);
  }
  v10 = v9;
  UserSessionState[3] = v9;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v10 )
      goto LABEL_9;
    *(_BYTE *)(v10 + 1708) = 1;
  }
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  Srca = 0LL;
  if ( !a1 )
  {
    v11 = 87;
LABEL_11:
    UserSetLastError(v11);
    goto LABEL_17;
  }
  v23 = 0LL;
  RtlCopyFromUser(&v23, Src, 8uLL);
  v13 = v23;
  v16 = W32GetUserSessionState(v15, v14);
  v20 = CActivationObjectManager::CreateActivationObject(
          *(CActivationObjectManager **)(v16 + 18864),
          v17,
          v18,
          v19,
          v22,
          a1,
          v13,
          &Srca);
  if ( v20 < 0 )
  {
    v11 = RtlNtStatusToDosError(v20);
    goto LABEL_11;
  }
  v8 = 1;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a3, &Srca, 8uLL);
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  return v8;
}
