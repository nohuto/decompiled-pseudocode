/*
 * XREFs of ?StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14014E2B8
 * Callers:
 *     ?NotifyCommitMustBeLastForFrame@CApplicationChannel@DirectComposition@@QEAAX_N@Z @ 0x14014E288 (-NotifyCommitMustBeLastForFrame@CApplicationChannel@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?StartNextFrameNow@CConnection@DirectComposition@@QEAAXXZ @ 0x14014E304 (-StartNextFrameNow@CConnection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::StartNextFrameNow(DirectComposition::CApplicationChannel *this)
{
  DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  DirectComposition::CConnection::StartNextFrameNow(*((DirectComposition::CConnection **)this + 5));
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  KeLeaveCriticalRegion();
}
