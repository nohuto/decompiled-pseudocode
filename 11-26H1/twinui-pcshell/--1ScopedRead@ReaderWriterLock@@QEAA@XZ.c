/*
 * XREFs of ??1ScopedRead@ReaderWriterLock@@QEAA@XZ @ 0x180218820
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$4 @ 0x1806D4A53 (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$4.c)
 *     _IsGameManager::CheckKGLForIsGameFromAppId_::_1_::dtor$0 @ 0x1806DB52C (_IsGameManager--CheckKGLForIsGameFromAppId_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedRead::~ScopedRead(PSRWLOCK *this)
{
  ReleaseSRWLockShared(*this);
}
