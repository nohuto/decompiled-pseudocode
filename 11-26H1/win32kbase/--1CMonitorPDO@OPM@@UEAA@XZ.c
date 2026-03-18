/*
 * XREFs of ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1400097A0
 * Callers:
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x140009760 (--1COPMProtectedOutput@@UEAA@XZ.c)
 *     ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1401F3330 (--_ECMonitorPDO@OPM@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x140009B40 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x14000A3C4 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 */

void __fastcall OPM::CMonitorPDO::~CMonitorPDO(OPM::CMonitorPDO *this, unsigned int a2)
{
  bool v2; // zf
  OPM::CMutex *v4; // rcx

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  if ( !v2 )
    OPM::CMonitorPDO::Destroy(this);
  v4 = (OPM::CMutex *)*((_QWORD *)this + 1);
  if ( v4 )
    OPM::CMutex::`scalar deleting destructor'(v4, a2);
  *((_QWORD *)this + 1) = 0LL;
}
