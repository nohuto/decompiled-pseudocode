/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x14001F610
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140145D20 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

bool __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  struct tagWND *v3; // rax
  int v4; // eax
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  tagObjLock **v16; // rsi
  __int64 v17; // rbx
  __int64 UserSessionState; // rax
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r14d
  tagObjLock **v28; // rsi
  __int64 Prop; // rsi
  __int128 v30; // [rsp+30h] [rbp-30h] BYREF
  char v31; // [rsp+40h] [rbp-20h]
  char v32; // [rsp+48h] [rbp-18h]

  v2 = a1;
  v3 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      a2 = *((_QWORD *)v3 + 13);
      if ( !a2 )
        break;
      a1 = (struct tagWND *)*((_QWORD *)v3 + 3);
      if ( a1 )
      {
        a1 = (struct tagWND *)*((_QWORD *)a1 + 1);
        if ( a1 )
        {
          if ( a2 == *((_QWORD *)a1 + 3) )
            goto LABEL_5;
        }
      }
      v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
    }
  }
  else
  {
LABEL_5:
    if ( v3 )
    {
      a1 = (struct tagWND *)*((_QWORD *)v3 + 5);
      if ( *((char *)a1 + 233) < 0 )
        return 1;
    }
  }
  v4 = *((_DWORD *)v2 + 95);
  if ( (v4 & 0x40000000) == 0 )
    return 0;
  v6 = 0;
  if ( (v4 & 0x1000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v19 = *((_QWORD *)v2 + 18);
    v20 = *(unsigned __int16 *)(UserSessionState + 42254);
    v31 = 0;
    W32GetUserSessionState(v22, v21);
    v30 = 0LL;
    v32 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      v32 = 1;
      v25 = W32GetUserSessionState(v24, v23);
      v26 = 0LL;
      if ( v19 != v25 + 42456 )
        v26 = v19;
      *(_QWORD *)&v30 = v26;
      v27 = 0;
      v28 = (tagObjLock **)&v30;
      do
      {
        if ( *v28 )
          tagObjLock::LockExclusive(*v28);
        ++v27;
        ++v28;
      }
      while ( !v27 );
      v31 = 1;
    }
    Prop = RealGetProp(*((_QWORD *)v2 + 18), v20, 1LL);
    if ( v31 && v32 )
    {
      a1 = (struct tagWND *)v30;
      if ( (_QWORD)v30 )
        tagObjLock::UnLockExclusive((tagObjLock *)v30);
      v31 = 0;
    }
    if ( Prop && *(_DWORD *)(Prop + 28) )
      return 1;
  }
  if ( (*((_DWORD *)v2 + 95) & 0x1000) != 0 )
    return 0;
  v7 = W32GetUserSessionState(a1, a2);
  v8 = *((_QWORD *)v2 + 18);
  v9 = *(unsigned __int16 *)(v7 + 42256);
  W32GetUserSessionState(v11, v10);
  v31 = 0;
  v30 = 0LL;
  v32 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v32 = 1;
    v14 = W32GetUserSessionState(v13, v12);
    v15 = 0LL;
    if ( v8 != v14 + 42456 )
      v15 = v8;
    *(_QWORD *)&v30 = v15;
    if ( !v31 )
    {
      v16 = (tagObjLock **)&v30;
      do
      {
        if ( *v16 )
          tagObjLock::LockExclusive(*v16);
        ++v6;
        ++v16;
      }
      while ( !v6 );
      v31 = 1;
    }
  }
  v17 = RealGetProp(*((_QWORD *)v2 + 18), v9, 1LL);
  if ( v31 && v32 )
  {
    if ( (_QWORD)v30 )
      tagObjLock::UnLockExclusive((tagObjLock *)v30);
    v31 = 0;
  }
  if ( !v17 )
    return 1;
  return (*(_DWORD *)(v17 + 52) & 2) == 0;
}
