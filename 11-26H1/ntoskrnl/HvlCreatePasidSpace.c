/*
 * XREFs of HvlCreatePasidSpace @ 0x1405BE5C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
