/*
 * XREFs of HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x14002E7F0
 * Callers:
 *     HUBDSM_ComputingLPMTimeoutValuesInUnconfigured @ 0x140021410 (HUBDSM_ComputingLPMTimeoutValuesInUnconfigured.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x140029944 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(__int64 a1)
{
  bool v1; // r9
  unsigned __int8 v2; // dl
  __int64 result; // rax

  v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x400) != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x800) != 0 && *(_DWORD *)(a1 + 2732) == 2 )
    v1 = 0;
  v2 = *(_BYTE *)(a1 + 2228);
  if ( (v2 & 8) == 0 || (*(_DWORD *)(a1 + 1652) & 0x80u) != 0 || (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x8000) != 0 || v1 )
    return 4061LL;
  result = 4089LL;
  *(_BYTE *)(a1 + 2221) = ~(v2 >> 5) | 0xFE;
  return result;
}
