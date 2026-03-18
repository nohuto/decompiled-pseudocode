/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1401FF270
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1400C489C (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1401887DC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1401974BC (ApiSetPointerPromotionGetCurrentPointerId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 CurrentPointerId; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  CPointerInfoNode *v8; // rbx
  CPointerInfoNode *v9; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9586);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 32) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 57) & 4) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId(v5, v4);
    if ( !CurrentPointerId )
      return 0LL;
  }
  v6 = *((_DWORD *)a2 + 12);
  v7 = 0;
  v8 = (CPointerInfoNode *)*((_QWORD *)a2 + 30);
  if ( !v6 )
    return 0LL;
  while ( 1 )
  {
    if ( (unsigned __int64)v8 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v6 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9624);
    if ( (unsigned int)CPointerInfoNode::IsValid(v8)
      && (*(_DWORD *)v8 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v9) || CurrentPointerId == *((_WORD *)v8 + 86)) )
    {
      break;
    }
    v6 = *((_DWORD *)a2 + 12);
    ++v7;
    v8 = (CPointerInfoNode *)((char *)v8 + 480);
    if ( v7 >= v6 )
      return 0LL;
  }
  return v8;
}
