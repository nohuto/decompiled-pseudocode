/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x180110748
 * Callers:
 *     RtlGetSystemBootStatusEx @ 0x180123B80 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x180124860 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     NtPowerInformation @ 0x18015FB10 (NtPowerInformation.c)
 */

__int64 __fastcall RtlpSystemBootStatusRequest(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  _DWORD v6[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  if ( a4 )
  {
    v4 = 4LL * a3;
    if ( v4 > 0xFFFFFFFF )
      return 3221225621LL;
  }
  else
  {
    LODWORD(v4) = 0;
  }
  v6[2] = a3;
  v6[0] = a1;
  v7 = a2;
  v6[1] = 0;
  v6[3] = 0;
  return NtPowerInformation(87LL, v6, 24LL, a4, v4);
}
