/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D4560
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D2F70 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1401086A0 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     IsExemptInjectionDevice @ 0x1401284F0 (IsExemptInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019F2C4 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FF0C0 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14020257C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x140203DC0 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140204310 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     RtlSetVolatileMemory @ 0x140242F20 (RtlSetVolatileMemory.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        CTouchProcessor *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  unsigned __int64 v7; // r15
  char v8; // di
  _UNKNOWN **v9; // r8
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  char v12; // si
  _UNKNOWN **v13; // r8
  bool v14; // r15
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  _QWORD *v18; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v20; // rsi
  char v21; // si
  bool v22; // r15
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 FrameById; // rax
  __int64 v27; // r12
  char v28; // si
  bool v29; // r15
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v34; // r15
  __int64 v35; // rdx
  unsigned int HistoryCount; // ecx
  unsigned int PointerRawData; // esi
  char v38; // r15
  bool v39; // r12
  __int64 v40; // rax
  unsigned int v41; // edx
  int v42; // r8d
  __int64 v43; // rdx
  char v44; // r15
  bool v45; // r12
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  _QWORD *v49; // rcx
  _UNKNOWN **v50; // r8
  char v51; // r15
  bool v52; // r12
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  unsigned int v56; // r15d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r12
  __int64 v58; // r15
  char v59; // si
  bool v60; // r13
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  int v64; // [rsp+28h] [rbp-90h]
  __int16 v65; // [rsp+30h] [rbp-88h]
  __int16 v66; // [rsp+30h] [rbp-88h]
  int v67; // [rsp+38h] [rbp-80h]
  __int64 v68; // [rsp+50h] [rbp-68h]
  __int64 v69; // [rsp+58h] [rbp-60h]
  size_t Size; // [rsp+60h] [rbp-58h]
  int *v71; // [rsp+68h] [rbp-50h]
  _BYTE v72[64]; // [rsp+78h] [rbp-40h] BYREF
  unsigned int v76; // [rsp+E8h] [rbp+30h]
  int *v77; // [rsp+F0h] [rbp+38h]

  v7 = a2;
  Size = a6;
  v71 = &a7[Size];
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
  {
    LOBYTE(a2) = 0;
    v8 = 1;
  }
  else
  {
    v8 = 1;
    LOBYTE(a2) = 1;
  }
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      (_DWORD)v9,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      128,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v72, (CTouchProcessor *)((char *)this + 32));
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5400LL);
  if ( a6 < a4 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v12 = 0;
    }
    v13 = &WPP_RECORDER_INITIALIZED;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69144),
        3,
        4,
        129,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v13 = &WPP_RECORDER_INITIALIZED;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_69;
    v65 = 130;
LABEL_68:
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v18[3],
      v10,
      (_DWORD)v13,
      v18[8],
      5,
      4,
      v65,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
LABEL_69:
    CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)v72);
    return 0LL;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, v7);
  v20 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v21 = 0;
    }
    v13 = &WPP_RECORDER_INITIALIZED;
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69144),
        3,
        4,
        131,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v13 = &WPP_RECORDER_INITIALIZED;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_69;
    v65 = 132;
    goto LABEL_68;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((unsigned int *)NonConstMsgData + 7), 4LL);
  v27 = FrameById;
  v69 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v28 = 0;
    }
    v13 = &WPP_RECORDER_INITIALIZED;
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 69144),
        3,
        4,
        133,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v13 = &WPP_RECORDER_INITIALIZED;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_69;
    v65 = 134;
    goto LABEL_68;
  }
  if ( *((_DWORD *)v20 + 8) >= *(_DWORD *)(FrameById + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5428LL);
  v34 = *(_QWORD *)(v27 + 240) + 480LL * *((unsigned int *)v20 + 8);
  v68 = v34;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v34) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5430LL);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v34);
  v76 = HistoryCount;
  if ( a3 == 1 || (PointerRawData = 0, a3 == HistoryCount) )
    PointerRawData = 1;
  if ( !PointerRawData )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v38 = 0;
    }
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v35);
      v41 = a3;
      LOBYTE(v42) = v39;
      LOBYTE(v41) = v38;
      WPP_RECORDER_AND_TRACE_SF_LL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v42,
        *(_QWORD *)(v40 + 69144),
        3,
        v64,
        135,
        v67,
        a3,
        v76);
    }
    v34 = v68;
    v27 = v69;
  }
  if ( (unsigned __int8)IsExemptInjectionDevice(*(_QWORD *)(v27 + 64)) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v44 = 0;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v46 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v43);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 69144),
        4,
        4,
        136,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    RtlSetVolatileMemory(a7, 0, Size * 4);
    v49 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v43) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v43) = 0;
    }
    v50 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v43 && !v8 )
      goto LABEL_148;
    v66 = 138;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         this,
                         (const struct CPointerInputFrame *)v27,
                         *(_DWORD *)(v34 + 156),
                         *(_WORD *)(v34 + 162),
                         a4,
                         a5,
                         a7);
      if ( !PointerRawData )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v51 = 0;
        }
        v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v53 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v43);
          LOBYTE(v54) = v52;
          LOBYTE(v55) = v51;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v55,
            v54,
            *(_QWORD *)(v53 + 69144),
            3,
            4,
            139,
            (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
        }
        v27 = v69;
      }
      if ( PointerRawData )
      {
        v77 = &a7[a4];
        if ( a3 > 1 )
        {
          v56 = *(_DWORD *)(v68 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                    this,
                                    (const struct CPointerInputFrame *)v27);
          do
          {
            if ( !PreviousFrameByDevice || v76 <= 1 )
              break;
            if ( v56 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5499LL);
            v58 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v56;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v58) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5501LL);
            if ( &v77[a4] > v71 )
            {
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v59 = 0;
              }
              v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v61 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a4);
                LOBYTE(v62) = v60;
                LOBYTE(v63) = v59;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v63,
                  v62,
                  *(_QWORD *)(v61 + 69144),
                  3,
                  4,
                  140,
                  (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v58 + 156),
                                 *(_WORD *)(v58 + 162),
                                 a4,
                                 a5,
                                 v77);
              if ( PointerRawData )
                v77 += a4;
            }
            if ( CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v58) != v76 - 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5523LL);
            v76 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v58);
            v56 = *(_DWORD *)(v58 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    v49 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v43) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v43) = 0;
    }
    v50 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v43 && !v8 )
      goto LABEL_148;
    v66 = 141;
  }
  LOBYTE(v50) = v8;
  WPP_RECORDER_AND_TRACE_SF_(
    v49[3],
    v43,
    (_DWORD)v50,
    v49[8],
    5,
    4,
    v66,
    (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
LABEL_148:
  CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)v72);
  return PointerRawData;
}
