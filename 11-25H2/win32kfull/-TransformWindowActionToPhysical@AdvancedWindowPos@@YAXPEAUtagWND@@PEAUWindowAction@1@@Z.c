/*
 * XREFs of ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D5F10
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x140022A24 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402ACE7C (-LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DCB7C (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  int v10; // esi
  int v11; // edx
  int v12; // ebx
  int v13; // r13d
  char v14; // r12
  char v15; // al
  bool v16; // cf
  char v17; // cl
  LONG v18; // edx
  CMonitorTopology *v19; // rcx
  struct CHECKPOINT *IfValid; // rax
  struct tagRECT v21; // xmm0
  CMonitorTopology::MonitorData *v22; // rax
  char v23; // di
  LONG v24; // edx
  int v25; // ecx
  struct tagRECT *v26; // rax
  int v27; // edx
  __m128i v28; // xmm0
  __int64 v29; // rax
  char v30; // si
  char v31; // bl
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // al
  char v36; // r13
  int v37; // edi
  int v38; // r14d
  int v39; // ebx
  int v40; // esi
  __int64 v41; // rax
  int v42; // edx
  int v43; // r8d
  LONG v44; // eax
  struct tagRECT v45; // xmm0
  char v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rdx
  char v51; // r13
  int v52; // edi
  int v53; // r14d
  int v54; // ebx
  int v55; // esi
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int64 v59; // [rsp+68h] [rbp-31h]
  char v60; // [rsp+70h] [rbp-29h]
  char v61; // [rsp+71h] [rbp-28h]
  unsigned int v62; // [rsp+74h] [rbp-25h]
  char v63; // [rsp+74h] [rbp-25h]
  CMonitorTopology::MonitorData *v64; // [rsp+78h] [rbp-21h]
  int v65; // [rsp+80h] [rbp-19h]
  char v66; // [rsp+84h] [rbp-15h]
  int v67; // [rsp+88h] [rbp-11h]
  struct tagRECT v68; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v69; // [rsp+A0h] [rbp+7h] BYREF

  v5 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
  v62 = v5;
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
  v67 = v11;
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
  v61 = v17;
  if ( v10 || v12 || v13 || v17 || v11 )
  {
    if ( v15 )
    {
      v18 = *((_DWORD *)a2 + 26);
      v19 = (CMonitorTopology *)*((_QWORD *)a2 + 19);
      v68.left = *((_DWORD *)a2 + 25);
      v68.top = v18;
      v68.right = v68.left;
      v68.bottom = v18;
    }
    else
    {
      IfValid = CHECKPOINT::GetIfValid(this);
      v19 = (CMonitorTopology *)*((_QWORD *)a2 + 19);
      if ( IfValid )
        v21 = *(struct tagRECT *)((char *)IfValid + 20);
      else
        v21 = *(struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
      v68 = v21;
    }
    v22 = CMonitorTopology::MonitorDataFromRect(v19, &v68, 2, v5);
    v23 = 0;
    v64 = v22;
    if ( v12 || v10 )
    {
      v24 = *((_DWORD *)a2 + 4);
      v68.left = *((_DWORD *)a2 + 3);
      v68.right = *((_DWORD *)a2 + 5) + v68.left;
      v25 = *((_DWORD *)a2 + 6);
      v68.top = v24;
      v68.bottom = v24 + v25;
      v26 = CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(v22, &v69, (__m128i *)&v68, v5);
      v27 = _mm_cvtsi128_si32(*(__m128i *)v26);
      v28 = _mm_srli_si128(*(__m128i *)v26, 8);
      v29 = HIDWORD(*(_QWORD *)&v26->left);
      v66 = v27;
      v30 = v28.m128i_i8[4] - v29;
      *((_DWORD *)a2 + 3) = v27;
      *((_DWORD *)a2 + 6) = v28.m128i_i32[1] - v29;
      *(_QWORD *)&v68.left = v29;
      *((_DWORD *)a2 + 4) = v29;
      v65 = _mm_cvtsi128_si32(v28) - v27;
      *((_DWORD *)a2 + 5) = v65;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v23 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v31 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v31 = 0;
      }
      if ( v23 || v31 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v23;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v34,
          v33,
          *(_QWORD *)(UserSessionState + 69160),
          5,
          4,
          111,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v66,
          v68.left,
          v65,
          v30);
      }
      v23 = 0;
    }
    if ( v13 )
    {
      *(struct tagRECT *)((char *)a2 + 44) = *CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(
                                                v64,
                                                &v69,
                                                (__m128i *)((char *)a2 + 44),
                                                v5);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v35 = 0;
      }
      v60 = v35;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v36 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v36 = 0;
      }
      if ( v35 || v36 )
      {
        v37 = *((_DWORD *)a2 + 14);
        v38 = *((_DWORD *)a2 + 12);
        v39 = *((_DWORD *)a2 + 13);
        v40 = *((_DWORD *)a2 + 11);
        v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v42) = v60;
        LOBYTE(v43) = v36;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v42,
          v43,
          *(_QWORD *)(v41 + 69160),
          5,
          4,
          112,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v40,
          v38,
          v39,
          v37,
          v39 - v40,
          v37 - v38);
        v5 = v62;
        v23 = 0;
      }
    }
    if ( v61 )
    {
      v44 = *((_DWORD *)a2 + 26);
      v68.left = *((_DWORD *)a2 + 25);
      v68.right = v68.left;
      v68.top = v44;
      v68.bottom = v44;
      v45 = *CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(v64, &v69, (__m128i *)&v68, v5);
      v63 = _mm_cvtsi128_si32((__m128i)v45);
      *((_DWORD *)a2 + 26) = v45.top;
      *((_DWORD *)a2 + 25) = _mm_cvtsi128_si32((__m128i)v45);
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v23 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v46 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v46 = 0;
      }
      if ( v23 || v46 )
      {
        v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v23;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v49,
          v48,
          *(_QWORD *)(v47 + 69160),
          5,
          4,
          113,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v63,
          v45.top);
      }
    }
    if ( v67 )
    {
      *(struct tagRECT *)((char *)a2 + 60) = *CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(
                                                v64,
                                                &v69,
                                                (__m128i *)((char *)a2 + 60),
                                                v5);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v51 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v51 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v14 = 0;
      }
      if ( v51 || v14 )
      {
        v52 = *((_DWORD *)a2 + 14);
        v53 = *((_DWORD *)a2 + 12);
        v54 = *((_DWORD *)a2 + 13);
        v55 = *((_DWORD *)a2 + 11);
        v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v50);
        LOBYTE(v57) = v14;
        LOBYTE(v58) = v51;
        LODWORD(v59) = v52 - v53;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v58,
          v57,
          *(_QWORD *)(v56 + 69160),
          5,
          4,
          114,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v55,
          v53,
          v54,
          v52,
          v54 - v55,
          v59);
      }
    }
  }
}
