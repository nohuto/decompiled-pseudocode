/*
 * XREFs of PnpDeleteLockedDeviceNode @ 0x140A8A1F0
 * Callers:
 *     PnpDeleteLockedDeviceNodes @ 0x140A89F58 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1404B2604 (PoFxIdleDevice.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404D23F4 (PnpRemoveLockedDeviceNode.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1407A4CEC (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpPoFxActivateDevice @ 0x14090E180 (PnpPoFxActivateDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A8A8E0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE3ECC (PnpQueryRemoveLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNode(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  int v10; // edx
  int v11; // edx

  v6 = 0;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          PnpPoFxActivateDevice(BugCheckParameter2, 8);
          PnpSurpriseRemoveLockedDeviceNode(BugCheckParameter2);
        }
      }
      else
      {
        PnpPoFxActivateDevice(BugCheckParameter2, 16);
        PnpRemoveLockedDeviceNode(BugCheckParameter2, a3, a4);
      }
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 4) == 0 )
        KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 4uLL, 0LL);
      PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      *(_DWORD *)(BugCheckParameter2 + 704) &= ~4u;
      PnpCancelRemoveLockedDeviceNode(BugCheckParameter2);
    }
  }
  else
  {
    PnpPoFxActivateDevice(BugCheckParameter2, 4);
    return (unsigned int)PnpQueryRemoveLockedDeviceNode(BugCheckParameter2, a5, a6);
  }
  return v6;
}
