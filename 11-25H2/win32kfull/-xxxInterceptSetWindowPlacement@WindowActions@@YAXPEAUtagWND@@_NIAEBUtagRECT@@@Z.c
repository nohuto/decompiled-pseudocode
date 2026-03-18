/*
 * XREFs of ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1402D1C6C
 * Callers:
 *     xxxSetWindowPlacement @ 0x14016FB84 (xxxSetWindowPlacement.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z @ 0x1402CCEF0 (-UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptSetWindowPlacement(
        WindowActions *this,
        struct tagWND *a2,
        unsigned int a3,
        __int128 *a4)
{
  char v6; // r13
  char v8; // bl
  char v9; // si
  char v10; // di
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int128 v15; // xmm0
  __int64 v16; // rdx
  char v17; // r14
  char v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  char v22; // di
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  __int16 v26; // [rsp+30h] [rbp-89h]
  unsigned int v27; // [rsp+70h] [rbp-49h] BYREF
  int v28; // [rsp+74h] [rbp-45h]
  int v29; // [rsp+98h] [rbp-21h]
  __int128 v30; // [rsp+9Ch] [rbp-1Dh]

  v6 = (char)a2;
  v8 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v9 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v10 = 0;
  }
  if ( v9 || v10 )
  {
    v11 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v13) = v10;
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      81,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v11);
    v8 = 0;
  }
  memset_0(&v27, 0, 0x60uLL);
  UpdateActionForShowCmd(a3, (struct _WINDOW_ACTION *)&v27);
  v15 = *a4;
  v16 = v27 | 0x40;
  v27 |= 0x40u;
  v30 = v15;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v17 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v18 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v18 = 0;
  }
  if ( v17 || v18 )
  {
    v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v21,
      v20,
      *(_QWORD *)(v19 + 69160),
      5,
      4,
      82,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v30,
      SBYTE4(v30),
      SBYTE8(v30),
      SBYTE12(v30),
      BYTE8(v30) - v30,
      HIDWORD(v30) - DWORD1(v30));
    v16 = v27;
    v8 = 0;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20) != 0 && (v16 & 0x20) == 0 || (v16 & 0x20) != 0 && v29 == 2 )
  {
    if ( v6 )
    {
      v28 |= 0x40u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v22 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v8 = 1;
      }
      if ( v22 || v8 )
      {
        v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
        v26 = 83;
LABEL_36:
        LOBYTE(v25) = v8;
        LOBYTE(v24) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v24,
          v25,
          *(_QWORD *)(v23 + 69160),
          5,
          4,
          v26,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
      }
    }
    else
    {
      v28 |= 0x20u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v22 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v8 = 1;
      }
      if ( v22 || v8 )
      {
        v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
        v26 = 84;
        goto LABEL_36;
      }
    }
  }
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)this,
    838LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v27,
    0,
    0,
    0LL,
    1,
    1);
}
