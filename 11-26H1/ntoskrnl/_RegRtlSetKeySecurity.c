/*
 * XREFs of _RegRtlSetKeySecurity @ 0x1408A3F2C
 * Callers:
 *     _PnpCtxRegSetKeySecurity @ 0x14089C3D8 (_PnpCtxRegSetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14072B700 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall RegRtlSetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3)
{
  return ZwSetSecurityObject(a1, a2, a3);
}
