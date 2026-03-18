/*
 * XREFs of ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x14006D144
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140216FE8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C6AC (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x140062F74 (-FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14006D2C4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::FreePointerInfoNode(
        PERESOURCE *a1,
        __int64 a2,
        int a3,
        unsigned int a4)
{
  __int64 v5; // rbp
  const struct CPointerInputFrame *result; // rax
  const struct CPointerInputFrame *v8; // rdi
  __int64 v9; // rbx

  v5 = a4;
  if ( !tagDomLock::IsLockedShared(a1 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9097LL);
  result = (const struct CPointerInputFrame *)CTouchProcessor::FindAndReferenceFrameById((__int64)a1, a3, 4);
  v8 = result;
  if ( result )
  {
    if ( (unsigned int)v5 >= *((_DWORD *)result + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9107LL);
    v9 = *((_QWORD *)v8 + 30) + 480 * v5;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9109LL);
    if ( (*(_DWORD *)v9 & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9111LL);
    if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v9) > 1 )
      CTouchProcessor::FreeHistory(a1, v8, (const struct CPointerInfoNode *)v9);
    CInputDest::~CInputDest((CInputDest *)(v9 + 24));
    CInputDest::~CInputDest((CInputDest *)(v9 + 352));
    CTouchProcessor::FreePointerInfoNodeInt(a1, v8, (unsigned int)v5);
    return (const struct CPointerInputFrame *)CTouchProcessor::UnreferenceFrameInt(a1, v8);
  }
  return result;
}
