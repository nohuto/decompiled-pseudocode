/*
 * XREFs of ??1CMonitorAPI@@QEAA@XZ @ 0x140323440
 * Callers:
 *     DDCCICleanUpWrap @ 0x140285460 (DDCCICleanUpWrap.c)
 * Callees:
 *     ??1?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ @ 0x1403233D4 (--1-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ.c)
 */

void __fastcall CMonitorAPI::~CMonitorAPI(CMonitorAPI *this)
{
  void *v2; // rdx

  OPM::CMutex::~CMutex((CMonitorAPI *)((char *)this + 32));
  OPM::CList<CPhysicalMonitorHandle>::~CList<CPhysicalMonitorHandle>((__int64)this + 8, v2);
  OPM::CMutex::~CMutex(this);
}
