/*
 * XREFs of ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x1801D9E90
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18012A580 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1802130E4 (-InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayManager::UpdateDXGIFactory(CDisplayManager *this)
{
  int updated; // eax
  unsigned int v2; // ebx

  updated = CDisplayManager::InternalUpdateDXGIFactory(this);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xEEu, 0LL);
    LOBYTE(word_1803DE700) = 1;
    ScheduleCompositionPass(0, 0x80000u);
  }
  return v2;
}
