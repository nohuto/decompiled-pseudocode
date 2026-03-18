/*
 * XREFs of ?Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402E3AE8
 * Callers:
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E4C80 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     PWInsertAfter @ 0x140048268 (PWInsertAfter.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402E26CC (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 */

char __fastcall Validateaction(const struct _WINDOW_ACTION *a1, struct AdvancedWindowPos::WindowAction *a2)
{
  int v4; // r11d
  char v5; // r14
  int v6; // edi
  bool v7; // bl
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  bool v14; // bl
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  bool v18; // bl
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // rcx
  bool v23; // di
  __int64 v24; // rbx
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // r10d
  __int64 v31; // rdx
  int v32; // r9d
  int v33; // r8d
  int v34; // edi
  _OWORD *v35; // rcx
  int v36; // ebp
  int v37; // edi
  int v38; // esi
  int v39; // ebx
  __int64 v40; // rax
  unsigned int v41; // eax
  int v42; // edi
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // eax
  __int16 v47; // [rsp+30h] [rbp-68h]
  __int16 v48; // [rsp+30h] [rbp-68h]
  __int16 v49; // [rsp+30h] [rbp-68h]
  char v50; // [rsp+40h] [rbp-58h]
  const char *WindowActionStateString; // [rsp+40h] [rbp-58h]
  char v52; // [rsp+A0h] [rbp+8h]

  v4 = 128;
  v5 = 1;
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v6 = *((_DWORD *)a1 + 10);
    if ( v6 )
    {
      switch ( v6 )
      {
        case 1:
          *((_DWORD *)a2 + 10) = 1;
          break;
        case 2:
          *((_DWORD *)a2 + 10) = 2;
          break;
        case 3:
          *((_DWORD *)a2 + 10) = 3;
          break;
        default:
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v5 = 0;
          }
          v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0;
          v50 = *((_DWORD *)a1 + 10);
          v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
          v47 = 106;
          goto LABEL_156;
      }
    }
    else
    {
      *((_DWORD *)a2 + 10) = 0;
    }
    v11 = *(_DWORD *)a1;
    v12 = *(_DWORD *)a1 & 6;
    if ( (*(_DWORD *)a1 & 6) != 0 )
    {
      if ( (v11 & 0x80) != 0 )
      {
        v13 = *((_DWORD *)a1 + 10);
        if ( v13 == 1 || v13 == 3 || v13 == 2 && (*((_DWORD *)a1 + 1) & 0x80) != 0 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v5 = 0;
          }
          v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0;
          W32GetUserSessionState(WPP_GLOBAL_Control, a2);
          WindowActionStateString = GetWindowActionStateString(v13);
          v48 = 107;
          goto LABEL_175;
        }
      }
      if ( v12 != 6 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
        v49 = 108;
        goto LABEL_213;
      }
    }
    if ( *((_DWORD *)a1 + 10) == 3 && v12 != 6 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
      v49 = 109;
      goto LABEL_213;
    }
    *(_DWORD *)a2 |= 0x20u;
  }
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
  {
    *(_DWORD *)a2 |= 0x10u;
    if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
      *((_DWORD *)a2 + 1) |= 4u;
  }
  if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
  {
    if ( (*(_BYTE *)a1 & 6) != 6 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
      v49 = 110;
      goto LABEL_213;
    }
    *((_DWORD *)a2 + 1) |= 1u;
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    *(_DWORD *)a2 |= 4u;
    *(_QWORD *)((char *)a2 + 20) = *(_QWORD *)((char *)a1 + 20);
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    *(_DWORD *)a2 |= 2u;
    *(_QWORD *)((char *)a2 + 12) = *(_QWORD *)((char *)a1 + 12);
  }
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    v22 = *((_QWORD *)a1 + 4);
    if ( v22 )
    {
      if ( !PWInsertAfter(v22) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = *((_QWORD *)a1 + 4);
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
          LOBYTE(v26) = v23;
          LOBYTE(v27) = v5;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v27,
            v26,
            *(_QWORD *)(UserSessionState + 69152),
            3,
            4,
            111,
            (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
            v24);
        }
        return 0;
      }
      v4 = 128;
    }
    *(_DWORD *)a2 |= 8u;
    *((_QWORD *)a2 + 4) = *((_QWORD *)a1 + 4);
    if ( (*((_DWORD *)a1 + 1) & 0x10) != 0 )
      *((_DWORD *)a2 + 1) |= 8u;
  }
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    *(_DWORD *)a2 |= 1u;
    *((_BYTE *)a2 + 8) = *((_DWORD *)a1 + 2) != 0;
  }
  v28 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( (v28 & 0x20) == 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
      v49 = 112;
      goto LABEL_213;
    }
    if ( !*((_DWORD *)a1 + 10) && (v28 & 6) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
      v49 = 113;
      goto LABEL_213;
    }
    *(_DWORD *)a2 |= 0x40u;
    *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)((char *)a1 + 44);
  }
  v29 = *((_DWORD *)a1 + 1);
  v30 = 1024;
  v31 = *(unsigned int *)a1;
  v32 = 512;
  v33 = 256;
  if ( (v31 & 0x80) != 0 )
  {
    if ( (v29 & 0x400) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v31) + 69152);
      v49 = 114;
      goto LABEL_213;
    }
    *(_DWORD *)a2 |= 0x100u;
  }
  else
  {
    if ( (v29 & 0x400) == 0 )
      goto LABEL_137;
    if ( (v31 & 6) != 6 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v31) + 69152);
      v49 = 115;
      goto LABEL_213;
    }
    if ( (v31 & 0x20) != 0 )
    {
      v34 = *((_DWORD *)a1 + 10);
      if ( v34 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        W32GetUserSessionState(WPP_GLOBAL_Control, v31);
        WindowActionStateString = GetWindowActionStateString(v34);
        v48 = 116;
        goto LABEL_175;
      }
    }
    if ( (v29 & 0x300) != 0 || (*(_DWORD *)a1 & 0x100) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v31) + 69152);
      v49 = 117;
      goto LABEL_213;
    }
    *((_DWORD *)a2 + 1) |= 0x200u;
  }
  *(_QWORD *)((char *)a2 + 100) = *((_QWORD *)a1 + 10);
