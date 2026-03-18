/*
 * XREFs of ??1CMonitorAPI@@QEAA@XZ @ 0x140345670
 * Callers:
 *     DDCCICleanUpWrap @ 0x1402A24C0 (DDCCICleanUpWrap.c)
 * Callees:
 *     ??1?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ @ 0x140345600 (--1-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAA@XZ.c)
 */

void __fastcall CMonitorAPI::~CMonitorAPI(CMonitorAPI *this)
{
  void *v2; // rdx

  OPM::CMutex::~CMutex((CMonitorAPI *)((char *)this + 32));
  OPM::CList<CPhysicalMonitorHandle>::~CList<CPhysicalMonitorHandle>((__int64)this + 8, v2);
  OPM::CMutex::~CMutex(this);
}
