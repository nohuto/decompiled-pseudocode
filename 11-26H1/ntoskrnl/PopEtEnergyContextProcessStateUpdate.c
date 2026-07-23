/*
 * XREFs of PopEtEnergyContextProcessStateUpdate @ 0x1409CDAE4
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1409CBF10 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x1409CC484 (PopEtEnergyContextSetState.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopEtEnumEnergyTrackers @ 0x1409CC648 (PopEtEnumEnergyTrackers.c)
 *     PsQueryProcessEnergyValues @ 0x1409CE2C0 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PopEtEnergyContextProcessStateUpdate(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD v4[2]; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v5; // [rsp+30h] [rbp-1E8h]
  _BYTE *v6; // [rsp+38h] [rbp-1E0h]
  _BYTE v7[448]; // [rsp+40h] [rbp-1D8h] BYREF

  HIDWORD(v4[0]) = 0;
  v5 = 0LL;
  memset_0(v7, 0, 0x1B8uLL);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 1640) + 476LL);
  PsQueryProcessEnergyValues(a1, v7);
  v4[0] = 3LL;
  v6 = v7;
  v5 = 0LL;
  v4[1] = a1;
  return PopEtEnumEnergyTrackers(v2, (__int64)v4);
}
