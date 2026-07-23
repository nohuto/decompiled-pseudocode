/*
 * XREFs of RtlpSetClearExecutionRequiredRequest @ 0x18010E21C
 * Callers:
 *     RtlpDestroyExecutionRequiredRequest @ 0x18010E1F4 (RtlpDestroyExecutionRequiredRequest.c)
 * Callees:
 *     NtPowerInformation @ 0x18015FA10 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpSetClearExecutionRequiredRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  char v6; // [rsp+3Ch] [rbp-1Ch]
  __int16 v7; // [rsp+3Dh] [rbp-1Bh]
  char v8; // [rsp+3Fh] [rbp-19h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v7 = 0;
  v8 = 0;
  v4 = a1;
  v5 = 3;
  v6 = a3;
  v9 = a2;
  return NtPowerInformation(PowerRequestAction, &v4, 0x18u, 0LL, 0);
}
