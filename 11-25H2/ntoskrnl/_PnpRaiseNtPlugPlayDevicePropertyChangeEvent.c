/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404E6DA0 (PipRestoreDevNodeState.c)
 *     PipNotifyDependenciesChanged @ 0x1406EE4E4 (PipNotifyDependenciesChanged.c)
 *     IopDecDisableableDepends @ 0x140727750 (IopDecDisableableDepends.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PipClearDevNodeUserFlags @ 0x14082F904 (PipClearDevNodeUserFlags.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408313BC (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 *     IopIncDisableableDepends @ 0x140A85634 (IopIncDisableableDepends.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140A97D9C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 * Callees:
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408369DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmRaisePropertyChangeEvent @ 0x14094F9F8 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned int v5; // r9d
  DEVPROPKEY **v6; // rcx
  __int64 v7; // r11
  DEVPROPKEY *v8; // rbx
  DEVPROPKEY **v9; // r8
  __int64 v10; // rdx

  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    _mm_lfence();
    v5 = 0;
    v6 = &CmDeviceRegPropMap;
    v7 = qword_14000BFC0[a3];
    do
    {
      v8 = *v6;
      v9 = v6;
      if ( *(_DWORD *)(v7 + 16) == (*v6)->pid )
      {
        v10 = *(_QWORD *)v7 - *(_QWORD *)&v8->fmtid.Data1;
        if ( *(_QWORD *)v7 == *(_QWORD *)&v8->fmtid.Data1 )
          v10 = *(_QWORD *)(v7 + 8) - *(_QWORD *)v8->fmtid.Data4;
        if ( !v10 )
          break;
      }
      v9 = 0LL;
      ++v5;
      v6 += 3;
    }
    while ( v5 < 0x21 );
    if ( v9 && *((_DWORD *)v9 + 3) )
    {
      return CmRaisePropertyChangeEvent(PiPnpRtlCtx, a2, 1, 0, *((_DWORD *)v9 + 3));
    }
    else
    {
      result = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 496LL);
      if ( result )
        return PnpDeviceRaisePropertyChangeEventWorker(PiPnpRtlCtx, a2, 0, 0, v7, result);
    }
  }
  return result;
}