LABEL_137:
  if ( (*((_DWORD *)a1 + 1) & 0x100) != 0 )
  {
    if ( IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 60)) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v36 = *((_DWORD *)a1 + 16);
        v37 = *((_DWORD *)a1 + 18);
        v38 = *((_DWORD *)a1 + 15);
        v39 = *((_DWORD *)a1 + 17);
        v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v5,
          v52,
          *(_QWORD *)(v40 + 69152),
          3u,
          4u,
          0x76u,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v38,
          v36,
          v39,
          v37,
          v39 - v38,
          v37 - v36);
      }
      return 0;
    }
    *((_DWORD *)a2 + 1) |= v4;
    *(_OWORD *)((char *)a2 + 60) = *v35;
  }
  if ( (v32 & *((_DWORD *)a1 + 1)) != 0 )
  {
    if ( *((_DWORD *)a1 + 19) < 0x60u )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v5 = 0;
      }
      v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v50 = *((_DWORD *)a1 + 19);
      v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v31) + 69152);
      v47 = 119;
LABEL_156:
      LOBYTE(v9) = v7;
      LOBYTE(v8) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        v10,
        3,
        4,
        v47,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v50);
      return 0;
    }
    *((_DWORD *)a2 + 1) |= v33;
    *((_DWORD *)a2 + 24) = *((_DWORD *)a1 + 19);
  }
  if ( (v33 & *(_DWORD *)a1) != 0 )
    *(_DWORD *)a2 |= v4;
  if ( (v32 & *(_DWORD *)a1) != 0 )
    *(_DWORD *)a2 |= v32;
  if ( (v30 & *(_DWORD *)a1) != 0 )
    *(_DWORD *)a2 |= v30;
  v41 = *((_DWORD *)a1 + 1);
  if ( (v41 & 0xE0) == 0 )
    return 1;
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v42 = *((_DWORD *)a1 + 10);
    if ( v42 != 2 )
    {
      if ( v42 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        W32GetUserSessionState(WPP_GLOBAL_Control, v31);
        WindowActionStateString = GetWindowActionStateString(v42);
        v48 = 120;
LABEL_175:
        LOBYTE(v16) = v14;
        LOBYTE(v15) = v5;
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v16,
          v17,
          3,
          4,
          v48,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          (__int64)WindowActionStateString);
        return 0;
      }
      if ( (v41 & 0xC0) != 0 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v31) + 69152);
        v49 = 121;
        goto LABEL_213;
      }
    }
  }
  v43 = v4 & v41;
  if ( (v4 & v41) != 0 )
  {
    v44 = *(_DWORD *)a1 & 6;
    if ( v44 )
    {
      if ( v44 != 6 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v5 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v43) + 69152);
        v49 = 122;
        goto LABEL_213;
      }
    }
  }
  if ( (v41 & 0x40) == 0 )
  {
    v45 = *((_DWORD *)a1 + 1) & 0x20;
    if ( !(_DWORD)v43 )
    {
      if ( v45 )
        *((_DWORD *)a2 + 1) |= 0x10u;
      return 1;
    }
    if ( !v45 )
    {
      *((_DWORD *)a2 + 1) |= 0x40u;
      return 1;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v43) + 69152);
    v49 = 124;
LABEL_213:
    LOBYTE(v20) = v18;
    LOBYTE(v19) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v20,
      v21,
      3,
      4,
      v49,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
    return 0;
  }
  if ( (v41 & 0xA0) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v43) + 69152);
    v49 = 123;
    goto LABEL_213;
  }
  *((_DWORD *)a2 + 1) |= 0x20u;
  return 1;
}
