/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x180141BE0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18015FB10 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  _QWORD v1[5]; // [rsp+30h] [rbp-28h] BYREF

  v1[0] = 35LL;
  v1[1] = 0LL;
  v1[2] = 0LL;
  return NtPowerInformation(87LL, v1, 24LL, 0LL, 0);
}
