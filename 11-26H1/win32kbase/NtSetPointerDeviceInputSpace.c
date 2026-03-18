/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1401E1B80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401C62DC (RIMSetPointerDeviceInputSpace.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, __int64 a2, void *a3)
{
  _QWORD *UserSessionState; // rsi
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID v15; // rbx
  __int128 *v16; // r8
  NTSTATUS v17; // eax
  ULONG v18; // eax
  PVOID Object; // [rsp+20h] [rbp-38h] BYREF
  __int64 ULong64FromUser; // [rsp+38h] [rbp-20h] BYREF
  __int128 v22; // [rsp+40h] [rbp-18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  Object = 0LL;
  ULong64FromUser = 0LL;
  v22 = 0LL;
  v10 = 1;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) >= 0 )
  {
    if ( a2 )
      ULong64FromUser = RtlReadULong64FromUser(a2);
    if ( a3 )
    {
      v22 = 0LL;
      RtlCopyFromUser(&v22, a3, 0x10uLL);
    }
    v16 = (__int128 *)((unsigned __int64)&v22 & -(__int64)(a3 != 0LL));
    v15 = Object;
    v17 = RIMSetPointerDeviceInputSpace(
            (__int64)Object,
            (struct _LUID *)((unsigned __int64)&ULong64FromUser & -(__int64)(a2 != 0)),
            v16);
    if ( v17 < 0 )
    {
      v10 = 0;
      v18 = RtlNtStatusToDosError(v17);
      UserSetLastError(v18);
    }
  }
  else
  {
    v10 = 0;
    UserSetLastError(87);
    v15 = Object;
  }
  if ( v15 )
    ObfDereferenceObject(v15);
  UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  return v10;
}
