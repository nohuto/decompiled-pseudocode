/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x1407A782C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1409B7010 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x1404CC23C (PipRestoreDevNodeState.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1409AD3F8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 */

__int64 __fastcall PnpCancelRemoveLockedDeviceNode(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 786 )
  {
    PipSetDevNodeUserFlags(a1, 512LL);
    IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32));
    PipClearDevNodeUserFlags(a1, 512LL);
    PipRestoreDevNodeState(a1);
    return PnpStartedDeviceNodeDependencyCheck(a1);
  }
  return result;
}
