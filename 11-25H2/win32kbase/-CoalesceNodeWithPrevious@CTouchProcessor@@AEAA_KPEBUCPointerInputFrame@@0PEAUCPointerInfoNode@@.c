/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1401FBF18
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1401FC36C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x14020C254 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     EtwTracePointerCoalesce @ 0x140105120 (EtwTracePointerCoalesce.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1401887DC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1401FF830 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14020DB04 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CoalesceNodeWithPrevious(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rax
  int v14; // r8d
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v19; // [rsp+78h] [rbp+48h] BYREF

  v19 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9927);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9929);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9930);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9931);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9932);
  if ( (*(_DWORD *)a4 & 0x800000) != 0 || (*(_DWORD *)a4 & 0x8000000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9933);
  if ( *(int *)a4 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9934);
  if ( (*(_DWORD *)a4 & 0x100000) != 0 && (*(_DWORD *)a4 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9935);
  if ( *((_DWORD *)a4 + 59) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9936);
  v12 = a6;
  v13 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v13 )
      goto LABEL_28;
    v14 = 9939;
  }
  else
  {
    if ( !v13 )
      goto LABEL_28;
    v14 = 9943;
  }
  a6 = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v14);
LABEL_28:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 86), &v19);
  if ( !ValidNodeInFrame )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9954);
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9955);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 1) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9956);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 0x800000) != 0 || (*(_DWORD *)ValidNodeInFrame & 0x8000000) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9957);
  }
  if ( *(int *)ValidNodeInFrame < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9959);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 0x100000) != 0 && (*(_DWORD *)ValidNodeInFrame & 0x400000) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9960);
  }
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9961);
  }
  if ( *((_DWORD *)ValidNodeInFrame + 59) > 0x64u )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9963);
  }
  CTouchProcessor::UpdateMsgData(
    (CTouchProcessor *)this,
    *((_QWORD *)ValidNodeInFrame + 2),
    *((_DWORD *)a2 + 10),
    a5,
    *((_QWORD *)a4 + 2));
  *((_QWORD *)a4 + 2) = *((_QWORD *)ValidNodeInFrame + 2);
  *((_DWORD *)a4 + 59) = *((_DWORD *)ValidNodeInFrame + 59) + 1;
  *((_DWORD *)a4 + 86) = v19;
  if ( !v12 )
  {
    if ( (*(_DWORD *)ValidNodeInFrame & 0x80000) == 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10008);
    }
    if ( (*(_DWORD *)ValidNodeInFrame & 0x800000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10009);
    }
    if ( (*(_DWORD *)ValidNodeInFrame & 0x8000000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10010);
    }
    if ( *(int *)a4 < 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10011);
    }
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10012);
    }
    *(_DWORD *)a4 |= 0x80000u;
    v16 = *(_DWORD *)ValidNodeInFrame ^ (*(_DWORD *)ValidNodeInFrame ^ *(_DWORD *)a4) & 0xFFEFFFFF;
    *(_DWORD *)a4 = v16;
    v17 = *(_DWORD *)ValidNodeInFrame ^ (*(_DWORD *)ValidNodeInFrame ^ v16) & 0xFFDFFFFF;
    *(_DWORD *)a4 = v17;
    *(_DWORD *)a4 = *(_DWORD *)ValidNodeInFrame ^ (*(_DWORD *)ValidNodeInFrame ^ v17) & 0xFFBFFFFF;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 80), *((_WORD *)a4 + 86), v12);
  return *((_QWORD *)a4 + 2);
}
