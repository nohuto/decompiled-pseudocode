/*
 * XREFs of _RegRtlGetKeySecurity @ 0x1408111D4
 * Callers:
 *     _PnpCtxRegGetKeySecurity @ 0x140807A2C (_PnpCtxRegGetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x140810CA0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x14069DE40 (ZwQuerySecurityObject.c)
 */

NTSTATUS __fastcall RegRtlGetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3, ULONG *LengthNeeded)
{
  return ZwQuerySecurityObject(a1, a2, a3, *LengthNeeded, LengthNeeded);
}
