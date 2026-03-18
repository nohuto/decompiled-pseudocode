/*
 * XREFs of ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E9174
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x14015FDDC (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402C8E14 (-LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402EF3D0 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::TransformWindowActionToPhysical(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  unsigned int v5; // r14d
  int v6; // ecx
  int v7; // eax
  char v8; // bl
  char v9; // r13
  int v10; // edi
  int v11; // edx
  int v12; // ebx
  int v13; // r13d
  char v14; // r12
  char v15; // al
  bool v16; // cf
  char v17; // cl
  LONG v18; // eax
  CMonitorTopology *v19; // rcx
  struct CHECKPOINT *IfValid; // rax
  struct tagRECT v21; // xmm0
  CMonitorTopology::MonitorData *v22; // rax
  LONG v23; // edx
  int v24; // ecx
  struct tagRECT *v25; // rax
  int v26; // edx
  __m128i v27; // xmm0
  __int64 v28; // rax
  int v29; // esi
  char v30; // di
  char v31; // bl
  __int64 UserSessionState; // rax
  bool v33; // al
  char v34; // r13
  int v35; // r14d
  int v36; // edi
  int v37; // esi
  int v38; // ebx
  __int64 v39; // rax
  CMonitorTopology::MonitorData *v40; // r13
  LONG v41; // eax
  __m128i *v42; // rax
  __m128i v43; // xmm0
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rsi
  bool v46; // di
  char v47; // bl
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  char v51; // r13
  int v52; // r14d
  int v53; // edi
  int v54; // esi
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // [rsp+40h] [rbp-69h]
  __int64 v58; // [rsp+48h] [rbp-61h]
  __int64 v59; // [rsp+50h] [rbp-59h]
  __int64 v60; // [rsp+58h] [rbp-51h]
  __int64 v61; // [rsp+60h] [rbp-49h]
  __int64 v62; // [rsp+68h] [rbp-41h]
  char v63; // [rsp+70h] [rbp-39h]
  char v64; // [rsp+71h] [rbp-38h]
  struct tagRECT v65; // [rsp+80h] [rbp-29h] BYREF
  int v66; // [rsp+90h] [rbp-19h]
  CMonitorTopology::MonitorData *v67; // [rsp+98h] [rbp-11h]
  int v68; // [rsp+A0h] [rbp-9h]
  int v69; // [rsp+A4h] [rbp-5h]
  int v70; // [rsp+A8h] [rbp-1h]
  struct tagRECT v71; // [rsp+B0h] [rbp+7h] BYREF

  v5 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
  v66 = v5;
  if ( (v5 & 0xF) == 2 )
    return;
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 1);
  v8 = *(_DWORD *)a2;
  v9 = v8;
  v10 = *(_DWORD *)a2 & 4;
  v11 = v7 & 0x80;
  v12 = v8 & 2;
  v13 = v9 & 0x40;
  v70 = v11;
  v14 = 1;
  if ( (v7 & 0x200) != 0 )
  {
    v15 = 1;
LABEL_5:
    v17 = 1;
    goto LABEL_6;
  }
  v16 = (v6 & 0x100) != 0;
  v15 = 0;
  v17 = 0;
  if ( v16 )
    goto LABEL_5;
LABEL_6:
  v64 = v17;
  if ( v10 || v12 || v13 || v17 || v11 )
  {
    if ( v15 )
    {
      v18 = *((_DWORD *)a2 + 25);
      v65.top = *((_DWORD *)a2 + 26);
      v65.bottom = v65.top;
      v19 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
      v65.left = v18;
      v65.right = v18;
    }
    else
    {
      IfValid = CHECKPOINT::GetIfValid(this);
      v19 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
      if ( IfValid )
        v21 = *(struct tagRECT *)((char *)IfValid + 20);
      else
        v21 = *(struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
      v65 = v21;
    }
    v22 = CMonitorTopology::MonitorDataFromRect(v19, &v65, 2, v5);
    v67 = v22;
    if ( v12 || v10 )
    {
      v23 = *((_DWORD *)a2 + 4);
      v65.left = *((_DWORD *)a2 + 3);
      v65.right = *((_DWORD *)a2 + 5) + v65.left;
      v24 = *((_DWORD *)a2 + 6);
      v65.top = v23;
      v65.bottom = v23 + v24;
      v25 = CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(v22, &v71, (__m128i *)&v65, v5);
      v26 = _mm_cvtsi128_si32(*(__m128i *)v25);
      v27 = _mm_srli_si128(*(__m128i *)v25, 8);
      v28 = HIDWORD(*(_QWORD *)&v25->left);
      v69 = v26;
      v29 = v27.m128i_i32[1] - v28;
      *((_DWORD *)a2 + 3) = v26;
      *((_DWORD *)a2 + 6) = v27.m128i_i32[1] - v28;
      *(_QWORD *)&v65.left = v28;
      *((_DWORD *)a2 + 4) = v28;
      v68 = _mm_cvtsi128_si32(v27) - v26;
      *((_DWORD *)a2 + 5) = v68;
      v30 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v31 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v31 = 0;
      }
      if ( v30 || v31 )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v31,
          *(_QWORD *)(UserSessionState + 69152),
          5u,
          4u,
          0x6Fu,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v69,
          v65.left,
          v68,
          v29);
      }
    }
    if ( v13 )
    {
      *(struct tagRECT *)((char *)a2 + 44) = *CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(
                                                v67,
                                                &v71,
                                                (__m128i *)((char *)a2 + 44),
                                                v5);
      v33 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      v63 = v33;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v34 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v34 = 0;
      }
      if ( v33 || v34 )
      {
        v35 = *((_DWORD *)a2 + 12);
        v36 = *((_DWORD *)a2 + 14);
        v37 = *((_DWORD *)a2 + 11);
        v38 = *((_DWORD *)a2 + 13);
        v39 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LODWORD(v60) = v36;
        LODWORD(v59) = v38;
        LODWORD(v58) = v35;
        LODWORD(v57) = v37;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v63,
          v34,
          *(_QWORD *)(v39 + 69152),
          5u,
          4u,
          0x70u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v57,
          v58,
          v59,
          v60,
          v38 - v37,
          v36 - v35);
        v5 = v66;
      }
    }
    v40 = v67;
    if ( v64 )
    {
      v41 = *((_DWORD *)a2 + 26);
      v65.left = *((_DWORD *)a2 + 25);
      v65.right = v65.left;
      v65.top = v41;
      v65.bottom = v41;
      v42 = (__m128i *)CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(v67, &v71, (__m128i *)&v65, v5);
      v43 = *v42;
      v44 = v42->m128i_i64[0];
      v66 = _mm_cvtsi128_si32(*v42);
      v45 = HIDWORD(v44);
      *((_DWORD *)a2 + 26) = v45;
      *((_DWORD *)a2 + 25) = _mm_cvtsi128_si32(v43);
      v46 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v47 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v47 = 0;
      }
      if ( v46 || v47 )
      {
        v48 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v49) = v47;
        LOBYTE(v50) = v46;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v50,
          v49,
          *(_QWORD *)(v48 + 69152),
          5,
          4,
          113,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v66,
          v45);
      }
    }
    if ( v70 )
    {
      *(struct tagRECT *)((char *)a2 + 60) = *CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(
                                                v40,
                                                &v71,
                                                (__m128i *)((char *)a2 + 60),
                                                v5);
      v51 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v14 = 0;
      }
      if ( v51 || v14 )
      {
        v52 = *((_DWORD *)a2 + 12);
        v53 = *((_DWORD *)a2 + 14);
        v54 = *((_DWORD *)a2 + 11);
        v55 = *((_DWORD *)a2 + 13);
        v56 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LODWORD(v62) = v53 - v52;
        LODWORD(v61) = v55 - v54;
        LODWORD(v60) = v53;
        LODWORD(v59) = v55;
        LODWORD(v58) = v52;
        LODWORD(v57) = v54;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v51,
          v14,
          *(_QWORD *)(v56 + 69152),
          5u,
          4u,
          0x72u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
    }
  }
}
