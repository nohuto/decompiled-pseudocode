/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x140221B14
 * Callers:
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1402218B4 (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x140221A70 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x14028A858 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x14028BA90 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x14028E35C (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x14028F43C (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z @ 0x140345CA4 (-DdcciSaveCurrentSettings@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     ?DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z @ 0x140345E08 (-DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(
        __int64 a1,
        void *a2,
        _QWORD *a3)
{
  __int64 v5; // rdi

  if ( OPM::INVALID_MONITOR_HANDLE == a2 )
    return *(unsigned int *)(a1 + 16);
  if ( (unsigned __int64)a2 > 0xFFFFFFFF )
    return *(unsigned int *)(a1 + 16);
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 12) )
    return *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)a2);
  if ( !v5 )
    return *(unsigned int *)(a1 + 16);
  if ( !OPM::CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(*(OPM::CMonitorPDO **)(*(_QWORD *)a1
                                                                                    + 8LL * (unsigned int)a2)) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v5;
  return 0LL;
}
