/*
 * XREFs of ?xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z @ 0x1402CED30
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptActivate(WindowActions *this, struct tagWND *a2, char a3)
{
  char v3; // bp
  __int64 v6; // rcx
  char v7; // si
  unsigned int *v8; // rdx
  char v9; // di
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // di
  char v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  char v20; // di
  char v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  char v25; // di
  char v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  int v30; // [rsp+50h] [rbp-98h] BYREF
  _DWORD v31[23]; // [rsp+54h] [rbp-94h] BYREF

  v3 = (char)a2;
  memset_0(v31, 0, sizeof(v31));
  v30 = 16;
  v6 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v7 = 0;
  }
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v9 = 0;
  }
  if ( v7 || v9 )
  {
    v10 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      32,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v10);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( v3 )
  {
    v31[0] |= 4u;
    v6 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v15 = 0;
    }
    if ( v14 || v15 )
    {
      v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(v16 + 69160),
        5,
        4,
        33,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 472LL) == *(_QWORD *)(W32GetUserSessionState(v6, v8) + 18888) )
  {
    v31[0] |= 2u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v20 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v21 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v21 = 0;
    }
    if ( v20 || v21 )
    {
      v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v24,
        v23,
        *(_QWORD *)(v22 + 69160),
        5,
        4,
        34,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
    }
  }
  if ( !a3 )
  {
    v31[0] |= 8u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v25 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v25 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v26 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v26 = 0;
    }
    if ( v25 || v26 )
    {
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69160),
        5,
        4,
        35,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
    }
  }
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)this,
    838LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v30,
    0,
    0,
    0LL,
    1,
    1);
}
