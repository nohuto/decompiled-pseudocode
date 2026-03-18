/*
 * XREFs of _RegRtlSetKeySecurity @ 0x14089DB2C
 * Callers:
 *     _PnpCtxRegSetKeySecurity @ 0x140895FD8 (_PnpCtxRegSetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x14089D400 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x140726B30 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall RegRtlSetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3)
{
  return ZwSetSecurityObject(a1, a2, a3);
}
