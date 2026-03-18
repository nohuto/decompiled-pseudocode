/*
 * XREFs of PipClearDevNodeFlags @ 0x14090E080
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x1407A50B4 (PiProcessResourceRequirementsChanged.c)
 *     IopReleaseResources @ 0x1407A5300 (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407A5E04 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseFilteredBootResources @ 0x1407A6484 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x1407B30F8 (PnpBuildCmResourceLists.c)
 *     PnpReallocateResources @ 0x1407B33A8 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x1407B3AD4 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x1407B4D28 (PipProcessRestartPhase1.c)
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 *     IopRemoveDevice @ 0x14090FCA8 (IopRemoveDevice.c)
 *     PnpInvalidateRelationsInList @ 0x14091164C (PnpInvalidateRelationsInList.c)
 *     PnpProcessRelation @ 0x140913D04 (PnpProcessRelation.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A8A8E0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpAllocateResources @ 0x140AA525C (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA534C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PiProcessReenumeration @ 0x140AC6B74 (PiProcessReenumeration.c)
 *     PnpRestartDeviceNode @ 0x140B218FC (PnpRestartDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x140B419C4 (PiProcessClearDeviceProblem.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
