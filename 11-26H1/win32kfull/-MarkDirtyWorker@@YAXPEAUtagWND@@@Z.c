/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x14004EBCC
 * Callers:
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x14004EBCC (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x14004EBCC (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND **a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct tagWND *v12; // rcx
  int v13; // esi
  tagObjLock **v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 Prop; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  struct tagWND *i; // rbx
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+40h] [rbp-10h]
  char v24; // [rsp+48h] [rbp-8h]

  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v4 = a1[18];
    v5 = *(unsigned __int16 *)(UserSessionState + 42288);
    v23 = 0;
    W32GetUserSessionState(v7, v6);
    v22 = 0LL;
    v24 = 0;
    if ( (unsigned int)GET_USERCRIT_DISPOSITION(v8) == 1 )
    {
      v24 = 1;
      v11 = W32GetUserSessionState(v10, v9);
      v12 = 0LL;
      if ( v4 != (struct tagWND *)(v11 + 42480) )
        v12 = v4;
      *(_QWORD *)&v22 = v12;
      v13 = 0;
      v14 = (tagObjLock **)&v22;
      do
      {
        if ( *v14 )
          tagObjLock::LockExclusive(*v14);
        ++v13;
        ++v14;
      }
      while ( !v13 );
      v23 = 1;
    }
    Prop = RealGetProp(a1[18], v5, 1LL);
    if ( v23 && v24 )
    {
      v16 = v22;
      if ( (_QWORD)v22 )
        tagObjLock::UnLockExclusive((tagObjLock *)v22);
      v23 = 0;
    }
    if ( Prop && !*(_BYTE *)(Prop + 73) )
    {
      *(_BYTE *)(Prop + 73) = 1;
      v18 = (_QWORD *)(Prop + 24);
      v19 = W32GetUserSessionState(v16, v15) + 19704;
      v20 = *(_QWORD *)v19;
      if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
        __fastfail(3u);
      *v18 = v20;
      *(_QWORD *)(Prop + 32) = v19;
      *(_QWORD *)(v20 + 8) = v18;
      *(_QWORD *)v19 = v18;
    }
    for ( i = a1[14]; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      MarkDirtyWorker(i);
  }
}
