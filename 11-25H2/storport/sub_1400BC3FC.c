/*
 * XREFs of sub_1400BC3FC @ 0x1400BC3FC
 * Callers:
 *     sub_14001A23C @ 0x14001A23C (sub_14001A23C.c)
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 *     sub_1400CD01C @ 0x1400CD01C (sub_1400CD01C.c)
 *     sub_1400FB018 @ 0x1400FB018 (sub_1400FB018.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1400BC3FC(__int64 a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3[1] = 0;
  v5 = 16LL;
  v3[0] = 59 - (a2 != 0);
  return ZwPowerInformation(SystemPowerStateLogging|0x40, v3, 0x18u, 0LL, 0);
}
