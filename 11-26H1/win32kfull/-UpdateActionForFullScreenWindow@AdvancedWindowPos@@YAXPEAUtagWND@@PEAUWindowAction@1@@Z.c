/*
 * XREFs of ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E96C8
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x14015FDDC (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _lambda_f6342d8231bbc0d051acb947e9cc99c6_::operator() @ 0x1402E7268 (_lambda_f6342d8231bbc0d051acb947e9cc99c6_--operator().c)
 *     WPP_RECORDER_AND_TRACE_SF_sddddd @ 0x1402EE470 (WPP_RECORDER_AND_TRACE_SF_sddddd.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402EF3D0 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 */

void __fastcall AdvancedWindowPos::UpdateActionForFullScreenWindow(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  char v3; // di
  char v4; // bl
  char v5; // si
  char v6; // bl
  struct CHECKPOINT *IfValid; // rax
  __int64 v8; // rdx
  int v9; // esi
  bool v10; // bl
  bool v11; // r14
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // bl
  bool v16; // r14
  __int64 UserSessionState; // rax
  int v18; // edx
  int v19; // r8d
  LONG v20; // eax
  CMonitorTopology *v21; // rcx
  __m128i v22; // xmm6
  struct MOVESIZEDATA *v23; // rdx
  bool v24; // r12
  int v25; // r14d
  __int64 v26; // rcx
  int v27; // r13d
  int v28; // r15d
  __int16 v29; // bx
  const char *StateString; // rax
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  bool v34; // bl
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  __int64 v38; // rdx
  int v39; // [rsp+28h] [rbp-69h]
  int v40; // [rsp+30h] [rbp-61h]
  int v41; // [rsp+38h] [rbp-59h]
  __int16 v42; // [rsp+38h] [rbp-59h]
  __int16 v43; // [rsp+38h] [rbp-59h]
  int v44; // [rsp+40h] [rbp-51h]
  struct CHECKPOINT *v45; // [rsp+78h] [rbp-19h]
  struct tagRECT v46; // [rsp+88h] [rbp-9h] BYREF
  bool v47; // [rsp+F8h] [rbp+67h]
  struct tagWND *v48; // [rsp+100h] [rbp+6Fh] BYREF
  int v49; // [rsp+108h] [rbp+77h]
  const struct CMonitorTopology::MonitorData *v50; // [rsp+110h] [rbp+7Fh] BYREF

  v48 = a2;
  v3 = 1;
  v4 = *(_BYTE *)(*((_QWORD *)this + 5) + 31LL);
  v5 = v4 & 1;
  v6 = v4 & 0x20;
  IfValid = CHECKPOINT::GetIfValid(this);
  v45 = IfValid;
  v8 = *(unsigned int *)v48;
  if ( (*(_DWORD *)v48 & 0x106) != 0x100 )
    return;
  if ( (v8 & 0x20) == 0 )
  {
    if ( v5 )
    {
      v9 = 1;
      *((_DWORD *)v48 + 10) = 1;
      *(_DWORD *)v48 |= 0x20u;
      v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      v42 = 140;
    }
    else if ( v6 )
    {
      v9 = 2;
      v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      v42 = 141;
    }
    else
    {
      v9 = 0;
      v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      v42 = 142;
    }
    goto LABEL_51;
  }
  v9 = *((_DWORD *)v48 + 10);
  if ( !v9 )
  {
    if ( (v8 & 0x40) != 0 )
      return;
    if ( v6 && IfValid )
    {
      if ( (*((_DWORD *)IfValid + 4) & 2) != 0 )
      {
        v9 = 1;
        v10 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v12 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
          LOBYTE(v13) = v11;
          LOBYTE(v14) = v10;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v14,
            v13,
            *(_QWORD *)(v12 + 69152),
            4,
            4,
            143,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
        *((_DWORD *)v48 + 10) = 1;
        goto LABEL_52;
      }
      v9 = 0;
      v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      v42 = 144;
LABEL_51:
      LOBYTE(v19) = v16;
      LOBYTE(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        4,
        v42,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
LABEL_52:
  v20 = *((_DWORD *)v48 + 25);
  v21 = (CMonitorTopology *)*((_QWORD *)v48 + 21);
  v46.top = *((_DWORD *)v48 + 26);
  v46.bottom = v46.top;
  v46.left = v20;
  v46.right = v20;
  v50 = CMonitorTopology::MonitorDataFromRect(v21, &v46, 2, 0x12u);
  v22 = *(__m128i *)((char *)v50 + 8);
  v23 = WPP_GLOBAL_Control;
  v24 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v25 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
  v26 = (unsigned int)_mm_cvtsi128_si32(v22);
  v27 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
  v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v28 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
  v49 = v26;
  if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v29 = *((_WORD *)v50 + 20);
    W32GetUserSessionState(v26, WPP_GLOBAL_Control);
    StateString = AdvancedWindowPos::GetStateString(v9);
    LOBYTE(v31) = v24;
    LOBYTE(v32) = v47;
    WPP_RECORDER_AND_TRACE_SF_sddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v32,
      v33,
      v39,
      v40,
      v41,
      v44,
      (__int64)StateString,
      v49,
      v27,
      v28,
      v25,
      v29);
    LODWORD(v26) = v49;
  }
  *(_QWORD *)&v46.left = &v48;
  *(_QWORD *)&v46.right = &v50;
  if ( v9 == 2 )
  {
    if ( v45 && (*((_DWORD *)v45 + 4) & 2) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v3 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
        v43 = 146;
LABEL_86:
        LOBYTE(v37) = v34;
        LOBYTE(v36) = v3;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v37,
          *(_QWORD *)(v35 + 69152),
          4,
          4,
          v43,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
    else
    {
      *(_DWORD *)v48 |= 0x60u;
      *((_DWORD *)v48 + 1) |= 0x10u;
      *((_DWORD *)v48 + 10) = 2;
      *(__m128i *)((char *)v48 + 44) = v22;
      lambda_f6342d8231bbc0d051acb947e9cc99c6_::operator()(&v46);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v3 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
        v43 = 147;
        goto LABEL_86;
      }
    }
  }
  else
  {
    *(_DWORD *)v48 |= 6u;
    *((_DWORD *)v48 + 3) = v26;
    *((_DWORD *)v48 + 4) = v27;
    *((_DWORD *)v48 + 5) = v28 - v26;
    *((_DWORD *)v48 + 6) = v25 - v27;
    if ( !v9 )
    {
      lambda_f6342d8231bbc0d051acb947e9cc99c6_::operator()(&v46);
      return;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v3 = 0;
    }
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
      v43 = 148;
      goto LABEL_86;
    }
  }
}
