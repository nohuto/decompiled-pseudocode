/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400621D0
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x140061F18 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x140064560 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x140122850 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x140193AE0 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1401A5E38 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1401BAF54 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddd @ 0x1401BE384 (WPP_RECORDER_AND_TRACE_SF_dqddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1401BE608 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1401BF140 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1401BFD0C (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1401C1BD4 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1401C506C (-LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall DelayZonePalmRejection::ProcessInput(DelayZonePalmRejection *this, unsigned __int64 a2, bool a3)
{
  BOOL v3; // r12d
  const struct CPointerInputFrame *v4; // rbx
  int v5; // esi
  char v6; // r15
  unsigned int v7; // eax
  DelayZonePalmRejection *v8; // r14
  char v9; // r13
  unsigned int v10; // edi
  __int64 UserSessionState; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v13; // rdi
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  bool v18; // si
  bool v19; // r12
  __int64 v20; // rbx
  int v21; // edi
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // esi
  int v26; // esi
  bool v27; // r12
  __int64 v28; // rbx
  int v29; // edi
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rax
  int v34; // eax
  struct tagPOINT v35; // r9
  struct tagPOINT v36; // r8
  void *v37; // rdx
  bool v38; // r12
  int v39; // ebx
  __int64 v40; // rdi
  int v41; // esi
  __int64 v42; // rax
  int v43; // edx
  int v44; // r8d
  int v45; // esi
  bool v46; // r12
  __int64 v47; // rbx
  int v48; // edi
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  bool v52; // bl
  bool v53; // di
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  int v57; // ecx
  int v58; // ecx
  unsigned int v59; // ecx
  LONGLONG v60; // r12
  bool v61; // bl
  bool v62; // di
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // rax
  bool v72; // di
  int v73; // ebx
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  int v78; // [rsp+28h] [rbp-E0h]
  int v79; // [rsp+30h] [rbp-D8h]
  int v80; // [rsp+38h] [rbp-D0h]
  int v81; // [rsp+40h] [rbp-C8h]
  bool v82[4]; // [rsp+78h] [rbp-90h] BYREF
  char v83; // [rsp+7Ch] [rbp-8Ch]
  char v84; // [rsp+7Dh] [rbp-8Bh]
  bool v85; // [rsp+7Eh] [rbp-8Ah]
  int v86; // [rsp+80h] [rbp-88h]
  BOOL v87; // [rsp+84h] [rbp-84h]
  BOOL v88; // [rsp+88h] [rbp-80h]
  const struct CPointerInputFrame *v89; // [rsp+90h] [rbp-78h]
  unsigned int v90; // [rsp+98h] [rbp-70h]
  const struct tagPOINTER_INFO *v91; // [rsp+A0h] [rbp-68h]
  int v92; // [rsp+A8h] [rbp-60h]
  unsigned int v93; // [rsp+ACh] [rbp-5Ch]
  LARGE_INTEGER PerformanceCounter; // [rsp+B0h] [rbp-58h]
  struct tagPOINTER_INFO *v95; // [rsp+B8h] [rbp-50h]
  __int128 v96; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-30h]
  _OWORD v98[2]; // [rsp+E8h] [rbp-20h] BYREF

  v89 = (const struct CPointerInputFrame *)a2;
  v4 = (const struct CPointerInputFrame *)a2;
  PerformanceCounter.QuadPart = 0LL;
  LOBYTE(a2) = 0;
  v82[1] = 0;
  LOBYTE(v3) = 0;
  v82[3] = 0;
  v5 = 0;
  v84 = 0;
  v6 = 1;
  v95 = 0LL;
  v7 = *((_DWORD *)v4 + 12);
  v8 = this;
  v93 = v7;
  v9 = 1;
  v82[0] = 0;
  v10 = 0;
  v87 = v3;
  LOBYTE(v88) = 0;
  v86 = 0;
  while ( 1 )
  {
    v90 = v10;
    if ( v10 >= v7 )
      break;
    UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
    PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(UserSessionState + 3256), v4, v10);
    v91 = PointerInfo;
    v13 = PointerInfo;
    if ( PointerInfo )
    {
      v14 = *(_DWORD *)PointerInfo;
      if ( v14 == 3 )
      {
        v15 = *((_QWORD *)v8 + 4);
        if ( !v15 )
        {
          v15 = *((_QWORD *)v4 + 8);
          *((_QWORD *)v8 + 4) = v15;
        }
        if ( *((_QWORD *)v4 + 8) != v15 )
          goto LABEL_127;
        v82[1] = 1;
        *((LARGE_INTEGER *)v8 + 6) = KeQueryPerformanceCounter(0LL);
        v16 = *((_DWORD *)v13 + 3);
        if ( (v16 & 1) != 0 )
        {
          v17 = *((_DWORD *)v8 + 11);
          if ( !v17 )
          {
            v82[3] = 1;
            v95 = v13;
          }
          v92 = v17 + 1;
          *((_DWORD *)v8 + 11) = v17 + 1;
          v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = *((_QWORD *)v8 + 4);
            v21 = *((_DWORD *)v13 + 1);
            v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
            LOBYTE(v23) = v19;
            LOBYTE(v24) = v18;
            WPP_RECORDER_AND_TRACE_SF_dqd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v24,
              v23,
              *(_QWORD *)(v22 + 69136),
              4,
              v79,
              13,
              (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
              v21,
              v20,
              v92);
            v13 = v91;
            v4 = v89;
          }
          this = (DelayZonePalmRejection *)*((_QWORD *)v8 + 15);
          if ( this )
          {
            v25 = v86;
            v96 = 0LL;
            v97 = 0LL;
            DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(this, 0xFFFFFFFFLL, &v96, v13, v86);
            v86 = v25 + 1;
          }
        }
        else if ( (v16 & 2) == 0 )
        {
          v26 = *((_DWORD *)v8 + 11);
          if ( v26 )
            *((_DWORD *)v8 + 11) = --v26;
          LODWORD(this) = (_DWORD)WPP_GLOBAL_Control;
          v27 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v82[2] = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v28 = *((_QWORD *)v8 + 4);
            v29 = *((_DWORD *)v13 + 1);
            v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
            LOBYTE(v31) = v82[2];
            LOBYTE(v32) = v27;
            WPP_RECORDER_AND_TRACE_SF_dqd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v32,
              v31,
              *(_QWORD *)(v30 + 69136),
              4,
              v79,
              14,
              (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
              v29,
              v28,
              v26);
            v13 = v91;
            v4 = v89;
          }
        }
        if ( (*((_DWORD *)v13 + 3) & 0x8000) != 0 )
          v84 = 1;
      }
      else
      {
        if ( v14 != 2 )
          goto LABEL_127;
        v33 = *((_QWORD *)v8 + 2);
        if ( !v33 )
        {
          v33 = *((_QWORD *)v4 + 8);
          *((_QWORD *)v8 + 2) = v33;
        }
        if ( *((_QWORD *)v4 + 8) != v33 )
          goto LABEL_127;
        v82[0] = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v34 = *((_DWORD *)v13 + 3);
        if ( (v34 & 0x10000) != 0 )
        {
          ++*((_DWORD *)v8 + 10);
          v35 = (struct tagPOINT)*((_QWORD *)v13 + 7);
          v36 = (struct tagPOINT)*((_QWORD *)v13 + 6);
          v37 = (void *)*((_QWORD *)v13 + 2);
          v82[2] = 0;
          v96 = 0LL;
          v97 = 0LL;
          LOBYTE(a2) = DelayZonePalmRejection::HitTestRejectionRegion(
                         v8,
                         v37,
                         v36,
                         v35,
                         &v82[2],
                         (struct CDelayZonePanelTelemetryData *)&v96);
          v83 = a2;
          if ( !v88 )
            v88 = (_BYTE)a2 != 0;
          if ( !v3 )
            v87 = (_BYTE)a2 == 0;
          v38 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v85 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v39 = *((_DWORD *)v8 + 10);
            v40 = *((_QWORD *)v8 + 2);
            v41 = *((_DWORD *)v91 + 1);
            v42 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
            LOBYTE(v43) = v38;
            LOBYTE(v44) = v85;
            WPP_RECORDER_AND_TRACE_SF_dqddd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v43,
              v44,
              *(_QWORD *)(v42 + 69136),
              v78,
              v79,
              v80,
              v81,
              v41,
              v40,
              v39,
              v88,
              v87);
            LOBYTE(a2) = v83;
            v13 = v91;
            v4 = v89;
            v5 = v86;
          }
          this = (DelayZonePalmRejection *)*((_QWORD *)v8 + 15);
          if ( this && (_BYTE)a2 )
          {
            v98[0] = v96;
            v98[1] = v97;
            DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(this, v82[2], v98, v13, v5);
            v86 = v5 + 1;
          }
        }
        else if ( (v34 & 0x40000) != 0 )
        {
          v45 = *((_DWORD *)v8 + 10);
          if ( v45 )
            *((_DWORD *)v8 + 10) = --v45;
          LODWORD(this) = (_DWORD)WPP_GLOBAL_Control;
          v46 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v47 = *((_QWORD *)v8 + 2);
            v48 = *((_DWORD *)v13 + 1);
            v49 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
            LOBYTE(v50) = v83;
            LOBYTE(v51) = v46;
            WPP_RECORDER_AND_TRACE_SF_dqd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v51,
              v50,
              *(_QWORD *)(v49 + 69136),
              4,
              v79,
              16,
              (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
              v48,
              v47,
              v45);
            v4 = v89;
          }
        }
      }
      v5 = v86;
      LOBYTE(v3) = v87;
    }
    v7 = v93;
    v10 = v90 + 1;
  }
  if ( *(_BYTE *)v8 )
  {
    LOBYTE(a2) = v82[0];
    if ( !v82[0] )
      goto LABEL_78;
    v59 = *((_DWORD *)v8 + 27);
    if ( !v59 )
      goto LABEL_78;
    v60 = PerformanceCounter.QuadPart - *((_QWORD *)v8 + 6);
    a2 = (unsigned __int64)(1000 * v60) % gliQpcFreq.QuadPart;
    if ( (unsigned int)((unsigned __int64)(1000 * v60) / gliQpcFreq.QuadPart) > v59 )
    {
      *(_BYTE *)v8 = 0;
      v61 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v63 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
        LOBYTE(v64) = v62;
        LOBYTE(v65) = v61;
        WPP_RECORDER_AND_TRACE_SF_L(*((_QWORD *)WPP_GLOBAL_Control + 3), v65, v64, *(_QWORD *)(v63 + 69136), 4);
      }
      v4 = v89;
    }
    LOBYTE(v3) = v87;
