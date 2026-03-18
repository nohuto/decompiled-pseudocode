/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1400D3AF0
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1400D32BC (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     GetPointerInfoSize @ 0x1400EC9DC (GetPointerInfoSize.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x140106054 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1401086A0 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019F2C4 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FF0C0 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14020257C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x140203154 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1402032E8 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140204310 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        CTouchProcessor *this,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int8 *a8)
{
  unsigned int v9; // ebx
  int v12; // edx
  int v13; // r8d
  char v14; // di
  CTouchProcessor *v15; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v17; // edx
  struct CPointerMsgData *v18; // rsi
  _QWORD *v19; // rcx
  void *v20; // r8
  __int64 FrameById; // rax
  __int64 v22; // r15
  CPointerInfoNode *v23; // r14
  unsigned int v24; // r13d
  int v25; // edx
  int PointerFrameData; // ebp
  unsigned __int64 v27; // rsi
  unsigned int HistoryCount; // eax
  unsigned int v29; // r14d
  unsigned int v30; // r13d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r15
  CPointerInfoNode *v32; // r14
  unsigned int v33; // eax
  unsigned int v34; // ecx
  void *v35; // r8
  __int16 v37; // [rsp+30h] [rbp-78h]
  unsigned int v38; // [rsp+40h] [rbp-68h] BYREF
  int v39; // [rsp+44h] [rbp-64h]
  int v40; // [rsp+48h] [rbp-60h]
  unsigned int PointerInfoSize; // [rsp+4Ch] [rbp-5Ch]
  unsigned __int8 *v42; // [rsp+50h] [rbp-58h]
  _BYTE v43[80]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v47; // [rsp+D0h] [rbp+28h]

  v9 = 0;
  v42 = a8;
  v38 = 0;
  PointerInfoSize = GetPointerInfoSize(a3);
  v14 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v12 || (_BYTE)v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v13,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      123,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v43, (CTouchProcessor *)((char *)this + 32));
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v15, a2);
  v18 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *((unsigned int *)NonConstMsgData + 7), 4LL);
    v22 = FrameById;
    if ( FrameById )
    {
      if ( *((_DWORD *)v18 + 8) >= *(_DWORD *)(FrameById + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5265LL);
      v23 = (CPointerInfoNode *)(*(_QWORD *)(v22 + 240) + 480LL * *((unsigned int *)v18 + 8));
      if ( !(unsigned int)CPointerInfoNode::IsValid(v23) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5267LL);
      if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v23) )
      {
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (LOBYTE(v17) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          LOBYTE(v17) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          v14 = 0;
        if ( (_BYTE)v17 || v14 )
        {
          v20 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
          v37 = 126;
          goto LABEL_48;
        }
      }
      else
      {
        v47 = 1;
        v24 = 1;
        PointerFrameData = CTouchProcessor::GetPointerFrameData(
                             this,
                             (const struct CPointerInputFrame *)v22,
                             v23,
                             a3,
                             a5,
                             &v38,
                             (struct tagPOINTER_INFO *)a8);
        if ( PointerFrameData )
        {
          v27 = v38 * (unsigned __int64)PointerInfoSize;
          if ( v27 > 0xFFFFFFFF )
          {
            PointerFrameData = 0;
          }
          else
          {
            PointerFrameData = 1;
            if ( a5 >= (unsigned int)v27 )
            {
              if ( !(_DWORD)v27 )
              {
                v39 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5301LL);
              }
              v42 = &a8[(unsigned int)v27];
              a5 -= v27;
            }
            if ( a4 )
            {
              HistoryCount = CPointerInfoNode::GetHistoryCount(v23);
              v29 = *((_DWORD *)v23 + 86);
              v30 = HistoryCount;
              PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                        this,
                                        (const struct CPointerInputFrame *)v22);
              while ( PreviousFrameByDevice )
              {
                if ( v30 > 1 )
                {
                  if ( v29 >= *((_DWORD *)PreviousFrameByDevice + 12) )
                  {
                    v39 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5318LL);
                  }
                  v32 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v29);
                  if ( !(unsigned int)CPointerInfoNode::IsValid(v32) )
                  {
                    v40 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5320LL);
                  }
                  ++v47;
                  if ( a5 >= (unsigned int)v27 )
                  {
                    PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                         this,
                                         PreviousFrameByDevice,
                                         a3,
                                         v38,
                                         v27,
                                         a8,
                                         v42);
                    if ( PointerFrameData )
                    {
                      v42 += (unsigned int)v27;
                      a5 -= v27;
                    }
                  }
                  if ( CPointerInfoNode::GetHistoryCount(v32) != v30 - 1 )
                  {
                    PointerInfoSize = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5340LL);
                  }
                  v33 = CPointerInfoNode::GetHistoryCount(v32);
                  v29 = *((_DWORD *)v32 + 86);
                  v30 = v33;
                  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
                  if ( PointerFrameData )
                    continue;
                }
                if ( !PointerFrameData )
                  goto LABEL_73;
                break;
              }
              v24 = v47;
            }
            v34 = v38;
            *a6 = v24;
            *a7 = v34;
          }
        }
LABEL_73:
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          LOBYTE(v25) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          v14 = 0;
        if ( (_BYTE)v25 || v14 )
        {
          v35 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
          LOBYTE(v35) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            (_DWORD)v35,
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5,
            4,
            127,
            (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
        }
        v9 = PointerFrameData;
      }
    }
    else
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v17) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v14 = 0;
      if ( (_BYTE)v17 || v14 )
      {
        v20 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
        v37 = 125;
        goto LABEL_48;
      }
    }
  }
  else
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v17) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v14 = 0;
    if ( (_BYTE)v17 || v14 )
    {
      v20 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      v37 = 124;
LABEL_48:
      LOBYTE(v20) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        v19[3],
        v17,
        (_DWORD)v20,
        v19[8],
        5,
        4,
        v37,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)v43);
  return v9;
}
