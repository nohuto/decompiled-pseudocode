/*
 * XREFs of ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x140009C18
 * Callers:
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?DestroyHandlesOwnedByProcess@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAXPEAVCMutex@2@@Z @ 0x140009D38 (-DestroyHandlesOwnedByProcess@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAXPEA.c)
 */

void __fastcall COPM::DestroyProtectedOutputsOwnedByProcess(COPM *this, void *a2)
{
  OPM::CMutex::Lock((COPM *)((char *)this + 56));
  OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandlesOwnedByProcess(
    (char *)this + 24,
    a2,
    (char *)this + 48);
  OPM::CMutex::Unlock((COPM *)((char *)this + 56));
}
