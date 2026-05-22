/*
 * XREFs of ??1DelegatedInkCanvasProcessor@@UEAA@XZ @ 0x1801A2D20
 * Callers:
 *     ??_EDelegatedInkCanvasProcessor@@UEAAPEAXI@Z @ 0x1801A2F00 (--_EDelegatedInkCanvasProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x1801A2A0C (--1-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueueProducer@@.c)
 */

void __fastcall DelegatedInkCanvasProcessor::~DelegatedInkCanvasProcessor(void **this)
{
  std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