LABEL_77:
    LOBYTE(a2) = v82[0];
LABEL_78:
    a3 = v82[1];
    goto LABEL_79;
  }
  a3 = v82[1];
  if ( v82[1] )
  {
    *(_BYTE *)v8 = 1;
    v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, v82[1]);
      LOBYTE(v55) = v53;
      LOBYTE(v56) = v52;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v56,
        v55,
        *(_QWORD *)(v54 + 69136),
        4,
        4,
        17,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
      v4 = v89;
      goto LABEL_77;
    }
    v4 = v89;
  }
  LOBYTE(a2) = v82[0];
LABEL_79:
  v57 = *((_DWORD *)v8 + 1);
  if ( !v57 )
  {
    if ( *(_BYTE *)v8 )
    {
      if ( a3 && v82[3] )
      {
        v67 = *((_QWORD *)v8 + 15);
        *((_DWORD *)v8 + 1) = 2;
        if ( !v67 )
          goto LABEL_127;
        v68 = 2LL;
        goto LABEL_120;
      }
      if ( (_BYTE)a2 && v88 )
      {
        v71 = W32GetUserSessionState(0, a2, a3);
        CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v71 + 16832), 0, *((_DWORD *)v8 + 25));
        *((_BYTE *)v8 + 8) = 1;
        *((_QWORD *)v8 + 7) = v4;
        *((_QWORD *)v8 + 8) = v4;
        DelayZonePalmRejection::LockTouchDeviceHandle(v8);
        v67 = *((_QWORD *)v8 + 15);
        v9 = 0;
        *((_DWORD *)v8 + 1) = 1;
        if ( !v67 )
          goto LABEL_127;
        v70 = 0LL;
        v68 = 1LL;
        goto LABEL_121;
      }
    }
    *((_DWORD *)v8 + 1) = 2;
    goto LABEL_127;
  }
  v58 = v57 - 1;
  if ( v58 )
  {
    if ( v58 == 1 && !*((_DWORD *)v8 + 11) && !*((_DWORD *)v8 + 10) && !v84 )
    {
      *((_QWORD *)v8 + 4) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      *((_DWORD *)v8 + 1) = 0;
    }
    goto LABEL_127;
  }
  if ( a3 && v82[3] )
  {
    if ( *((_BYTE *)v8 + 8) == 1 )
    {
      v66 = W32GetUserSessionState(0, a2, a3);
      CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v66 + 16832), 1, 0);
      *((_BYTE *)v8 + 8) = 0;
    }
    DelayZonePalmRejection::SuppressDeadzoneContacts(
      v8,
      (const struct DEVICE_OUTPUT_CONFIG *)(*((_QWORD *)v4 + 32) + 156LL),
      v95);
    DelayZonePalmRejection::DispatchBufferedInputFrames(v8);
    v67 = *((_QWORD *)v8 + 15);
    if ( v67 )
    {
      v68 = *((unsigned int *)v8 + 1);
LABEL_120:
      v70 = 1LL;
      goto LABEL_121;
    }
  }
  else if ( (_BYTE)a2 )
  {
    if ( v3 )
    {
      if ( *((_BYTE *)v8 + 8) == 1 )
      {
        v69 = W32GetUserSessionState(0, a2, a3);
        CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v69 + 16832), 1, 0);
        *((_BYTE *)v8 + 8) = 0;
      }
      DelayZonePalmRejection::DispatchBufferedInputFrames(v8);
    }
    else
    {
      *((_QWORD *)v8 + 8) = v4;
      v9 = 0;
    }
    v67 = *((_QWORD *)v8 + 15);
    if ( v67 )
    {
      v68 = *((unsigned int *)v8 + 1);
      v70 = 0LL;
LABEL_121:
      DelayZoneTelemetry::UpdateInputPalmRejectStateInfo(v67, v68, v70);
    }
  }
LABEL_127:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v6 = 0;
  }
  v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v73 = *((_DWORD *)v8 + 1);
    v74 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v75) = v72;
    LOBYTE(v76) = v6;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v76,
      v75,
      *(_QWORD *)(v74 + 69136),
      4,
      4,
      19,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      v73,
      v9);
  }
  return v9;
}
