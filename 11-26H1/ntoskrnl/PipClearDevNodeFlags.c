/*
 * XREFs of PipClearDevNodeFlags @ 0x1409B01B0
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x1407A7BF4 (PiProcessResourceRequirementsChanged.c)
 *     IopReleaseResources @ 0x1407A7E40 (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407A89B4 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseFilteredBootResources @ 0x1407A9034 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x1407B6158 (PnpBuildCmResourceLists.c)
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x1407B6B34 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x1407B7D88 (PipProcessRestartPhase1.c)
 *     PiProcessClearDeviceProblem @ 0x14096EEE0 (PiProcessClearDeviceProblem.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1409AFFD8 (PipEnumerateDevice.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PnpInvalidateRelationsInList @ 0x1409B372C (PnpInvalidateRelationsInList.c)
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA0544 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiProcessReenumeration @ 0x140AC8764 (PiProcessReenumeration.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 396), ~a2);
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
