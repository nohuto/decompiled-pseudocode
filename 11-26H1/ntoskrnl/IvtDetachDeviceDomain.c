/*
 * XREFs of IvtDetachDeviceDomain @ 0x1405A87F0
 * Callers:
 *     <none>
 * Callees:
 *     IvtAttachDeviceDomainInternal @ 0x1405A8178 (IvtAttachDeviceDomainInternal.c)
 */

__int64 __fastcall IvtDetachDeviceDomain(__int64 a1, __int64 a2)
{
  return IvtAttachDeviceDomainInternal(a1, a2, 0LL);
}
