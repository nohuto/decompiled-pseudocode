/*
 * XREFs of ??1CAutoMutex@OPM@@QEAA@XZ @ 0x140085280
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 */

void __fastcall OPM::CAutoMutex::~CAutoMutex(OPM::CMutex **this)
{
  OPM::CMutex::Unlock(*this);
  *this = 0LL;
}
