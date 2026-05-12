/*
 * XREFs of GatewayWaitForForwardIo @ 0x1400AE9D0
 * Callers:
 *     <none>
 * Callees:
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400AEA18 (GatewayWaitForForwardIoWithTimeout.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall GatewayWaitForForwardIo(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  GatewayWaitForForwardIoWithTimeout(Context, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(Context[128] + 240LL))(
    *(_QWORD *)(Context[128] + 232LL),
    *(_QWORD *)(Context[128] + 216LL),
    *(_QWORD *)(Context[128] + 224LL));
}
