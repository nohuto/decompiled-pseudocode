/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C3C98
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C3A38 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1400C4720 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D901C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x14020E214 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x140212790 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x140214D28 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1402150C4 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x140215254 (-LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x140215508 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddd @ 0x1402157A4 (WPP_RECORDER_AND_TRACE_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x140223218 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1402232A4 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

char __fastcall DelayZonePalmRejection::ProcessInput(DelayZonePalmRejection *this, unsigned __int64 a2)
{
  BOOL v2; // esi
  LARGE_INTEGER v3; // rax
  const struct CPointerInputFrame *v4; // r12
  int v5; // ebx
  unsigned int v6; // r8d
  unsigned int v7; // edi
  DelayZonePalmRejection *v8; // r14
  char v9; // r15
  char v10; // r13
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
  bool v26; // r12
  __int64 v27; // rbx
  int v28; // edi
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rax
  int v33; // eax
  struct tagPOINT v34; // r9
  struct tagPOINT v35; // r8
  void *v36; // rdx
  bool v37; // r12
  int v38; // ebx
  __int64 v39; // rdi
  int v40; // esi
  __int64 v41; // rax
  int v42; // edx
  int v43; // r8d
  int v44; // esi
  bool v45; // r12
  __int64 v46; // rbx
  int v47; // edi
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  bool v51; // bl
  bool v52; // di
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  unsigned int v56; // ecx
  unsigned __int64 v57; // rsi
  bool v58; // bl
  bool v59; // di
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rax
  bool v70; // di
  int v71; // ebx
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  int v76; // [rsp+28h] [rbp-E0h]
  int v77; // [rsp+30h] [rbp-D8h]
  int v78; // [rsp+38h] [rbp-D0h]
  int v79; // [rsp+40h] [rbp-C8h]
  bool v80[4]; // [rsp+78h] [rbp-90h] BYREF
  char v81; // [rsp+7Ch] [rbp-8Ch]
  char v82; // [rsp+7Dh] [rbp-8Bh]
  int v83; // [rsp+80h] [rbp-88h]
  bool v84; // [rsp+84h] [rbp-84h]
  BOOL v85; // [rsp+88h] [rbp-80h]
  BOOL v86; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v87; // [rsp+90h] [rbp-78h]
  const struct tagPOINTER_INFO *v88; // [rsp+98h] [rbp-70h]
  int v89; // [rsp+A0h] [rbp-68h]
  unsigned int v90; // [rsp+A4h] [rbp-64h]
  LARGE_INTEGER PerformanceCounter; // [rsp+A8h] [rbp-60h]
  struct tagPOINTER_INFO *v92; // [rsp+B0h] [rbp-58h]
  const struct CPointerInputFrame *v93; // [rsp+B8h] [rbp-50h]
  __int128 v94; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v95; // [rsp+D8h] [rbp-30h]
  _OWORD v96[2]; // [rsp+E8h] [rbp-20h] BYREF

  v3.QuadPart = 0LL;
  v93 = (const struct CPointerInputFrame *)a2;
  v92 = 0LL;
  v4 = (const struct CPointerInputFrame *)a2;
  PerformanceCounter.QuadPart = 0LL;
  LOBYTE(v2) = 0;
  v80[3] = 0;
  LOBYTE(a2) = 0;
  v85 = v2;
  v5 = 0;
  v80[0] = 0;
  v6 = *((_DWORD *)v4 + 12);
  v7 = 0;
  v82 = 0;
  v8 = this;
  v83 = 0;
  LOBYTE(this) = 0;
  v90 = v6;
  v80[1] = 0;
  v9 = 1;
  LOBYTE(v86) = 0;
  v10 = 1;
  v87 = 0;
  if ( v6 )
  {
    do
    {
      UserSessionState = W32GetUserSessionState(this, a2);
      PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(UserSessionState + 3256), v4, v7);
      v88 = PointerInfo;
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
            goto LABEL_120;
          v80[0] = 1;
          *((LARGE_INTEGER *)v8 + 6) = KeQueryPerformanceCounter(0LL);
          v16 = *((_DWORD *)v13 + 3);
          if ( (v16 & 1) != 0 )
          {
            v17 = *((_DWORD *)v8 + 11);
            if ( !v17 )
            {
              v80[3] = 1;
              v92 = v13;
            }
            v89 = v17 + 1;
            *((_DWORD *)v8 + 11) = v17 + 1;
            v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v20 = *((_QWORD *)v8 + 4);
              v21 = *((_DWORD *)v13 + 1);
              v22 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
              LOBYTE(v23) = v19;
              LOBYTE(v24) = v18;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v24,
                v23,
                *(_QWORD *)(v22 + 69144),
                4,
                v77,
                13,
                (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
                v21,
                v20,
                v89);
              v13 = v88;
              v5 = v83;
            }
            this = (DelayZonePalmRejection *)*((_QWORD *)v8 + 15);
            if ( this )
            {
              v94 = 0LL;
              v95 = 0LL;
              DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(this, 0xFFFFFFFFLL, &v94, v13, v5++);
              v83 = v5;
            }
          }
          else if ( (v16 & 2) == 0 )
          {
            v25 = *((_DWORD *)v8 + 11);
            if ( v25 )
              *((_DWORD *)v8 + 11) = --v25;
            this = (DelayZonePalmRejection *)WPP_GLOBAL_Control;
            v26 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v80[2] = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = *((_QWORD *)v8 + 4);
              v28 = *((_DWORD *)v13 + 1);
              v29 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
              LOBYTE(v30) = v80[2];
              LOBYTE(v31) = v26;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v31,
                v30,
                *(_QWORD *)(v29 + 69144),
                4,
                v77,
                14,
                (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
                v28,
                v27,
                v25);
              v13 = v88;
              v5 = v83;
            }
          }
          if ( (*((_DWORD *)v13 + 3) & 0x8000) != 0 )
            v82 = 1;
        }
        else
        {
          if ( v14 != 2 )
            goto LABEL_120;
          v32 = *((_QWORD *)v8 + 2);
          if ( !v32 )
          {
            v32 = *((_QWORD *)v4 + 8);
            *((_QWORD *)v8 + 2) = v32;
          }
          if ( *((_QWORD *)v4 + 8) != v32 )
            goto LABEL_120;
          v80[1] = 1;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v33 = *((_DWORD *)v13 + 3);
          if ( (v33 & 0x10000) != 0 )
          {
            ++*((_DWORD *)v8 + 10);
            v34 = (struct tagPOINT)*((_QWORD *)v13 + 7);
            v35 = (struct tagPOINT)*((_QWORD *)v13 + 6);
            v36 = (void *)*((_QWORD *)v13 + 2);
            v80[2] = 0;
            v94 = 0LL;
            v95 = 0LL;
            LOBYTE(a2) = DelayZonePalmRejection::HitTestRejectionRegion(
                           v8,
                           v36,
                           v35,
                           v34,
                           &v80[2],
                           (struct CDelayZonePanelTelemetryData *)&v94);
            v81 = a2;
            if ( !v86 )
              v86 = (_BYTE)a2 != 0;
            if ( !v2 )
              v85 = (_BYTE)a2 == 0;
            v37 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v84 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v38 = *((_DWORD *)v8 + 10);
              v39 = *((_QWORD *)v8 + 2);
              v40 = *((_DWORD *)v88 + 1);
              v41 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
              LOBYTE(v42) = v37;
              LOBYTE(v43) = v84;
              WPP_RECORDER_AND_TRACE_SF_dqddd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v42,
                v43,
                *(_QWORD *)(v41 + 69144),
                v76,
                v77,
                v78,
                v79,
                v40,
                v39,
                v38,
                v86,
                v85);
              LOBYTE(a2) = v81;
              v13 = v88;
              v5 = v83;
            }
            this = (DelayZonePalmRejection *)*((_QWORD *)v8 + 15);
            if ( this && (_BYTE)a2 )
            {
              v96[0] = v94;
              v96[1] = v95;
              DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(this, v80[2], v96, v13, v5++);
              v83 = v5;
            }
          }
          else if ( (v33 & 0x40000) != 0 )
          {
            v44 = *((_DWORD *)v8 + 10);
            if ( v44 )
              *((_DWORD *)v8 + 10) = --v44;
            this = (DelayZonePalmRejection *)WPP_GLOBAL_Control;
            v45 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v81 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v46 = *((_QWORD *)v8 + 2);
              v47 = *((_DWORD *)v13 + 1);
              v48 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
              LOBYTE(v49) = v81;
              LOBYTE(v50) = v45;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v50,
                v49,
                *(_QWORD *)(v48 + 69144),
                4,
                v77,
                16,
                (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
                v47,
                v46,
                v44);
              v5 = v83;
            }
          }
        }
        v4 = v93;
        LOBYTE(v2) = v85;
      }
      v7 = v87 + 1;
      v87 = v7;
    }
    while ( v7 < v90 );
    v3 = PerformanceCounter;
    LOBYTE(this) = v80[1];
    LOBYTE(a2) = v80[0];
  }
  if ( *(_BYTE *)v8 )
  {
    if ( (_BYTE)this )
    {
      v56 = *((_DWORD *)v8 + 27);
      if ( v56 )
      {
        a2 = (unsigned __int64)(1000 * (v3.QuadPart - *((_QWORD *)v8 + 6))) % gliQpcFreq.QuadPart;
        v57 = (unsigned __int64)(1000 * (v3.QuadPart - *((_QWORD *)v8 + 6))) / gliQpcFreq.QuadPart;
        if ( (unsigned int)v57 > v56 )
        {
          *(_BYTE *)v8 = 0;
          v58 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v60 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
            LOBYTE(v61) = v59;
            LOBYTE(v62) = v58;
            WPP_RECORDER_AND_TRACE_SF_L(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v62,
              v61,
              *(_QWORD *)(v60 + 69144),
              4,
              v77,
              18,
              (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
              v57);
          }
        }
      }
    }
  }
  else if ( (_BYTE)a2 )
  {
    *(_BYTE *)v8 = 1;
    v51 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v53 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v54) = v52;
      LOBYTE(v55) = v51;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v55,
        v54,
        *(_QWORD *)(v53 + 69144),
        4,
        4,
        17,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
    }
  }
  v63 = *((unsigned int *)v8 + 1);
  if ( !(_DWORD)v63 )
  {
    if ( *(_BYTE *)v8 )
    {
      if ( v80[0] && v80[3] )
      {
        v66 = *((_QWORD *)v8 + 15);
        a2 = 2LL;
        *((_DWORD *)v8 + 1) = 2;
        if ( !v66 )
          goto LABEL_120;
        goto LABEL_113;
      }
      if ( v80[1] && v86 )
      {
        v69 = W32GetUserSessionState(v63, a2);
        CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v69 + 16840), 0, *((_DWORD *)v8 + 25));
        *((_BYTE *)v8 + 8) = 1;
        *((_QWORD *)v8 + 7) = v4;
        *((_QWORD *)v8 + 8) = v4;
        DelayZonePalmRejection::LockTouchDeviceHandle(v8);
        v66 = *((_QWORD *)v8 + 15);
        v10 = 0;
        *((_DWORD *)v8 + 1) = 1;
        if ( !v66 )
          goto LABEL_120;
        v68 = 0LL;
        a2 = 1LL;
        goto LABEL_114;
      }
    }
    *((_DWORD *)v8 + 1) = 2;
    goto LABEL_120;
  }
  v64 = (unsigned int)(v63 - 1);
  if ( (_DWORD)v64 )
  {
    if ( (_DWORD)v64 == 1 && !*((_DWORD *)v8 + 11) && !*((_DWORD *)v8 + 10) && !v82 )
    {
      *((_QWORD *)v8 + 4) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      *((_DWORD *)v8 + 1) = 0;
    }
    goto LABEL_120;
  }
  if ( v80[0] && v80[3] )
  {
    if ( *((_BYTE *)v8 + 8) == 1 )
    {
      v65 = W32GetUserSessionState(v64, a2);
      CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v65 + 16840), 1, 0);
      *((_BYTE *)v8 + 8) = 0;
    }
    DelayZonePalmRejection::SuppressDeadzoneContacts(
      v8,
      (const struct DEVICE_OUTPUT_CONFIG *)(*((_QWORD *)v4 + 32) + 156LL),
      v92);
    DelayZonePalmRejection::DispatchBufferedInputFrames(v8);
    v66 = *((_QWORD *)v8 + 15);
    if ( v66 )
    {
      a2 = *((unsigned int *)v8 + 1);
LABEL_113:
      v68 = 1LL;
      goto LABEL_114;
    }
  }
  else if ( v80[1] )
  {
    if ( v85 )
    {
      if ( *((_BYTE *)v8 + 8) == 1 )
      {
        v67 = W32GetUserSessionState(v64, a2);
        CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v67 + 16840), 1, 0);
        *((_BYTE *)v8 + 8) = 0;
      }
      DelayZonePalmRejection::DispatchBufferedInputFrames(v8);
    }
    else
    {
      *((_QWORD *)v8 + 8) = v4;
      v10 = 0;
    }
    v66 = *((_QWORD *)v8 + 15);
    if ( v66 )
    {
      a2 = *((unsigned int *)v8 + 1);
      v68 = 0LL;
LABEL_114:
      DelayZoneTelemetry::UpdateInputPalmRejectStateInfo(v66, a2, v68);
    }
  }
LABEL_120:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v9 = 0;
  }
  v70 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v71 = *((_DWORD *)v8 + 1);
    v72 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v73) = v70;
    LOBYTE(v74) = v9;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v74,
      v73,
      *(_QWORD *)(v72 + 69144),
      4,
      4,
      19,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      v71,
      v10);
  }
  return v10;
}
