/*
 * XREFs of FindQMsg @ 0x140066A10
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x140245110 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140145220 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x140212058 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreeDdeXact @ 0x14026C370 (FreeDdeXact.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 *__fastcall FindQMsg(
        struct tagTHREADINFO *a1,
        struct tagMLIST *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 *v6; // r12
  struct tagMLIST *v8; // rdi
  struct tagTHREADINFO *v9; // r15
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // r15
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rdx
  bool v25; // bp
  bool v26; // r15
  __int64 *v27; // rax
  __int64 v28; // rsi
  unsigned __int8 v29; // al
  __int64 v30; // rdi
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 *v36; // [rsp+60h] [rbp-48h]
  struct tagTHREADINFO *v37; // [rsp+B0h] [rbp+8h]
  struct tagMLIST *v38; // [rsp+B8h] [rbp+10h]

  v38 = a2;
  v37 = a1;
  v6 = *(__int64 **)a2;
  v8 = a2;
  v9 = a1;
  v36 = 0LL;
  while ( v6 )
  {
    v10 = v6[2];
    v11 = 0LL;
    W32GetCurrentThreadNonPaged(a1, a2);
    a1 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v13, v12) + 19872);
    if ( (unsigned __int64)(unsigned __int16)v10 < *((_QWORD *)a1 + 1) )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      v17 = *(_DWORD *)(W32GetUserSessionState(v16, v15) + 19896) * (unsigned int)(unsigned __int16)v10
          + *(_QWORD *)(UserSessionState + 19888);
      LOWORD(v10) = WORD1(v10) & 0x7FFF;
      v18 = (_QWORD *)HMPkheFromPhe(v17);
      if ( ((WORD1(v10) & 0x7FFF) == *(_WORD *)(v17 + 26)
         || (_WORD)v10 == 0x7FFF
         || !(_WORD)v10 && PsGetCurrentProcessWow64Process(a1, a2))
        && (*(_BYTE *)(v17 + 25) & 1) == 0
        && *(_BYTE *)(v17 + 24) == 1 )
      {
        v11 = (_QWORD *)*v18;
        if ( *v18 )
          goto LABEL_8;
      }
      v8 = v38;
      v9 = v37;
    }
    if ( v6[2] )
    {
      if ( *((_DWORD *)v6 + 6) == 786 )
        CheckRemoveHotkeyBit(v9, v8);
      v20 = *((_QWORD *)v9 + 59);
      if ( *(__int64 **)(v20 + 80) == v6 && *(struct tagTHREADINFO **)(v20 + 72) == v9 )
      {
        EtwTraceInputQueueUnLocked();
        v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v28 = *(_QWORD *)(*((_QWORD *)v37 + 59) + 72LL);
          v29 = (unsigned __int8)PtiCurrent(*(__int64 *)&WPP_GLOBAL_Control, v24);
          v30 = *((_QWORD *)v37 + 59);
          v31 = v29;
          v34 = W32GetUserSessionState(v33, v32);
          WPP_RECORDER_AND_TRACE_SF_qqq(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v25,
            v26,
            *(_QWORD *)(v34 + 69160),
            4,
            18,
            31,
            (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
            v30,
            v31,
            v28);
        }
        v9 = v37;
        v8 = v38;
        *(_QWORD *)(*((_QWORD *)v37 + 59) + 72LL) = 0LL;
      }
LABEL_22:
      DelQEntry(v8, v6, 1LL);
      v6 = *(__int64 **)v8;
    }
    else
    {
LABEL_8:
      if ( a6 )
      {
        v22 = a3 ? *a3 : 0LL;
        if ( v22 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          LOBYTE(a2) = 11;
          v23 = (struct tagTHREADINFO *)HMValidateHandleNoRip(v6[5], a2);
          a1 = v23;
          if ( v23 )
          {
            if ( (*((_DWORD *)v23 + 16) & 0x200) != 0 )
            {
              FreeDdeXact(v23);
              v9 = v37;
              v8 = v38;
              goto LABEL_22;
            }
          }
        }
      }
      if ( !a3 || a3 == v11 || a3 == (_QWORD *)1 && !v11 )
        goto LABEL_10;
      while ( v11 )
      {
        a1 = (struct tagTHREADINFO *)*(unsigned __int8 *)(v11[5] + 31LL);
        LOBYTE(a1) = (unsigned __int8)a1 & 0xC0;
        if ( (_BYTE)a1 != 64 )
          break;
        v11 = (_QWORD *)v11[13];
        if ( a3 == v11 )
        {
          v21 = 1;
          goto LABEL_29;
        }
      }
      v21 = 0;
LABEL_29:
      if ( v21 )
      {
LABEL_10:
        a1 = (struct tagTHREADINFO *)*((unsigned int *)v6 + 6);
        if ( (unsigned int)((_DWORD)a1 + 2147482655) <= 7 )
          LODWORD(a1) = (unsigned int)a1 & 0x7FFFFFFF;
        if ( !a4 )
        {
          if ( a5 != -1 )
            goto LABEL_14;
          goto LABEL_15;
        }
        if ( a4 <= a5 )
        {
          if ( (unsigned int)a1 < a4 )
            goto LABEL_30;
LABEL_14:
          if ( (unsigned int)a1 > a5 )
            goto LABEL_30;
LABEL_15:
          if ( !a6 )
            return v6;
          v27 = v36;
          if ( !v36 )
            v27 = v6;
          v36 = v27;
          goto LABEL_30;
        }
        if ( (unsigned int)a1 < a5 || (unsigned int)a1 > a4 )
          goto LABEL_15;
        v6 = (__int64 *)*v6;
        v8 = v38;
        v9 = v37;
      }
      else
      {
LABEL_30:
        v6 = (__int64 *)*v6;
        v8 = v38;
        v9 = v37;
      }
    }
  }
  return v36;
}
