/*
 * XREFs of PipClearDevNodeUserFlags @ 0x1409B1158
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1407A782C (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x1409AD81C (PnpProcessAssignResources.c)
 *     PiProcessQueryDeviceState @ 0x1409B0470 (PiProcessQueryDeviceState.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE19D4 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 *     PnpTrackQueryRemoveDevices @ 0x140B58E48 (PnpTrackQueryRemoveDevices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeUserFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 400), ~a2);
  result = *(_DWORD *)(a1 + 400) ^ v2;
  if ( ((*(_WORD *)(a1 + 400) ^ (unsigned __int16)v2) & 0x347) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      result = *(_DWORD *)(a1 + 400) ^ v2;
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 0x40) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29);
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 30);
    }
  }
  return result;
}
