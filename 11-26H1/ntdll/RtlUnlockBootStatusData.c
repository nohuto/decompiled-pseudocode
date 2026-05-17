/*
 * XREFs of RtlUnlockBootStatusData @ 0x180141C20
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18015FB10 (NtPowerInformation.c)
 */

__int64 __fastcall RtlUnlockBootStatusData(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[5]; // [rsp+30h] [rbp-28h] BYREF

  result = 0LL;
  if ( !a1 )
  {
    v2[0] = 38LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    return NtPowerInformation(87LL, v2, 24LL, 0LL, 0);
  }
  return result;
}
