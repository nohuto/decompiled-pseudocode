/*
 * XREFs of ?DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z @ 0x1401B7F78
 * Callers:
 *     MonitorAPIProcessTerminating @ 0x1401B7F40 (MonitorAPIProcessTerminating.c)
 * Callees:
 *     ?DestroyHandlesOwnedByProcess@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAXPEAXPEAVCMutex@2@@Z @ 0x1401B7FD0 (-DestroyHandlesOwnedByProcess@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAXPEAX.c)
 */

void __fastcall CMonitorAPI::DestroyPhysicalMonitorsOwnedByProcess(CMonitorAPI *this, void *a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v4, (CMonitorAPI *)((char *)this + 32));
  OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandlesOwnedByProcess((char *)this + 8, a2, this);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v4);
}
