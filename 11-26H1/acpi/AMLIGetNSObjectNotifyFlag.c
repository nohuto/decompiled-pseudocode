/*
 * XREFs of AMLIGetNSObjectNotifyFlag @ 0x14004BB60
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1400D14C8 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIGetNSObjectNotifyFlag(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)a1 + 64LL) & 0x10) != 0;
}
