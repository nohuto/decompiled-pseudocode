/*
 * XREFs of ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1400837E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ @ 0x140083690 (-IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall COPMProtectedOutput::IsDestroyed(COPMProtectedOutput *this)
{
  OPM::CMutex *v1; // rbx
  unsigned __int8 IsDestroyed; // di

  v1 = (OPM::CMutex *)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v1);
  if ( *((_BYTE *)this + 80) )
    IsDestroyed = OPM::CMonitorPDO::IsDestroyed(this);
  else
    IsDestroyed = 1;
  OPM::CMutex::Unlock(v1);
  return IsDestroyed;
}
