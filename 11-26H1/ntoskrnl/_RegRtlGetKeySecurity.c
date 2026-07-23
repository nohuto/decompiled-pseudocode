/*
 * XREFs of _RegRtlGetKeySecurity @ 0x1408A3D08
 * Callers:
 *     _PnpCtxRegGetKeySecurity @ 0x14089C388 (_PnpCtxRegGetKeySecurity.c)
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x14072ACE0 (ZwQuerySecurityObject.c)
 */

NTSTATUS __fastcall RegRtlGetKeySecurity(void *a1, SECURITY_INFORMATION a2, void *a3, ULONG *LengthNeeded)
{
  return ZwQuerySecurityObject(a1, a2, a3, *LengthNeeded, LengthNeeded);
}
