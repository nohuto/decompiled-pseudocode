/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140064808
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140062CC0 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140066860 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z.c)
 * Callees:
 *     ?ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z @ 0x14006472C (-ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1400661B0 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1400661F0 (EtwTraceEndPointerFrameCommit.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1400681A8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140069CB8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14006BF24 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14006D2C4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x14006D51C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14010BAD8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x14010D3F8 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1401BD5D8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct RIMCOMPLETEFRAME *a3)
{
  struct CPointerInputFrame *v3; // rdi
  unsigned int v5; // r15d
  char v6; // bp
  char v7; // r8
  void *v8; // r9
  __int64 v9; // rax
  signed __int32 *v10; // rbx
  unsigned int v11; // esi
  struct CPointerInputFrame *v12; // rax
  unsigned int v13; // ecx
  CPointerInfoNode *v14; // r14
  const struct CPointerInputFrame *v15; // r12
  CInputDest *v16; // rsi
  unsigned __int64 v17; // rbx
  CTouchProcessor *v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r15
  struct tagTHREADINFO *ThreadInfo; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rbx
  struct tagTHREADINFO *v26; // rax
  int v27; // eax
  struct CPointerQFrame *v28; // rax
  struct CPointerQFrame *v29; // rbx
  __int64 v30; // rdx
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  VirtualTouchpadProcessor *v34; // rcx
  int v35; // edx
  struct CPointerInputFrame *v36; // rbx
  unsigned int v38; // [rsp+40h] [rbp-E8h]
  _DWORD v39[28]; // [rsp+60h] [rbp-C8h] BYREF
  char v40; // [rsp+D0h] [rbp-58h]

  v3 = a2;
  v5 = 0;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v7 = 0;
  }
  v8 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
  if ( (_BYTE)a2 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v7,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      39,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v9 = *((unsigned int *)v3 + 12);
  v10 = (signed __int32 *)*((_QWORD *)v3 + 30);
  v11 = 0;
  for ( *((_DWORD *)v3 + 56) = 2; v11 < (unsigned int)v9; v10 += 120 )
  {
    if ( (unsigned __int64)v10 >= *((_QWORD *)v3 + 30) + 480 * v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1153LL);
    if ( _bittest(v10, 0xCu) )
      InputTraceLogging::Pointer::DropInput(v3, v10 + 40, 0LL, v8);
    if ( _bittest(v10, 0xCu) || !CTouchProcessor::PopulatePointerInfoNode(this, v3, (struct CPointerInfoNode *)v10) )
      CTouchProcessor::FreePointerInfoNodeInt(this, v3, v11);
    v9 = *((unsigned int *)v3 + 12);
    ++v11;
  }
  *((_DWORD *)v3 + 56) = 4;
  v12 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(this, v3);
  v13 = *((_DWORD *)v3 + 12);
  v14 = (CPointerInfoNode *)*((_QWORD *)v3 + 30);
  v15 = v12;
  v38 = 0;
  if ( v13 )
  {
    v16 = (CPointerInfoNode *)((char *)v14 + 352);
    v17 = 0LL;
    do
    {
      if ( (unsigned __int64)v14 >= *((_QWORD *)v3 + 30) + 480 * (unsigned __int64)v13 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1184LL);
      if ( (*(_DWORD *)v14 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v14) )
      {
        memset(v39, 0, sizeof(v39));
        v40 = 0;
        if ( (unsigned int)CPointerInfoNode::IsForManipulationThread(v14) )
        {
          v17 = -1LL;
        }
        else if ( *(_DWORD *)v16 != (_DWORD)v19 )
        {
          if ( *((_DWORD *)v16 + 23) != (_DWORD)v19 )
          {
            v20 = v19;
            ThreadInfo = CInputDest::GetThreadInfo(v16);
            if ( ThreadInfo )
              v20 = *((_QWORD *)ThreadInfo + 58);
            v25 = *((_QWORD *)v16 - 20);
            if ( v20 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v22, v24) + 19864)
                                                          + 40LL * (unsigned __int16)v25)
                                              + 16LL)
                                  + 464LL) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1204LL);
            v5 = v38;
            v19 = 0LL;
          }
          v17 = v19;
          if ( *(_DWORD *)v16 != (_DWORD)v19 )
          {
            v26 = CInputDest::GetThreadInfo(v16);
            if ( v26 )
              v17 = *((_QWORD *)v26 + 58);
          }
          CInputDest::operator=(v39, v16);
          LODWORD(v19) = 0;
          if ( !v17 && *(_DWORD *)v16 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1209LL);
            LODWORD(v19) = 0;
          }
        }
        v27 = v19;
        LOBYTE(v27) = v15 != 0LL;
        v28 = CTouchProcessor::SetupQFrame(v18, v3, v17, (const struct CInputDest *)v39, v27);
        v29 = v28;
        if ( !v15 && (*((_DWORD *)v28 + 35) & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1216LL);
        if ( *(_DWORD *)v29 == -1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1218LL);
        *((_DWORD *)v16 - 86) = *(_DWORD *)v29;
        ++*((_DWORD *)v29 + 34);
        CTouchProcessor::ProcessQFrameNode(this, v29, v15, v14);
        v17 = 0LL;
        if ( v39[23] )
          HMAssignmentUnlock(&v39[20], v30);
      }
      v13 = *((_DWORD *)v3 + 12);
      ++v5;
      v14 = (CPointerInfoNode *)((char *)v14 + 480);
      v16 = (CInputDest *)((char *)v16 + 480);
      v38 = v5;
    }
    while ( v5 < v13 );
  }
  CTouchProcessor::TryCoalesceQFrame(this, v3, v15, 0LL);
  EtwTraceEndPointerFrameCommit(*((unsigned int *)v3 + 10), *((unsigned int *)v3 + 12));
  EtwTraceEndPointerFrameCreation(*((unsigned int *)v3 + 10), *((unsigned int *)v3 + 12), 0LL);
  if ( v15 )
    CTouchProcessor::UnreferenceFrameInt(this, v15);
  v34 = *(VirtualTouchpadProcessor **)(W32GetUserSessionState(v32, v31, v33) + 19312);
  if ( v34 )
    VirtualTouchpadProcessor::ProcessInput(v34, v3);
  v36 = CTouchProcessor::ReReferenceFrameInt((PERESOURCE *)this, v3);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v35) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v35) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v6 = 0;
  if ( (_BYTE)v35 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v35,
      v6,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      40,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  return v36;
}
