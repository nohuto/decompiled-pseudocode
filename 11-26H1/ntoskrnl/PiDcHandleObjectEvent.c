/*
 * XREFs of PiDcHandleObjectEvent @ 0x140969048
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x140968948 (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     PiDcHandleDeviceEvent @ 0x140AD3C20 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleContainerEvent @ 0x140B05464 (PiDcHandleContainerEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140B06A60 (PiDcHandleInterfaceEvent.c)
 */

__int64 __fastcall PiDcHandleObjectEvent(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v2 + 28) == 1 )
    {
      return (unsigned int)PiDcHandleDeviceEvent(a1, v2, (unsigned int)(*(_DWORD *)(v2 + 28) - 1), 0LL);
    }
    else
    {
      v3 = (unsigned int)(*(_DWORD *)(v2 + 28) - 3);
      if ( *(_DWORD *)(v2 + 28) == 3 )
      {
        return (unsigned int)PiDcHandleInterfaceEvent(a1, v2, v3, 0LL);
      }
      else
      {
        if ( *(_DWORD *)(v2 + 28) != 5 )
          return v1;
        return (unsigned int)PiDcHandleContainerEvent(a1, v2, v3, 0LL);
      }
    }
  }
  return v1;
}
