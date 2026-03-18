/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x14011E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x14011E624 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 */

void __fastcall OPMDestroyAllProtectedOutputs(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 3648LL);
  OPM::CMutex::Lock((void **)(v1 + 56));
  OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(v1 + 24, 0LL, v1 + 48);
  OPM::CMutex::Unlock((struct _KMUTANT **)(v1 + 56));
}
