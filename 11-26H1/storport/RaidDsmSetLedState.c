/*
 * XREFs of RaidDsmSetLedState @ 0x140093D6C
 * Callers:
 *     NvmeAdapterSetLedStateByAcpiDsm @ 0x14008F3D4 (NvmeAdapterSetLedStateByAcpiDsm.c)
 *     RaidSetLedStateByAcpiDsm @ 0x140095E84 (RaidSetLedStateByAcpiDsm.c)
 * Callees:
 *     RaDsmLedStatusToNtStatus @ 0x140091CFC (RaDsmLedStatusToNtStatus.c)
 *     RaidEvaluateDsmLedState @ 0x140093F20 (RaidEvaluateDsmLedState.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidDsmSetLedState(struct _DEVICE_OBJECT *a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+38h] [rbp-30h]
  __int64 v4; // [rsp+48h] [rbp-20h]

  v2 = 24;
  v3 = 0LL;
  v4 = 0LL;
  result = RaidEvaluateDsmLedState(a1, (__int64)&v2);
  if ( (int)result >= 0 )
    return RaDsmLedStatusToNtStatus((unsigned __int16)v4);
  return result;
}
