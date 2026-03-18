/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x140222990
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x140117750 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ??1BufferedMouseInputList@CMouseProcessor@@QEAA@XZ @ 0x140222958 (--1BufferedMouseInputList@CMouseProcessor@@QEAA@XZ.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1402229E0 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor::BufferedMouseInputList **this)
{
  *this = (CMouseProcessor::BufferedMouseInputList *)&CMouseProcessor::`vftable';
  CMouseProcessor::BufferedMouseInputList::~BufferedMouseInputList(this + 505);
  CMouseProcessor::MouseInterceptState::~MouseInterceptState((CMouseProcessor::MouseInterceptState *)(this + 489));
  CInputDest::~CInputDest((CInputDest *)(this + 473));
  *this = (CMouseProcessor::BufferedMouseInputList *)&CBaseProcessor::`vftable';
}
