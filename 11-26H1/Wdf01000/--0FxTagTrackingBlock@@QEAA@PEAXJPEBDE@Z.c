/*
 * XREFs of ??0FxTagTrackingBlock@@QEAA@PEAXJPEBDE@Z @ 0x14009755C
 * Callers:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxTagTrackingBlock::FxTagTrackingBlock(
        FxTagTrackingBlock *this,
        void *Tag,
        int Line,
        const char *File,
        unsigned __int8 Initial)
{
  this->Tag = Tag;
  this->Next = 0LL;
  this->StackFrames = 0LL;
  this->File = File;
  this->Line = Line;
  this->TimeLocked.QuadPart = MEMORY[0xFFFFF78000000320];
  if ( !Initial && !File && !Line )
    this->Line = 1;
}
