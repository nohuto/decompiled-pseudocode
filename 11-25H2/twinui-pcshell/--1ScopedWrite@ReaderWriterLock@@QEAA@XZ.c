/*
 * XREFs of ??1ScopedWrite@ReaderWriterLock@@QEAA@XZ @ 0x1802D0CB4
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$3 @ 0x1806AE763 (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedWrite::~ScopedWrite(PSRWLOCK *this)
{
  ReleaseSRWLockExclusive(*this);
}
