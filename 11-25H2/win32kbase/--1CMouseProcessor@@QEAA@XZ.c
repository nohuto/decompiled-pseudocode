/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x14021F1E8
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1400CECC0 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??1BufferedMouseInputList@CMouseProcessor@@QEAA@XZ @ 0x14021F1B0 (--1BufferedMouseInputList@CMouseProcessor@@QEAA@XZ.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x14021F238 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor::BufferedMouseInputList **this)
{
  *this = (CMouseProcessor::BufferedMouseInputList *)&CMouseProcessor::`vftable';
  CMouseProcessor::BufferedMouseInputList::~BufferedMouseInputList(this + 504);
  CMouseProcessor::MouseInterceptState::~MouseInterceptState((CMouseProcessor::MouseInterceptState *)(this + 488));
  CInputDest::~CInputDest((CInputDest *)(this + 472));
  *this = (CMouseProcessor::BufferedMouseInputList *)&CBaseProcessor::`vftable';
}
