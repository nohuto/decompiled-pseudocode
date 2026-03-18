/*
 * XREFs of ?OPMProcessTerminating@@YAXPEAX@Z @ 0x140084AA4
 * Callers:
 *     GdiProcessCallout @ 0x140083E20 (GdiProcessCallout.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?DestroyHandlesOwnedByProcess@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAXPEAVCMutex@2@@Z @ 0x1400852D8 (-DestroyHandlesOwnedByProcess@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAXPEA.c)
 */

void __fastcall OPMProcessTerminating(void *a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 3648LL);
  OPM::CMutex::Lock((OPM::CMutex *)(v2 + 56));
  OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandlesOwnedByProcess(v2 + 24, a1, v2 + 48);
  OPM::CMutex::Unlock((OPM::CMutex *)(v2 + 56));
}
