/*
 * XREFs of ?SignalFinishedFlush@CChannelContext@@QEAAXXZ @ 0x180185C98
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002DC58 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CChannelContext::SignalFinishedFlush(CChannelContext *this)
{
  int v1; // eax
  int v2; // [rsp+30h] [rbp-28h] BYREF
  __int128 v3; // [rsp+34h] [rbp-24h]
  __int64 v4; // [rsp+44h] [rbp-14h]

  v2 = 1;
  v3 = 0LL;
  v4 = 0LL;
  v1 = CChannelContext::PostMessageToChannel(this, (const struct MIL_MESSAGE *)&v2);
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0x7Au, 0LL);
}
