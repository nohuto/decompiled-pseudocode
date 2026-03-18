/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x1407A4CEC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A8A1F0 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x1404D29C4 (PipRestoreDevNodeState.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140907730 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipSetDevNodeUserFlags @ 0x14090E790 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14090F028 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x14090FCA8 (IopRemoveDevice.c)
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
