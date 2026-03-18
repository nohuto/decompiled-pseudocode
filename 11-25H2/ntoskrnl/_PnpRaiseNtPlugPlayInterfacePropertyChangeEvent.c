/*
 * XREFs of _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x14096A758
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 * Callees:
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x14096AF58 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayInterfacePropertyChangeEvent(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 496LL);
  if ( result )
    return PnpInterfaceRaisePropertyChangeEventWorker(
             PiPnpRtlCtx,
             a2,
             0,
             0,
             (__int64)&DEVPKEY_DeviceInterface_Enabled,
             *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 496LL));
  return result;
}
