/*
 * XREFs of ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x18007AF90
 * Callers:
 *     ?Channel_AsyncFlush@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x18007AD10 (-Channel_AsyncFlush@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18007AFB8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

void __fastcall CResponseItem::ReleaseResponseRef(CResponseItem *this)
{
  if ( (*((_DWORD *)this + 4))-- == 1 )
    CResponseItem::QueueResponse(this);
  CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)this);
}
