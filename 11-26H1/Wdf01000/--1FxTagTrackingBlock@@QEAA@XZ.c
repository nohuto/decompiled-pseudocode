/*
 * XREFs of ??1FxTagTrackingBlock@@QEAA@XZ @ 0x1400975B0
 * Callers:
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x140097E04 (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 */

void __fastcall FxTagTrackingBlock::~FxTagTrackingBlock(FxTagTrackingBlock *this)
{
  FxTagTrackingStackFrames *StackFrames; // rcx

  StackFrames = this->StackFrames;
  if ( StackFrames )
  {
    FxStump::operator delete(StackFrames);
    this->StackFrames = 0LL;
  }
}
