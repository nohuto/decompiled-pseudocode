/*
 * XREFs of CleanupRemoteHandles @ 0x1401899E0
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 * Callees:
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     GreMultiUserCleanupSession @ 0x140189BA0 (GreMultiUserCleanupSession.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*CleanupRemoteHandles())(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  _QWORD *v23; // rbx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  __int64 (*result)(void); // rax
  __int64 v30; // rcx
  __int64 v31; // rcx

  GreMultiUserCleanupSession();
  if ( *(_QWORD *)(W32GetUserSessionState(v1, v0, v2) + 68912) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 68912));
    *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 68912) = 0LL;
    W32GetUserSessionState(v11, v10, v12);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 68904) )
  {
    v16 = W32GetUserSessionState(v14, v13, v15);
    ObfDereferenceObject(*(PVOID *)(v16 + 68904));
    *(_QWORD *)(W32GetUserSessionState(v18, v17, v19) + 68904) = 0LL;
    W32GetUserSessionState(v21, v20, v22);
  }
  v23 = (_QWORD *)W32GetUserSessionState(v14, v13, v15);
  v24 = (void *)v23[8584];
  if ( v24 )
  {
    ObfDereferenceObject(v24);
    v23[8584] = 0LL;
  }
  v25 = (void *)v23[8579];
  if ( v25 )
    ZwClose(v25);
  v26 = (void *)v23[8580];
  if ( v26 )
    ZwClose(v26);
  v27 = (void *)v23[8581];
  *(_OWORD *)(v23 + 8579) = 0LL;
  if ( v27 )
    ZwClose(v27);
  v28 = (void *)v23[8582];
  if ( v28 )
    ZwClose(v28);
  *(_OWORD *)(v23 + 8581) = 0LL;
  result = IsRemoteConnection((__int64)v28);
  if ( (_DWORD)result )
  {
    result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v30) + 48) + 496LL);
    if ( result )
    {
      result = (__int64 (*)(void))result();
      if ( (int)result >= 0 )
      {
        result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31) + 48) + 504LL);
        if ( result )
          return (__int64 (*)(void))result();
      }
    }
  }
  return result;
}
