/*
 * XREFs of HvlRestoreTime @ 0x1405BDEC0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlRestoreTime(int a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  __int64 v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  if ( (HvlpFlags & 2) != 0 )
    return 0LL;
  v6 = a1;
  v8 = a2;
  v9 = a3;
  v7 = 0;
  v5 = -1LL;
  v4 = HvcallFastExtended(65795LL, (unsigned __int64)&v5, 0x20u, 0LL, 0);
  return HvlpHvToNtStatus(v4);
}
