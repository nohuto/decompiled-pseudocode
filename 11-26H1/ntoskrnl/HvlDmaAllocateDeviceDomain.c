/*
 * XREFs of HvlDmaAllocateDeviceDomain @ 0x1405BE920
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaAllocateDeviceDomain(int *a1)
{
  int v2; // eax
  char v3; // cl
  __int16 v4; // ax
  __int16 v5; // r8
  _QWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  v7[1] = 0LL;
  v10 = 0LL;
  v7[0] = -1LL;
  v8 = *((_BYTE *)a1 + 4) != 0;
  v2 = *a1;
  v3 = 2 * *((_BYTE *)a1 + 8);
  v9 = v2;
  LODWORD(v10) = v3 & 2 ^ (v3 & 2 ^ *((_BYTE *)a1 + 9)) & 1;
  while ( 1 )
  {
    v4 = HvcallFastExtended(65713LL, (unsigned __int64)v7, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v4) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v5);
}
