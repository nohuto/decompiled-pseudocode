/*
 * XREFs of ?GetFrameIdFromPointerMsgId@CTouchProcessor@@QEAAK_K@Z @ 0x140161690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetFrameIdFromPointerMsgId(CTouchProcessor *this, __int64 a2)
{
  return *((unsigned int *)CTouchProcessor::GetNonConstMsgData(this, a2) + 7);
}
