/*
 * XREFs of _lambda_af43cb63713906f6ee9ac5c062dc4f06_::_lambda_af43cb63713906f6ee9ac5c062dc4f06_ @ 0x1401A9EE0
 * Callers:
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z @ 0x1401CDE68 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z.c)
 *     ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234840 (-VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402348B0 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1403BCA7C (DxgkAttemptOpmVmBusRedirect.c)
 *     ?DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1403C2610 (-DxgkDDisplayEnumCoreLegacy@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_af43cb63713906f6ee9ac5c062dc4f06_::_lambda_af43cb63713906f6ee9ac5c062dc4f06_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
