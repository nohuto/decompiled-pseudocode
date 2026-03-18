/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x14006775C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x14006C744 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1401C1528 (ApiSetPointerPromotionGetCurrentPointerId.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 CurrentPointerId; // bp
  CPointerInfoNode *v4; // rbx
  unsigned int i; // esi
  __int64 v6; // rax
  CPointerInfoNode *v8; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9569LL);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 32) + 24LL) != 7
    && ((*((_DWORD *)a2 + 57) & 4) != 0 || (CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId()) != 0) )
  {
    v4 = (CPointerInfoNode *)*((_QWORD *)a2 + 30);
    for ( i = 0; ; ++i )
    {
      v6 = *((unsigned int *)a2 + 12);
      if ( i >= (unsigned int)v6 )
        break;
      if ( (unsigned __int64)v4 >= *((_QWORD *)a2 + 30) + 480 * v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9607LL);
      if ( (unsigned int)CPointerInfoNode::IsValid(v4)
        && (*(_DWORD *)v4 & 0x1000) == 0
        && ((unsigned int)CPointerInfoNode::IsPrimary(v8) || CurrentPointerId == *((_WORD *)v4 + 86)) )
      {
        return v4;
      }
      v4 = (CPointerInfoNode *)((char *)v4 + 480);
    }
  }
  return 0LL;
}
