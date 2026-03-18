/*
 * XREFs of ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x14004F970
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x14004F25C (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x14004F438 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x14004F53C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x14004F870 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1400537C4 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     NtUserGetPointerType @ 0x140087BC0 (NtUserGetPointerType.c)
 * Callees:
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

struct _LIST_ENTRY *__fastcall CTouchProcessor::FindThreadPointerData(
        CTouchProcessor *this,
        struct _LIST_ENTRY *a2,
        __int16 a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 Blink; // rdx
  struct CPointerMsgData *NonConstMsgData; // rax

  Flink = a2->Flink;
  if ( a2->Flink == a2 )
    return 0LL;
  while ( 1 )
  {
    Blink = (__int64)Flink[1].Blink;
    if ( Blink )
    {
      NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, Blink);
      if ( !*((_BYTE *)NonConstMsgData + 56) )
        KeBugCheckEx(0x164u, 0x25uLL, (ULONG_PTR)NonConstMsgData, 4uLL, 4uLL);
    }
    if ( LOWORD(Flink[1].Flink) == a3 )
      break;
    Flink = Flink->Flink;
    if ( Flink == a2 )
      return 0LL;
  }
  return Flink;
}
