/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x140065B14
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140062CC0 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z @ 0x1402161B4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ApiSetEditionEdgyEnabled @ 0x140065EA4 (ApiSetEditionEdgyEnabled.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x140065F04 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x140065FF0 (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140066E08 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     IsTouchpadDevice @ 0x14006E7CC (IsTouchpadDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1401BCA9C (ApiSetEditionEdgyProcessInput.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1402157D4 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x14021658C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x14022755C (ApiSetEditionEdgyResetCurrentFrame.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        CTouchProcessor *this,
        const struct RIMCOMPLETEFRAME *a2,
        const struct CPointerInputFrame *a3,
        void *a4,
        int a5,
        int a6,
        int a7)
{
  const struct CPointerInputFrame *v8; // rsi
  char v10; // di
  int v11; // edx
  int v12; // r8d
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdx
  CTouchProcessor *v15; // rcx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rdx
  CTouchProcessor *v21; // rcx
  unsigned int v22; // r8d
  unsigned int MessagesCore; // ebx
  int v25; // edx
  int v26; // r8d
  struct CPointerInputFrame *v27; // r14
  const struct CPointerInputFrame *NextFrame; // rbx
  _QWORD v29[4]; // [rsp+40h] [rbp-30h] BYREF
  char v30; // [rsp+60h] [rbp-10h]
  PERESOURCE *v31; // [rsp+68h] [rbp-8h]
  struct CPointerInputFrame *v32; // [rsp+A8h] [rbp+38h] BYREF

  v32 = a2;
  v8 = a3;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      331,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)this + 4) )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14897LL);
  }
  if ( !a7 )
  {
    v29[0] = 0LL;
    v30 = 0;
    v31 = (PERESOURCE *)((char *)this + 32);
    CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v29, v11, v12);
    ExReleaseResourceAndLeaveCriticalRegion(*v31);
    CTouchProcessor::DoContactVisualization(v13, v8, a4, a5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v31);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v29, v14);
  }
  if ( (unsigned int)ApiSetEditionEdgyEnabled() && !(unsigned __int8)IsTouchpadDevice(a4) )
  {
    v32 = 0LL;
    v29[0] = 0LL;
    v30 = 0;
    v31 = (PERESOURCE *)((char *)this + 32);
    CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v29, v16, v17);
    ExReleaseResourceAndLeaveCriticalRegion(*v31);
    v19 = ApiSetEditionEdgyProcessInput(this, v18, v8, &v32);
    InputTraceLogging::Pointer::HandleDesktopEdgy(v8, v19);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v31);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v29, v20);
    if ( !v19 )
    {
      *((_DWORD *)v8 + 57) |= 0x20u;
      return 1LL;
    }
    v27 = v32;
    if ( v32 )
    {
      *((_DWORD *)v32 + 57) &= ~0x20u;
      if ( v32 )
      {
        if ( *((_DWORD *)v32 + 12) == 1 && (*((_DWORD *)v32 + 57) & 8) != 0 )
        {
          v21 = (CTouchProcessor *)*((_QWORD *)v32 + 30);
          if ( (*(_DWORD *)v21 & 0x400) != 0 && (*((_DWORD *)v21 + 45) & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v32, v22);
        }
      }
      do
      {
        if ( v27 == v8 )
          break;
        CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v21, v27);
        CTouchProcessor::GenerateMessagesCore(
          this,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v27 + 32) + 368LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v27 + 32) + 368LL), 5),
          0,
          v27);
        NextFrame = CTouchProcessor::GetNextFrame(this, v27, (struct _LIST_ENTRY *)this + 3);
        CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v27);
        v27 = NextFrame;
      }
      while ( NextFrame );
    }
    ApiSetEditionEdgyResetCurrentFrame();
  }
  CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v15, v8);
  MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, v8);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v8);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v25) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( (_BYTE)v25 || v10 )
  {
    LOBYTE(v26) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v26,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      332,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  return MessagesCore;
}
