/*
 * XREFs of sub_1400BC3A4 @ 0x1400BC3A4
 * Callers:
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 *     sub_14007842C @ 0x14007842C (sub_14007842C.c)
 *     sub_14012F368 @ 0x14012F368 (sub_14012F368.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1400BC3A4(__int64 a1, char a2)
{
  int v2; // eax
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v4[1] = a1;
  v6 = 0;
  v4[0] = 58LL;
  v2 = 2;
  if ( a2 )
    v2 = 6;
  v5 = v2;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, v4, 0x18u, 0LL, 0);
}
