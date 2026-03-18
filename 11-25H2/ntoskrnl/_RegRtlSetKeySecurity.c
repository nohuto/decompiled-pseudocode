/*
 * XREFs of _RegRtlSetKeySecurity @ 0x1408114BC
 * Callers:
 *     _PnpCtxRegSetKeySecurity @ 0x140807A7C (_PnpCtxRegSetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x140810CA0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14069E860 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall RegRtlSetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3)
{
  return ZwSetSecurityObject(a1, a2, a3);
}
