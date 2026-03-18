/*
 * XREFs of ?Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CD3A8
 * Callers:
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CE4F4 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PWInsertAfter @ 0x140064E98 (PWInsertAfter.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402CB748 (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
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
  __int64 v29; // rdx
  int v30; // r10d
  int v31; // ecx
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  int v35; // edi
  _OWORD *v36; // rcx
  bool v37; // r13
  int v38; // edi
  int v39; // ebp
  int v40; // ebx
  int v41; // esi
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  unsigned int v45; // eax
  int v46; // edi
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // eax
  __int16 v51; // [rsp+30h] [rbp-68h]
  __int16 v52; // [rsp+30h] [rbp-68h]
  __int16 v53; // [rsp+30h] [rbp-68h]
  char v54; // [rsp+40h] [rbp-58h]
  const char *WindowActionStateString; // [rsp+40h] [rbp-58h]

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
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
          {
            v5 = 0;
          }
          v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0;
          v54 = *((_DWORD *)a1 + 10);
          v10 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
          v51 = 106;
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
        if ( ((v13 - 1) & 0xFFFFFFFD) == 0 || v13 == 2 && (*((_DWORD *)a1 + 1) & 0x80) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
          {
            v5 = 0;
          }
          v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0;
          W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
          WindowActionStateString = GetWindowActionStateString(v13);
          v52 = 107;
          goto LABEL_175;
        }
      }
      if ( v12 != 6 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v5 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
        v53 = 108;
        goto LABEL_213;
      }
    }
    if ( *((_DWORD *)a1 + 10) == 3 && v12 != 6 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
      v53 = 109;
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
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
      v53 = 110;
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
      if ( !PWInsertAfter(v22, (__int64)a2) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v5 = 0;
        }
        v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = *((_QWORD *)a1 + 4);
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
          LOBYTE(v26) = v23;
          LOBYTE(v27) = v5;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v27,
            v26,
            *(_QWORD *)(UserSessionState + 69160),
            3,
            4,
            111,
            (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
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
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
      v53 = 112;
      goto LABEL_213;
    }
    if ( !*((_DWORD *)a1 + 10) && (v28 & 6) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2) + 69160);
      v53 = 113;
      goto LABEL_213;
    }
    *(_DWORD *)a2 |= 0x40u;
    *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)((char *)a1 + 44);
  }
  v29 = *((unsigned int *)a1 + 1);
  v30 = 1024;
  v31 = *(_DWORD *)a1;
  v32 = *((_DWORD *)a1 + 1) & 0x400;
  v33 = 256;
  v34 = 512;
  if ( (*(_DWORD *)a1 & 0x80) != 0 )
  {
    if ( v32 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29) + 69160);
      v53 = 114;
      goto LABEL_213;
    }
    *(_DWORD *)a2 |= 0x100u;
  }
  else
  {
    if ( !v32 )
      goto LABEL_137;
    if ( (v31 & 6) != 6 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29) + 69160);
      v53 = 115;
      goto LABEL_213;
    }
    if ( (v31 & 0x20) != 0 )
    {
      v35 = *((_DWORD *)a1 + 10);
      if ( v35 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v5 = 0;
        }
        v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
        WindowActionStateString = GetWindowActionStateString(v35);
        v52 = 116;
        goto LABEL_175;
      }
    }
    if ( (v29 & 0x300) != 0 || (v31 & 0x100) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29) + 69160);
      v53 = 117;
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
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v38 = *((_DWORD *)a1 + 18);
        v39 = *((_DWORD *)a1 + 16);
        v40 = *((_DWORD *)a1 + 17);
        v41 = *((_DWORD *)a1 + 15);
        v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
        LOBYTE(v43) = v37;
        LOBYTE(v44) = v5;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v44,
          v43,
          *(_QWORD *)(v42 + 69160),
          3,
          4,
          118,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v41,
          v39,
          v40,
          v38,
          v40 - v41,
          v38 - v39);
      }
      return 0;
    }
    *((_DWORD *)a2 + 1) |= v4;
    *(_OWORD *)((char *)a2 + 60) = *v36;
  }
  if ( (v34 & *((_DWORD *)a1 + 1)) != 0 )
  {
    if ( *((_DWORD *)a1 + 19) < 0x60u )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v5 = 0;
      }
      v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v54 = *((_DWORD *)a1 + 19);
      v10 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29) + 69160);
      v51 = 119;
LABEL_156:
      LOBYTE(v9) = v7;
      LOBYTE(v8) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v9,
        v10,
        3,
        4,
        v51,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        v54);
      return 0;
    }
    *((_DWORD *)a2 + 1) |= v33;
    *((_DWORD *)a2 + 24) = *((_DWORD *)a1 + 19);
  }
  if ( (v33 & *(_DWORD *)a1) != 0 )
    *(_DWORD *)a2 |= v4;
  if ( (v34 & *(_DWORD *)a1) != 0 )
    *(_DWORD *)a2 |= v34;
  if ( (v30 & *(_DWORD *)a1) != 0 )
    *(_DWORD *)a2 |= v30;
  v45 = *((_DWORD *)a1 + 1);
  if ( (v45 & 0xE0) == 0 )
    return 1;
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v46 = *((_DWORD *)a1 + 10);
    if ( v46 != 2 )
    {
      if ( v46 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v5 = 0;
        }
        v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
        WindowActionStateString = GetWindowActionStateString(v46);
        v52 = 120;
LABEL_175:
        LOBYTE(v16) = v14;
        LOBYTE(v15) = v5;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v15,
          v16,
          v17,
          3,
          4,
          v52,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          (__int64)WindowActionStateString);
        return 0;
      }
      if ( (v45 & 0xC0) != 0 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v5 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29) + 69160);
        v53 = 121;
        goto LABEL_213;
      }
    }
  }
  v47 = v4 & v45;
  if ( (v4 & v45) != 0 )
  {
    v48 = *(_DWORD *)a1 & 6;
    if ( v48 )
    {
      if ( v48 != 6 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v5 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v47) + 69160);
        v53 = 122;
        goto LABEL_213;
      }
    }
  }
  if ( (v45 & 0x40) == 0 )
  {
    v49 = *((_DWORD *)a1 + 1) & 0x20;
    if ( !(_DWORD)v47 )
    {
      if ( v49 )
        *((_DWORD *)a2 + 1) |= 0x10u;
      return 1;
    }
    if ( !v49 )
    {
      *((_DWORD *)a2 + 1) |= 0x40u;
      return 1;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v47) + 69160);
    v53 = 124;
LABEL_213:
    LOBYTE(v20) = v18;
    LOBYTE(v19) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v19,
      v20,
      v21,
      3,
      4,
      v53,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
    return 0;
  }
  if ( (v45 & 0xA0) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v21 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v47) + 69160);
    v53 = 123;
    goto LABEL_213;
  }
  *((_DWORD *)a2 + 1) |= 0x20u;
  return 1;
}
