/*
 * XREFs of _RegRtlGetKeySecurity @ 0x14089D908
 * Callers:
 *     _PnpCtxRegGetKeySecurity @ 0x140895F88 (_PnpCtxRegGetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x14089D400 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x140726110 (ZwQuerySecurityObject.c)
 */

NTSTATUS __fastcall RegRtlGetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3, ULONG *LengthNeeded)
{
  return ZwQuerySecurityObject(a1, a2, a3, *LengthNeeded, LengthNeeded);
}
