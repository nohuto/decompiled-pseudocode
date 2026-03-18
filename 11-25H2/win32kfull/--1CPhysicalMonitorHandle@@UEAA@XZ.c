/*
 * XREFs of ??1CPhysicalMonitorHandle@@UEAA@XZ @ 0x14020B758
 * Callers:
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x14020B720 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x14020B850 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 */

void __fastcall CPhysicalMonitorHandle::~CPhysicalMonitorHandle(CPhysicalMonitorHandle *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &CPhysicalMonitorHandle::`vftable';
  if ( !v1 )
    CPhysicalMonitorHandle::Destroy(this);
  OPM::CMutex::~CMutex((CPhysicalMonitorHandle *)((char *)this + 72));
  OPM::CMonitorPDO::~CMonitorPDO(this);
}
