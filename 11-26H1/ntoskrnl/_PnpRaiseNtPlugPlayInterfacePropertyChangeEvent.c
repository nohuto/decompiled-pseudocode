/*
 * XREFs of _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x1409AB44C
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 * Callees:
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1409B1260 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
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
