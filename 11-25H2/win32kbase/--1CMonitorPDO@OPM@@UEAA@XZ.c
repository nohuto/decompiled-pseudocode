/*
 * XREFs of ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x140145560
 * Callers:
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x140145528 (--1COPMProtectedOutput@@UEAA@XZ.c)
 *     ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1401C7450 (--_ECMonitorPDO@OPM@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x140082D88 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x140083580 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 */

void __fastcall OPM::CMonitorPDO::~CMonitorPDO(OPM::CMonitorPDO *this)
{
  bool v1; // zf
  OPM::CMutex *v3; // rcx

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  if ( !v1 )
    OPM::CMonitorPDO::Destroy(this);
  v3 = (OPM::CMutex *)*((_QWORD *)this + 1);
  if ( v3 )
    OPM::CMutex::`scalar deleting destructor'(v3);
  *((_QWORD *)this + 1) = 0LL;
}
