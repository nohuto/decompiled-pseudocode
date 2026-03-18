/*
 * XREFs of HvlCreatePasidSpace @ 0x1405BBD50
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1403E7D98 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x140531314 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlCreatePasidSpace(int a1, int a2)
{
  __int16 v2; // r8
  __int64 v4; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-30h]
  int v6; // [rsp+4Ch] [rbp-2Ch]
  unsigned __int64 v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]

  v5 = a1;
  v8 = 0LL;
  v4 = -1LL;
  v6 = a2;
  v7 = __readmsr(0x277u);
  while ( 1 )
  {
    v2 = HvcallFastExtended(65693LL, (unsigned __int64)&v4, 0x20u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v2) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v2);
}
