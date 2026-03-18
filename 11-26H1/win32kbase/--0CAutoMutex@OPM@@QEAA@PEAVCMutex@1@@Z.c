/*
 * XREFs of ??0CAutoMutex@OPM@@QEAA@PEAVCMutex@1@@Z @ 0x140009C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

OPM::CAutoMutex *__fastcall OPM::CAutoMutex::CAutoMutex(OPM::CAutoMutex *this, struct OPM::CMutex *a2)
{
  *(_QWORD *)this = a2;
  OPM::CMutex::Lock(a2);
  return this;
}
