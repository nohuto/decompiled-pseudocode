/*
 * XREFs of PipDeviceRemovalCheckDeviceNodeState @ 0x14096F670
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x14096F560 (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404CC23C (PipRestoreDevNodeState.c)
 */

char __fastcall PipDeviceRemovalCheckDeviceNodeState(__int64 a1, __int64 a2, char a3)
{
  char v4; // bl

  v4 = 1;
  if ( *(_DWORD *)(a1 + 300) == 784 )
    return 0;
  if ( *(_DWORD *)(a1 + 300) == 785 )
  {
    v4 = 0;
    if ( a3 )
    {
      PipRestoreDevNodeState(a1);
      PipSetDevNodeState(a1, 784);
    }
  }
  return v4;
}
