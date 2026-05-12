/*
 * XREFs of sub_140127170 @ 0x140127170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140127170(PDEVICE_OBJECT DeviceObject, __int64 MinorFunction, __int64 PowerState, _QWORD *Context)
{
  *(_DWORD *)(Context[20] + 76LL) &= ~4u;
  PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context[20] + 8LL), MinorFunction, PowerState);
  *(_BYTE *)(*(_QWORD *)(Context[20] + 8LL) + 65LL) = 1;
}
