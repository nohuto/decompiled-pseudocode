/*
 * XREFs of ?TraceTopology@CMonitorTopology@@QEBAXXZ @ 0x1402C8FF4
 * Callers:
 *     ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x14015C68C (-LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDDDDDDDDDDDDDD @ 0x1402C956C (WPP_RECORDER_AND_TRACE_SF_DDDDDDDDDDDDDDDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DLD @ 0x1402C9820 (WPP_RECORDER_AND_TRACE_SF_DLD.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddddqss @ 0x1402C9910 (WPP_RECORDER_AND_TRACE_SF_dddddddddqss.c)
 */

void __fastcall CMonitorTopology::TraceTopology(CMonitorTopology *this)
{
  bool v1; // r14
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  unsigned int v8; // esi
  __int64 v9; // r8
  char v10; // di
  char v11; // bl
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // r9
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // rbx
  __int16 v19; // di
  int v20; // esi
  int v21; // ebp
  int v22; // r14d
  int v23; // r15d
  int v24; // r12d
  int v25; // r13d
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // r9
  const char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r11
  __int64 v34; // r10
  char v35; // r9
  char v36; // al
  char v37; // bl
  char v38; // di
  char v39; // si
  char v40; // bp
  char v41; // r14
  char v42; // r15
  char v43; // r12
  char v44; // r13
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  int v48; // [rsp+20h] [rbp-128h]
  int v49; // [rsp+28h] [rbp-120h]
  int v50; // [rsp+30h] [rbp-118h]
  int v51; // [rsp+38h] [rbp-110h]
  int v52; // [rsp+C0h] [rbp-88h]
  int v53; // [rsp+C4h] [rbp-84h]
  char v54; // [rsp+C4h] [rbp-84h]
  int v55; // [rsp+C8h] [rbp-80h]
  char v56; // [rsp+C8h] [rbp-80h]
  const char *v57; // [rsp+D0h] [rbp-78h]
  char v58; // [rsp+D0h] [rbp-78h]
  char v59; // [rsp+D8h] [rbp-70h]
  char v60; // [rsp+DCh] [rbp-6Ch]
  char v61; // [rsp+E0h] [rbp-68h]
  char v62; // [rsp+E4h] [rbp-64h]
  char v63; // [rsp+E8h] [rbp-60h]
  __int64 v64; // [rsp+F0h] [rbp-58h]
  CMonitorTopology *v65; // [rsp+150h] [rbp+8h]
  char v66; // [rsp+158h] [rbp+10h]
  char v67; // [rsp+158h] [rbp+10h]
  char v68; // [rsp+160h] [rbp+18h]
  char v69; // [rsp+160h] [rbp+18h]
  char v70; // [rsp+168h] [rbp+20h]
  int v71; // [rsp+168h] [rbp+20h]

  v65 = this;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
  {
    v1 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v2 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v2 = 0;
    }
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control || v2 )
    {
      W32GetCurrentWin32kSessionId((__int64)this);
      UserSessionState = W32GetUserSessionState(v4, v3);
      LOBYTE(v6) = v2;
      LOBYTE(v7) = v1;
      WPP_RECORDER_AND_TRACE_SF_DLD(*((_QWORD *)WPP_GLOBAL_Control + 3), v7, v6, *(_QWORD *)(UserSessionState + 69152));
      this = v65;
    }
    v8 = 0;
    v52 = 0;
    if ( *((_DWORD *)this + 1) )
    {
      while ( 1 )
      {
        v9 = 9LL * v8;
        v64 = v9;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v10 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v11 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v11 = 0;
        }
        if ( v10 || v11 )
        {
          v12 = W32GetUserSessionState(this, WPP_GLOBAL_Control);
          LOBYTE(v13) = v11;
          LOBYTE(v14) = v10;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v14,
            v13,
            *(_QWORD *)(v12 + 69152),
            5,
            7,
            23,
            (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
            v8);
          this = v65;
          v9 = 9LL * v8;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v15 = 0;
        }
        v70 = v15;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v16 = 0;
        }
        v68 = v16;
        if ( !v15 && !v16 )
          goto LABEL_37;
        v17 = *((_DWORD *)this + 2 * v9 + 18);
        if ( !v17 )
          break;
        v57 = "TRUE";
        if ( v17 <= 1 )
          goto LABEL_33;
        v66 = 1;
        v57 = "TRUE";
