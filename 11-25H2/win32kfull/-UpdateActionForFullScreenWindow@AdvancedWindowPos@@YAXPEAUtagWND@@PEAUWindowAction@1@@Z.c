/*
 * XREFs of ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D6458
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x140022A24 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_sddddd @ 0x1402DB3BC (WPP_RECORDER_AND_TRACE_SF_sddddd.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DCB7C (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 */

void __fastcall AdvancedWindowPos::UpdateActionForFullScreenWindow(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  char v4; // bp
  char v5; // bl
  struct CHECKPOINT *IfValid; // rax
  int v7; // ecx
  char v8; // si
  int v9; // r14d
  bool v10; // bl
  bool v11; // bp
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  bool v15; // bl
  bool v16; // bp
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  LONG v20; // eax
  CMonitorTopology *v21; // rcx
  const struct CMonitorTopology::MonitorData *v22; // rbp
  __m128i v23; // xmm6
  bool v24; // r13
  __int64 v25; // rdx
  int v26; // r15d
  __int64 v27; // rcx
  int v28; // r12d
  __int16 v29; // bx
  const char *StateString; // rax
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  bool v34; // bl
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  int v38; // eax
  int v39; // [rsp+20h] [rbp-B8h]
  int v40; // [rsp+28h] [rbp-B0h]
  int v41; // [rsp+30h] [rbp-A8h]
  __int16 v42; // [rsp+30h] [rbp-A8h]
  __int16 v43; // [rsp+30h] [rbp-A8h]
  int v44; // [rsp+38h] [rbp-A0h]
  struct tagRECT v45; // [rsp+70h] [rbp-68h] BYREF
  bool v46; // [rsp+E0h] [rbp+8h]
  int v47; // [rsp+E8h] [rbp+10h]
  unsigned int v48; // [rsp+F0h] [rbp+18h]
  struct CHECKPOINT *v49; // [rsp+F8h] [rbp+20h]

  v4 = *(_BYTE *)(*((_QWORD *)this + 5) + 31LL);
  v5 = v4 & 0x20;
  IfValid = CHECKPOINT::GetIfValid(this);
  v7 = *(_DWORD *)a2;
  v49 = IfValid;
  if ( (*(_DWORD *)a2 & 0x100) == 0 || (v7 & 6) != 0 )
    return;
  v8 = 1;
  if ( (v7 & 0x20) != 0 )
  {
    v9 = *((_DWORD *)a2 + 10);
    if ( !v9 && v5 && IfValid )
    {
      if ( (*((_DWORD *)IfValid + 4) & 2) != 0 )
      {
        v9 = 1;
        v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 69160),
            4,
            4,
            143,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        }
        *((_DWORD *)a2 + 10) = 1;
      }
      else
      {
        v9 = 0;
        v10 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v12 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          v42 = 144;
          goto LABEL_51;
        }
      }
    }
  }
  else if ( (v4 & 1) != 0 )
  {
    *((_DWORD *)a2 + 10) = 1;
    *(_DWORD *)a2 = v7 | 0x20;
    v9 = 1;
    v10 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v42 = 140;
LABEL_51:
      LOBYTE(v14) = v11;
      LOBYTE(v13) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v14,
        *(_QWORD *)(v12 + 69160),
        4,
        4,
        v42,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
  }
  else if ( v5 )
  {
    v9 = 2;
    v10 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v42 = 141;
      goto LABEL_51;
    }
  }
  else
  {
    v9 = 0;
    v10 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v42 = 142;
      goto LABEL_51;
    }
  }
  v20 = *((_DWORD *)a2 + 25);
  v21 = (CMonitorTopology *)*((_QWORD *)a2 + 19);
  v45.top = *((_DWORD *)a2 + 26);
  v45.bottom = v45.top;
  v45.left = v20;
  v45.right = v20;
  v22 = CMonitorTopology::MonitorDataFromRect(v21, &v45, 2, 0x12u);
  v23 = *(__m128i *)((char *)v22 + 8);
  v24 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v25 = (unsigned int)_mm_cvtsi128_si32(v23);
  v26 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 12));
  v27 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v23, 4));
  v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v47 = v27;
  v28 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
  v48 = v25;
  if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v29 = *((_WORD *)v22 + 20);
    W32GetUserSessionState(v27, v25);
    StateString = AdvancedWindowPos::GetStateString(v9);
    LOBYTE(v31) = v24;
    LOBYTE(v32) = v46;
    WPP_RECORDER_AND_TRACE_SF_sddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v31,
      v32,
      v33,
      v39,
      v40,
      v41,
      v44,
      (__int64)StateString,
      v48,
      v47,
      v28,
      v26,
      v29);
    LODWORD(v27) = v47;
    v25 = v48;
  }
  if ( v9 == 2 )
  {
    if ( v49 && (*((_DWORD *)v49 + 4) & 2) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v8 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
        v43 = 146;
LABEL_86:
        LOBYTE(v37) = v34;
        LOBYTE(v36) = v8;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v36,
          v37,
          *(_QWORD *)(v35 + 69160),
          4,
          4,
          v43,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
    }
    else
    {
      *(_DWORD *)a2 |= 0x60u;
      *((_DWORD *)a2 + 10) = 2;
      *(__m128i *)((char *)a2 + 44) = v23;
      *((_DWORD *)a2 + 1) |= 0xC190u;
      *((_DWORD *)a2 + 24) = *((unsigned __int16 *)v22 + 20);
      *(_OWORD *)((char *)a2 + 60) = *(_OWORD *)((char *)v22 + 24);
      *(_OWORD *)((char *)a2 + 76) = *(_OWORD *)((char *)v22 + 8);
      *((_DWORD *)a2 + 23) = *((_DWORD *)v22 + 16);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v8 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
        v43 = 147;
        goto LABEL_86;
      }
    }
  }
  else
  {
    v38 = *(_DWORD *)a2 | 6;
    *(_DWORD *)a2 = v38;
    *((_DWORD *)a2 + 3) = v25;
    *((_DWORD *)a2 + 4) = v27;
    *((_DWORD *)a2 + 5) = v28 - v25;
    *((_DWORD *)a2 + 6) = v26 - v27;
    if ( !v9 )
    {
      *(_DWORD *)a2 = v38 & 0xFFFFFFBF;
      *((_DWORD *)a2 + 1) |= 0xC180u;
      *((_DWORD *)a2 + 24) = *((unsigned __int16 *)v22 + 20);
      *(_OWORD *)((char *)a2 + 60) = *(_OWORD *)((char *)v22 + 24);
      *(_OWORD *)((char *)a2 + 76) = *(_OWORD *)((char *)v22 + 8);
      *((_DWORD *)a2 + 23) = *((_DWORD *)v22 + 16);
      return;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v8 = 0;
    }
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
      v43 = 148;
      goto LABEL_86;
    }
  }
}
