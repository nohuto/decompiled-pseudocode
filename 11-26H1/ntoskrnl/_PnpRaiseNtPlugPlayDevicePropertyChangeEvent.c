/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404D23F4 (PnpRemoveLockedDeviceNode.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404D29C4 (PipRestoreDevNodeState.c)
 *     PipNotifyDependenciesChanged @ 0x140778910 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x14090E080 (PipClearDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x14090E790 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14090F028 (PipClearDevNodeUserFlags.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14091129C (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     IopIncDisableableDepends @ 0x140B2D140 (IopIncDisableableDepends.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140B43BF4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopDecDisableableDepends @ 0x140B4A300 (IopDecDisableableDepends.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x14090B994 (_CmRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x14090D58C (_CmMapPropertyKeyToRegProp.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14090D72C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_14000F390[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
    {
      return CmRaisePropertyChangeEvent(v3, a2, 1u, 0, v7);
    }
    else
    {
      result = *(_QWORD *)(v3 + 496);
      if ( result )
        return PnpDeviceRaisePropertyChangeEventWorker(v3, a2, 0, 0, v6, result);
    }
  }
  return result;
}
