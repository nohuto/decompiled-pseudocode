/*
 * XREFs of NtMITInitMinuserThread @ 0x1401E0F40
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ProtectHandle @ 0x140133808 (ProtectHandle.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtMITInitMinuserThread(HANDLE Handle, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rdx
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // esi
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)Handle, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v8 = v5;
  UserSessionState[3] = v5;
  v9 = 0;
  if ( v5 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v5 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      if ( !CurrentProcessWin32Process )
        goto LABEL_11;
      v6 = -*(_QWORD *)CurrentProcessWin32Process;
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v11 = v8 & CurrentProcessWin32Process;
      if ( !v11 )
        goto LABEL_11;
      v12 = *(_BYTE *)(v11 + 1200);
      if ( v12 != 1 )
        goto LABEL_11;
    }
    else
    {
      v12 = 0;
    }
    if ( v12 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v7);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
  }
LABEL_11:
  v14 = PtiCurrent(v6, v8);
  v17 = *((unsigned int *)v14 + 340);
  if ( (v17 & 0x1000000) != 0 )
  {
    v9 = 1;
  }
  else
  {
    Object = 0LL;
    v18 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v18 >= 0 )
    {
      v18 = ProtectHandle(Handle, v13, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v18 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *((_QWORD *)v14 + 95) )
        {
          ProtectHandle(*((void **)v14 + 94), v13, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*((HANDLE *)v14 + 94), 1);
          ObfDereferenceObject(*((PVOID *)v14 + 95));
        }
        *((_QWORD *)v14 + 94) = Handle;
        *((_QWORD *)v14 + 95) = Object;
        _InterlockedOr((volatile signed __int32 *)v14 + 130, 0x40u);
        *((_QWORD *)v14 + 170) |= 0x1000000uLL;
      }
    }
    LOBYTE(v9) = v18 >= 0;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v17, v13, v15, v16);
  return v9;
}
