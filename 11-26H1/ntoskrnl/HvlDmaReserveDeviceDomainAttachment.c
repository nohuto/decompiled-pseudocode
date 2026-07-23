/*
 * XREFs of HvlDmaReserveDeviceDomainAttachment @ 0x1405BEFB0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaReserveDeviceDomainAttachment(__int64 a1, int *a2)
{
  int v2; // eax
  __int16 v3; // ax
  __int16 v4; // r8
  _QWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  v2 = *a2;
  v6[1] = 0LL;
  v6[0] = -1LL;
  v8 = v2;
  v7 = *((_BYTE *)a2 + 4) != 0;
  v9 = a1;
  while ( 1 )
  {
    v3 = HvcallFastExtended(65805LL, (unsigned __int64)v6, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
