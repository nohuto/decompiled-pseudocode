/*
 * XREFs of _RegisterPointerInputTarget @ 0x14028EC54
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x14029CCA0 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     UpdatePointerRedirIsAlive @ 0x1401AAB4C (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD v27[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 || (v8 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v12 = 87;
    goto LABEL_18;
  }
  UpdatePointerRedirIsAlive(v8);
  v9 = 208LL;
  if ( a3 != 2 )
    v9 = 216LL;
  v10 = (__int64 *)(v9 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  v11 = *v10;
  if ( !a4 )
  {
    if ( v11 == a1 )
    {
      HMAssignmentUnlock(v10);
      UserSessionState = W32GetUserSessionState(v22, v21);
      if ( a3 == 2 )
      {
        *(_DWORD *)(UserSessionState + 336) = 0;
        *(_DWORD *)(W32GetUserSessionState(v25, v24) + 340) = 0;
      }
      else
      {
        *(_DWORD *)(UserSessionState + 344) = 0;
        *(_DWORD *)(W32GetUserSessionState(v25, v24) + 348) = 0;
      }
    }
    return 1LL;
  }
  if ( !v11 )
  {
    v27[0] = v9 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    v27[1] = a1;
    HMAssignmentLock(v27, 0LL);
    v15 = W32GetUserSessionState(v14, v13);
    if ( a3 == 2 )
    {
      *(_DWORD *)(v15 + 336) = 1;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL);
      v18 = *(_DWORD *)(v17 + 56);
      *(_DWORD *)(W32GetUserSessionState(v17, v16) + 340) = v18;
    }
    else
    {
      *(_DWORD *)(v15 + 344) = 1;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL);
      v20 = *(_DWORD *)(v19 + 56);
      *(_DWORD *)(W32GetUserSessionState(v19, v16) + 348) = v20;
    }
    return 1LL;
  }
  if ( v11 == a1 )
    return 1LL;
  v12 = 5;
LABEL_18:
  UserSetLastError(v12);
  return 0LL;
}
