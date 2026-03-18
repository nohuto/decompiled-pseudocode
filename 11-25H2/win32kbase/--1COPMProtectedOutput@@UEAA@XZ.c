/*
 * XREFs of ??1COPMProtectedOutput@@UEAA@XZ @ 0x140145528
 * Callers:
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1401454F0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x140083200 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x140145560 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 */

void __fastcall COPMProtectedOutput::~COPMProtectedOutput(COPMProtectedOutput *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v1 )
    COPMProtectedOutput::Destroy(this);
  OPM::CMonitorPDO::~CMonitorPDO(this);
}
