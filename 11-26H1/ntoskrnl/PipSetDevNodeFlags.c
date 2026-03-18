/*
 * XREFs of PipSetDevNodeFlags @ 0x14090DD60
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1407A50B4 (PiProcessResourceRequirementsChanged.c)
 *     IopAllocateBootResourcesInternal @ 0x1407A5F8C (IopAllocateBootResourcesInternal.c)
 *     PnpBuildCmResourceLists @ 0x1407B30F8 (PnpBuildCmResourceLists.c)
 *     PnpReallocateResources @ 0x1407B33A8 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1407B3D7C (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1407B3F0C (PnpQueryStopDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x14090B6F8 (PnpProcessAssignResources.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14090C7B0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14090DC90 (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x14090F2E8 (PnpQueryID.c)
 *     PiQueryResourceRequirements @ 0x140910EEC (PiQueryResourceRequirements.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140916458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x140A8AE94 (IopReleaseDeviceResources.c)
 *     IopFindLegacyDeviceNode @ 0x140A8B778 (IopFindLegacyDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PnpAllocateResources @ 0x140AA525C (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA5534 (PiQueryAndAllocateBootResources.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PnpQueryDeviceID @ 0x140AA88B8 (PnpQueryDeviceID.c)
 *     PiProcessSetDeviceProblem @ 0x140B314EC (PiProcessSetDeviceProblem.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140CC3950 (PnpMarkHalDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x140CC53B8 (IopAllocateLegacyBootResources.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  _InterlockedOr((volatile signed __int32 *)(a1 + 396), a2);
  result = *(_DWORD *)(a1 + 396) ^ v2;
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