LABEL_34:
        v18 = *((_QWORD *)this + v9 + 2);
        v19 = *((_WORD *)this + 4 * v9 + 28);
        v20 = *((_DWORD *)this + 2 * v9 + 13);
        v21 = *((_DWORD *)this + 2 * v9 + 12);
        v22 = *((_DWORD *)this + 2 * v9 + 11);
        v23 = *((_DWORD *)this + 2 * v9 + 10);
        v24 = *((_DWORD *)this + 2 * v9 + 9);
        v25 = *((_DWORD *)this + 2 * v9 + 8);
        v53 = *((_DWORD *)this + 2 * v9 + 7);
        v55 = *((_DWORD *)this + 2 * v9 + 6);
        v26 = W32GetUserSessionState(this, WPP_GLOBAL_Control);
        LOBYTE(v27) = v68;
        LOBYTE(v28) = v70;
        v29 = *(_QWORD *)(v26 + 69152);
        v30 = "TRUE";
        if ( !v66 )
          v30 = "FALSE";
        WPP_RECORDER_AND_TRACE_SF_dddddddddqss(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          v29,
          v48,
          v49,
          v50,
          v51,
          v55,
          v53,
          v25,
          v24,
          v23,
          v22,
          v21,
          v20,
          v19,
          v18,
          (__int64)v30,
          (__int64)v57);
        this = v65;
        v8 = v52;
LABEL_37:
        v31 = v64;
        v32 = 0LL;
        v71 = 0;
        if ( *((_DWORD *)this + 2 * v64 + 18) )
        {
          do
          {
            v33 = *((_QWORD *)this + v31 + 8);
            v34 = 5 * v32;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
              || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v35 = 0;
            }
            v69 = v35;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v36 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
            {
              v36 = 0;
            }
            v67 = v36;
            if ( v35 || v36 )
            {
              v37 = *(_BYTE *)(v33 + 4 * v34 + 19);
              v38 = *(_BYTE *)(v33 + 4 * v34 + 18);
              v39 = *(_BYTE *)(v33 + 4 * v34 + 17);
              v40 = *(_BYTE *)(v33 + 4 * v34 + 16);
              v41 = *(_BYTE *)(v33 + 4 * v34 + 15);
              v42 = *(_BYTE *)(v33 + 4 * v34 + 14);
              v43 = *(_BYTE *)(v33 + 4 * v34 + 13);
              v44 = *(_BYTE *)(v33 + 4 * v34 + 12);
              v56 = *(_BYTE *)(v33 + 4 * v34 + 11);
              v54 = *(_BYTE *)(v33 + 4 * v34 + 10);
              v59 = *(_BYTE *)(v33 + 4 * v34 + 9);
              v60 = *(_BYTE *)(v33 + 4 * v34 + 8);
              v61 = *(_BYTE *)(v33 + 4 * v34 + 7);
              v62 = *(_BYTE *)(v33 + 4 * v34 + 6);
              v63 = *(_BYTE *)(v33 + 4 * v34 + 5);
              v58 = *(_BYTE *)(v33 + 4 * v34 + 4);
              v45 = W32GetUserSessionState(this, v31);
              LOBYTE(v46) = v67;
              LOBYTE(v47) = v69;
              WPP_RECORDER_AND_TRACE_SF_DDDDDDDDDDDDDDDD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v47,
                v46,
                *(_QWORD *)(v45 + 69152),
                v48,
                v49,
                v50,
                v51,
                v58,
                v63,
                v62,
                v61,
                v60,
                v59,
                v54,
                v56,
                v44,
                v43,
                v42,
                v41,
                v40,
                v39,
                v38,
                v37);
              this = v65;
              v31 = v64;
            }
            v32 = (unsigned int)(v71 + 1);
            v71 = v32;
          }
          while ( (unsigned int)v32 < *((_DWORD *)this + 2 * v31 + 18) );
          v8 = v52;
        }
        v52 = ++v8;
        if ( v8 >= *((_DWORD *)this + 1) )
          return;
      }
      v57 = "FALSE";
LABEL_33:
      v66 = 0;
      goto LABEL_34;
    }
  }
}
