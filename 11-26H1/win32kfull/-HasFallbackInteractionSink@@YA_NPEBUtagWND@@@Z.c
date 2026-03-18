/*
 * XREFs of ?HasFallbackInteractionSink@@YA_NPEBUtagWND@@@Z @ 0x14008FD9C
 * Callers:
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x14008FA04 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool __fastcall HasFallbackInteractionSink(const struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  tagObjLock **v14; // rbx
  __int64 Prop; // rbx
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  char v19; // [rsp+48h] [rbp-8h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *((_QWORD *)a1 + 18);
  v5 = *(unsigned __int16 *)(UserSessionState + 42284);
  v18 = 0;
  W32GetUserSessionState(v7, v6);
  v17 = 0LL;
  v19 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v8) == 1 )
  {
    v19 = 1;
    v11 = W32GetUserSessionState(v10, v9);
    v12 = 0LL;
    if ( v4 != v11 + 42480 )
      v12 = v4;
    *(_QWORD *)&v17 = v12;
    v13 = 0;
    v14 = (tagObjLock **)&v17;
    do
    {
      if ( *v14 )
        tagObjLock::LockExclusive(*v14);
      ++v13;
      ++v14;
    }
    while ( !v13 );
    v18 = 1;
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v5, 1LL);
  if ( v18 && v19 )
  {
    if ( (_QWORD)v17 )
      tagObjLock::UnLockExclusive((tagObjLock *)v17);
    v18 = 0;
  }
  return Prop && (*(_DWORD *)(Prop + 52) & 2) != 0;
}
