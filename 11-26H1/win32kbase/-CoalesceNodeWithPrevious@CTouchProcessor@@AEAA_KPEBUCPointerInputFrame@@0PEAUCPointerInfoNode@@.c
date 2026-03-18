/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x140064CC8
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140069CB8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x14006DC54 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     EtwTracePointerCoalesce @ 0x140065210 (EtwTracePointerCoalesce.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14006526C (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1400CDED0 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CoalesceNodeWithPrevious(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rax
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // r8
  unsigned int v19; // [rsp+78h] [rbp+48h] BYREF

  v19 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9910LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9912LL);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9913LL);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9914LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9915LL);
  if ( (*(_DWORD *)a4 & 0x800000) != 0 || (*(_DWORD *)a4 & 0x8000000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9916LL);
  if ( *(int *)a4 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9917LL);
  if ( (*(_DWORD *)a4 & 0x100000) != 0 && (*(_DWORD *)a4 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9918LL);
  if ( *((_DWORD *)a4 + 59) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9919LL);
  v12 = a6;
  v13 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v13 )
      goto LABEL_20;
    v18 = 9922LL;
  }
  else
  {
    if ( !v13 )
      goto LABEL_20;
    v18 = 9926LL;
  }
  a6 = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v18);
LABEL_20:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 86), &v19);
  if ( !ValidNodeInFrame )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9937LL);
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9938LL);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 1) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9939LL);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 0x800000) != 0 || (*(_DWORD *)ValidNodeInFrame & 0x8000000) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9940LL);
  }
  if ( *(int *)ValidNodeInFrame < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9942LL);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 0x100000) != 0 && (*(_DWORD *)ValidNodeInFrame & 0x400000) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9943LL);
  }
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9944LL);
  }
  if ( *((_DWORD *)ValidNodeInFrame + 59) > 0x64u )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9946LL);
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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9991LL);
    }
    if ( (*(_DWORD *)ValidNodeInFrame & 0x800000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9992LL);
    }
    if ( (*(_DWORD *)ValidNodeInFrame & 0x8000000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9993LL);
    }
    if ( *(int *)a4 < 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9994LL);
    }
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9995LL);
    }
    *(_DWORD *)a4 |= 0x80000u;
    v16 = *(_DWORD *)ValidNodeInFrame ^ (*(_DWORD *)ValidNodeInFrame ^ *(_DWORD *)a4) & 0xFFEFFFFF;
    *(_DWORD *)a4 = v16;
    v17 = *(_DWORD *)ValidNodeInFrame ^ (*(_DWORD *)ValidNodeInFrame ^ v16) & 0xFFDFFFFF;
    *(_DWORD *)a4 = v17;
    *(_DWORD *)a4 = *(_DWORD *)ValidNodeInFrame ^ (*(_DWORD *)ValidNodeInFrame ^ v17) & 0xFFBFFFFF;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 80), *((unsigned __int16 *)a4 + 86), v12);
  return *((_QWORD *)a4 + 2);
}
