/*
 * XREFs of sub_1400BC33C @ 0x1400BC33C
 * Callers:
 *     sub_14007A2E0 @ 0x14007A2E0 (sub_14007A2E0.c)
 *     sub_14007A7B0 @ 0x14007A7B0 (sub_14007A7B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1400BC33C(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS result; // eax
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 8);
  InputBuffer[1] = 0;
  v7 = 0;
  InputBuffer[0] = 58;
  v5 = v1;
  v6 = 64;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x18u, 0LL, 0);
  if ( result >= 0 )
    *(_BYTE *)(a1 + 507) |= 4u;
  return result;
}
