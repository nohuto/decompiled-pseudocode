/*
 * XREFs of ??1ScopedWrite@ReaderWriterLock@@QEAA@XZ @ 0x1802C7D58
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$3 @ 0x1806D4A41 (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedWrite::~ScopedWrite(PSRWLOCK *this)
{
  ReleaseSRWLockExclusive(*this);
}
