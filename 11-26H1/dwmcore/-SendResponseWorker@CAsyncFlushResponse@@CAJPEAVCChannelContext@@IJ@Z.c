/*
 * XREFs of ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800797C4
 * Callers:
 *     ?Channel_AsyncFlush@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x18007AD10 (-Channel_AsyncFlush@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002DC58 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponseWorker(
        struct CChannelContext *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+34h] [rbp-24h]
  __int64 v8; // [rsp+44h] [rbp-14h]

  v6 = 13;
  v7 = 0LL;
  *(_QWORD *)((char *)&v7 + 4) = __PAIR64__(a3, a2);
  v8 = 0LL;
  v3 = CChannelContext::PostMessageToChannel(a1, (const struct MIL_MESSAGE *)&v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x74u, 0LL);
  return v4;
}
