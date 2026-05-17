/*
 * XREFs of RtlpRecordBootStatusData @ 0x1801219D0
 * Callers:
 *     RtlpGetSetBootStatusData @ 0x18011617C (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x18015FB10 (NtPowerInformation.c)
 */

__int64 __fastcall RtlpRecordBootStatusData(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h]

  v6 = 1LL;
  v5[0] = a2;
  v5[1] = a4;
  v5[2] = a3;
  if ( a1 )
    HIDWORD(v6) = 1;
  return NtPowerInformation(94LL, v5, 32LL, 0LL, 0);
}
