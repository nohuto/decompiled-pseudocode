/*
 * XREFs of CleanupRemoteHandles @ 0x14002ACB0
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall CleanupRemoteHandles(_QWORD *a1, __int64 a2))(void)
{
  char *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  __int64 (*result)(void); // rax

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  v3 = (char *)a1[7];
  if ( v3 )
  {
    GreDeleteFastMutex(v3);
    a1[7] = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v3, a2) + 68920) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 68920));
    *(_QWORD *)(W32GetUserSessionState(v8, v7) + 68920) = 0LL;
    W32GetUserSessionState(v10, v9);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 68912) )
  {
    v13 = W32GetUserSessionState(v12, v11);
    ObfDereferenceObject(*(PVOID *)(v13 + 68912));
    *(_QWORD *)(W32GetUserSessionState(v15, v14) + 68912) = 0LL;
    W32GetUserSessionState(v17, v16);
  }
  v18 = (_QWORD *)W32GetUserSessionState(v12, v11);
  v19 = (void *)v18[8585];
  if ( v19 )
  {
    ObfDereferenceObject(v19);
    v18[8585] = 0LL;
  }
  v20 = (void *)v18[8580];
  if ( v20 )
    ZwClose(v20);
  v21 = (void *)v18[8581];
  if ( v21 )
    ZwClose(v21);
  v22 = (void *)v18[8582];
  *((_OWORD *)v18 + 4290) = 0LL;
  if ( v22 )
    ZwClose(v22);
  v23 = (void *)v18[8583];
  if ( v23 )
    ZwClose(v23);
  *((_OWORD *)v18 + 4291) = 0LL;
  result = (__int64 (*)(void))IsRemoteConnection();
  if ( (_DWORD)result )
  {
    result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 504LL);
    if ( result )
    {
      result = (__int64 (*)(void))result();
      if ( (int)result >= 0 )
      {
        result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 512LL);
        if ( result )
          return (__int64 (*)(void))result();
      }
    }
  }
  return result;
}
