/*
 * XREFs of sub_140128080 @ 0x140128080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140128080(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  *(_DWORD *)(Context[20] + 76LL) &= ~4u;
}
