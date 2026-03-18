/*
 * XREFs of HvlEnablePasid @ 0x1405BC860
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1403E7D98 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x140531314 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlEnablePasid(__int64 a1, int a2)
{
  __int16 v2; // r8
  _QWORD v4[2]; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+54h] [rbp-24h]

  v6 = 0;
  v4[0] = -1LL;
  v4[1] = a1;
  v5 = a2;
  while ( 1 )
  {
    v2 = HvcallFastExtended(65700LL, (unsigned __int64)v4, 0x18u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v2) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v2);
}
