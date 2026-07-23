/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404CC23C (PipRestoreDevNodeState.c)
 *     PipNotifyDependenciesChanged @ 0x14077B7B0 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     IopIncDisableableDepends @ 0x140B2F1C0 (IopIncDisableableDepends.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140B45AE4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopDecDisableableDepends @ 0x140B4C090 (IopDecDisableableDepends.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x1409ADAB8 (_CmRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x1409AF6BC (_CmMapPropertyKeyToRegProp.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C (_PnpDeviceRaisePropertyChangeEventWorker.c)
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
    v6 = qword_14000F6B0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
    {
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
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
