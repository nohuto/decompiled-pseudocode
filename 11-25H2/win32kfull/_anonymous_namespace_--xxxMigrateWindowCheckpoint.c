/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140227550
 * Callers:
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1402273BC (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D884C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x140026328 (-SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014D338 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014DD7C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014DDEC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402D4544 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::xxxMigrateWindowCheckpoint(
        struct tagRECT *retstr,
        CHECKPOINT *this,
        __int64 a3,
        CMonitorTopology *a4,
        struct tagRECT *a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v9; // r9
  struct tagRECT *v11; // rdx
  unsigned int v12; // r14d
  bool v14; // r12
  _DWORD *v15; // rax
  int v16; // edi
  int v17; // r14d
  int v18; // ebx
  int v19; // esi
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  struct tagRECT v23; // xmm0
  CMonitorTopology *v24; // rcx
  const struct CMonitorTopology::MonitorData *v25; // rax
  __int64 v26; // rdx
  const struct CMonitorTopology::MonitorData *v27; // rbx
  char v28; // si
  char v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rdx
  struct tagRECT v35; // xmm0
  char v36; // bl
  bool v37; // di
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  char v42; // bl
  bool v43; // di
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  char v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  int ArrangedOptions; // eax
  bool v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v56; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  CMonitorTopology *v59; // [rsp+A0h] [rbp-60h]
  struct tagRECT v60; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v61; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v62; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v63; // [rsp+E0h] [rbp-20h] BYREF

  v9 = a6;
  v11 = a5;
  v12 = 0;
  v58 = (__int64)a5;
  *(_QWORD *)&v56.left = a6;
  v59 = a4;
  v55 = a3;
  *(_QWORD *)&v60.left = a8;
  v57 = 0;
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = *(_DWORD **)(a3 + 40);
    v16 = v15[10];
    v17 = v15[8];
    v18 = v15[9];
    v19 = v15[7];
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a5);
    LOBYTE(v21) = v53;
    LOBYTE(v22) = v14;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v22,
      v21,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      29,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      v19,
      v17,
      v18,
      v16,
      v18 - v19,
      v16 - v17);
    v11 = (struct tagRECT *)v58;
    v9 = *(_QWORD *)&v56.left;
    a4 = v59;
    v12 = v57;
  }
  *((_DWORD *)this + 4) &= ~0x10u;
  if ( v11 )
  {
    v23 = *v11;
    v24 = (CMonitorTopology *)v9;
  }
  else
  {
    v23 = *(struct tagRECT *)((char *)this + 20);
    v24 = a4;
  }
  v62 = v23;
  v56 = v23;
  v25 = CMonitorTopology::MonitorDataFromRect(v24, (const struct tagWND *)retstr, &v56);
  if ( v25 )
  {
    v62 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                               (__int64)&v56,
                               (const struct tagWND *)retstr,
                               (__int64)&v62,
                               v55,
                               (__int64)v25,
                               1);
    CHECKPOINT::SetNormalRect(this, (const struct tagWND *)retstr, &v62, 0);
  }
  if ( (*(_BYTE *)(*(_QWORD *)&retstr[2].right + 31LL) & 0x20) == 0 )
    return 0LL;
  if ( (*((_DWORD *)this + 4) & 8) == 0 )
    return 0LL;
  v61 = *(struct tagRECT *)((char *)this + 36);
  v56 = v61;
  v27 = CMonitorTopology::MonitorDataFromRect(a4, (const struct tagWND *)retstr, &v56);
  if ( !v27 )
    return 0LL;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v28 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v29 = 0;
  }
  if ( v28 || v29 )
  {
    v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
    LOBYTE(v31) = v29;
    LOBYTE(v32) = v28;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v32,
      v31,
      *(_QWORD *)(v30 + 69160),
      5,
      4,
      30,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
  }
  v54 = 0;
  CMonitorTopology::MonitorData::LogicalWorkArea(v27, &v63, (const struct tagWND *)retstr);
  if ( (a7 & 1) != 0 )
  {
    v56 = v61;
    if ( CallShell::xxxMigrateWindowHandler(
           retstr,
           2,
           (__int64 *)v27 + 3,
           (__int64 *)&v63.left,
           *((_WORD *)v27 + 20),
           (struct tagWND *)&v56,
           v55,
           (__m128i *)&v61,
           &v54,
           *(int **)&v60.left) )
    {
      v12 = 1;
      switch ( v54 )
      {
        case 0:
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v47 = 0;
          }
          v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v47 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
            LOBYTE(v50) = v48;
            LOBYTE(v51) = v47;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v51,
              v50,
              *(_QWORD *)(v49 + 69160),
              4,
              4,
              33,
              (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
          }
          *((_DWORD *)this + 4) &= 0xFFFFFFF5;
          return 1LL;
        case 1:
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v42 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v42 = 0;
          }
          v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
            LOBYTE(v45) = v43;
            LOBYTE(v46) = v42;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v46,
              v45,
              *(_QWORD *)(v44 + 69160),
              4,
              4,
              32,
              (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
          }
          *((_DWORD *)this + 4) = *((_DWORD *)this + 4) & 0xFFFFFFF5 | 2;
          return 1LL;
        case 3:
          PhysicalToLogicalDPIRect(&v61, &v61, *(unsigned int *)(*(_QWORD *)&retstr[2].right + 288LL), &v55);
          v35 = *WindowMargins::ExtendRect(
                   &v60,
                   retstr,
                   (const struct tagWND *)&v61,
                   (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v55 + 40) + 60LL));
          *((_DWORD *)this + 4) |= 8u;
          v61 = v35;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v36 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v36 = 0;
          }
          v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v36 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v34);
            LOBYTE(v39) = v37;
            LOBYTE(v40) = v36;
            WPP_RECORDER_AND_TRACE_SF_dddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v40,
              v39,
              *(_QWORD *)(v38 + 69160),
              4,
              4,
              31,
              (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
              v61.left,
              v61.top,
              v61.right,
              v61.bottom);
          }
          CHECKPOINT::SetRestoreToArrangeRect(this, (const struct tagWND *)retstr, &v61);
          return 1LL;
      }
    }
  }
  ArrangedOptions = anonymous_namespace_::GetArrangedOptions((struct tagWND *)&v61, (struct tagWND *)retstr, v27);
  v61 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                             (__int64)&v60,
                             (const struct tagWND *)retstr,
                             (__int64)&v61,
                             v55,
                             (__int64)v27,
                             ArrangedOptions | 1u);
  CHECKPOINT::SetRestoreToArrangeRect(this, (const struct tagWND *)retstr, &v61);
  return v12;
}
