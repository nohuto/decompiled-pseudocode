/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140206828
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140207C38 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x140208F90 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DED58 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DF11C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1400ECF90 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1400ED010 (EtwTraceEndPointerFrameCommit.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1401184C4 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x140151FE4 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140200170 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140205ED0 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z @ 0x140208D58 (-ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140209150 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x14020B6A4 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x14020C254 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x14021D858 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        unsigned int a3,
        struct RIMCOMPLETEFRAME *a4)
{
  unsigned int v4; // r14d
  struct CPointerInputFrame *v5; // rdi
  unsigned int v7; // r13d
  char v8; // si
  __int64 v9; // rax
  signed __int32 *v10; // rbx
  unsigned int v11; // ebp
  struct CPointerInputFrame *v12; // rax
  __int64 v13; // rcx
  CPointerInfoNode *v14; // r14
  const struct CPointerInputFrame *v15; // r15
  CInputDest *v16; // rbp
  unsigned __int64 Queue; // rbx
  __int64 v18; // rdx
  CTouchProcessor *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  struct CPointerQFrame *v23; // rax
  struct CPointerQFrame *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // rdx
  VirtualTouchpadProcessor *Instance; // rax
  int v28; // edx
  struct CPointerInputFrame *v29; // rbx
  int v30; // r8d
  _BYTE v32[128]; // [rsp+60h] [rbp-C8h] BYREF

  v4 = a3;
  v5 = a2;
  v7 = 0;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      39,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v9 = *((unsigned int *)v5 + 12);
  v10 = (signed __int32 *)*((_QWORD *)v5 + 30);
  v11 = 0;
  for ( *((_DWORD *)v5 + 56) = 2; v11 < (unsigned int)v9; v10 += 120 )
  {
    if ( (unsigned __int64)v10 >= *((_QWORD *)v5 + 30) + 480 * v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1159);
    if ( _bittest(v10, 0xCu) )
      InputTraceLogging::Pointer::DropInput();
    if ( _bittest(v10, 0xCu)
      || !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, v5, (struct CPointerInfoNode *)v10, v4) )
    {
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)v5, v11);
    }
    v9 = *((unsigned int *)v5 + 12);
    ++v11;
  }
  *((_DWORD *)v5 + 56) = 4;
  v12 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, v5);
  v13 = *((unsigned int *)v5 + 12);
  v14 = (CPointerInfoNode *)*((_QWORD *)v5 + 30);
  v15 = v12;
  if ( (_DWORD)v13 )
  {
    v16 = (CPointerInfoNode *)((char *)v14 + 352);
    Queue = 0LL;
    do
    {
      if ( (unsigned __int64)v14 >= *((_QWORD *)v5 + 30) + 480 * v13 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1193);
      if ( (*(_DWORD *)v14 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v14) )
      {
        memset(v32, 0, 113);
        if ( CPointerInfoNode::IsForManipulationThread(v14) )
        {
          Queue = -1LL;
        }
        else if ( *(_DWORD *)v16 != (_DWORD)v18 )
        {
          if ( *((_DWORD *)v16 + 23) != (_DWORD)v18 )
          {
            v20 = (unsigned __int16)*((_DWORD *)v16 - 40);
            v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v19, v18) + 19832) + 40 * v20)
                                        + 16LL)
                            + 472LL);
            if ( CInputDest::GetQueue(v16, 2) != v21 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1213);
          }
          Queue = CInputDest::GetQueue(v16, 2);
          CInputDest::operator=((__int64)v32, (__int64)v16);
          LODWORD(v18) = 0;
          if ( !Queue && *(_DWORD *)v16 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1218);
            LODWORD(v18) = 0;
          }
        }
        v22 = v18;
        LOBYTE(v22) = v15 != 0LL;
        v23 = CTouchProcessor::SetupQFrame(v19, v5, Queue, (const struct CInputDest *)v32, v22);
        v24 = v23;
        if ( !v15 && (*((_DWORD *)v23 + 35) & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1225);
        if ( *(_DWORD *)v24 == -1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1227);
        *((_DWORD *)v16 - 86) = *(_DWORD *)v24;
        ++*((_DWORD *)v24 + 34);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v24, v15, v14);
        CInputDest::~CInputDest((CInputDest *)v32);
        Queue = 0LL;
      }
      v13 = *((unsigned int *)v5 + 12);
      v14 = (CPointerInfoNode *)((char *)v14 + 480);
      v16 = (CInputDest *)((char *)v16 + 480);
      ++v7;
    }
    while ( v7 < (unsigned int)v13 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, v5, v15, 0LL);
  EtwTraceEndPointerFrameCommit(*((unsigned int *)v5 + 10), *((_DWORD *)v5 + 12), v25);
  EtwTraceEndPointerFrameCreation(*((unsigned int *)v5 + 10), *((_DWORD *)v5 + 12), 0LL);
  if ( v15 )
    CTouchProcessor::UnreferenceFrameInt(this, v15);
  Instance = VirtualTouchpadProcessor::GetInstance(0LL, v26);
  if ( Instance )
    VirtualTouchpadProcessor::ProcessInput(Instance, v5);
  v29 = CTouchProcessor::ReReferenceFrameInt((CTouchProcessor *)this, v5);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v28) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v28) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v8 = 0;
  if ( (_BYTE)v28 || v8 )
  {
    LOBYTE(v30) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v30,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      40,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  return v29;
}
