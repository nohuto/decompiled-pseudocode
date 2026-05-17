/*
 * XREFs of RtlSetSystemBootStatus @ 0x180114E10
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18015FB10 (NtPowerInformation.c)
 */

__int64 __fastcall RtlSetSystemBootStatus(int a1, __int64 a2, int a3, __int64 a4)
{
  _DWORD v5[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  int v7; // [rsp+40h] [rbp-20h]
  _QWORD v8[3]; // [rsp+48h] [rbp-18h] BYREF

  v5[0] = a1;
  v6 = a2;
  v7 = a3;
  v5[1] = 0;
  v8[0] = 32LL;
  v8[1] = 1LL;
  v8[2] = v5;
  return NtPowerInformation(87LL, v8, 24LL, a4, a4 != 0 ? 4 : 0);
}
