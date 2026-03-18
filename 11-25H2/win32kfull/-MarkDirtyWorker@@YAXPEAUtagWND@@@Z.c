/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x14016A158
 * Callers:
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x14016A158 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x14016A158 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND **a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct tagWND *v11; // rcx
  int v12; // esi
  tagObjLock **v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 Prop; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct tagWND *i; // rbx
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  char v22; // [rsp+40h] [rbp-20h]
  char v23; // [rsp+48h] [rbp-18h]

  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v4 = a1[18];
    v5 = *(unsigned __int16 *)(UserSessionState + 42260);
    v22 = 0;
    W32GetUserSessionState(v7, v6);
    v21 = 0LL;
    v23 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      v23 = 1;
      v10 = W32GetUserSessionState(v9, v8);
      v11 = 0LL;
      if ( v4 != (struct tagWND *)(v10 + 42456) )
        v11 = v4;
      *(_QWORD *)&v21 = v11;
      v12 = 0;
      v13 = (tagObjLock **)&v21;
      do
      {
        if ( *v13 )
          tagObjLock::LockExclusive(*v13);
        ++v12;
        ++v13;
      }
      while ( !v12 );
      v22 = 1;
    }
    Prop = RealGetProp(a1[18], v5, 1LL);
    if ( v22 && v23 )
    {
      v15 = v21;
      if ( (_QWORD)v21 )
        tagObjLock::UnLockExclusive((tagObjLock *)v21);
      v22 = 0;
    }
    if ( Prop && !*(_BYTE *)(Prop + 73) )
    {
      *(_BYTE *)(Prop + 73) = 1;
      v17 = (_QWORD *)(Prop + 24);
      v18 = W32GetUserSessionState(v15, v14) + 19672;
      v19 = *(_QWORD *)v18;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
        __fastfail(3u);
      *v17 = v19;
      v17[1] = v18;
      *(_QWORD *)(v19 + 8) = v17;
      *(_QWORD *)v18 = v17;
    }
    for ( i = a1[14]; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      MarkDirtyWorker(i);
  }
}
