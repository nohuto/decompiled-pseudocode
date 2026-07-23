/*
 * XREFs of HvlDmaAttachDeviceDomain @ 0x1405BEA00
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaAttachDeviceDomain(__int64 a1, int *a2)
{
  __int16 v2; // ax
  __int16 v3; // r8
  _QWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+54h] [rbp-24h]
  __int64 v8; // [rsp+58h] [rbp-20h]

  v5[1] = 0LL;
  v5[0] = -1LL;
  v6 = *((_BYTE *)a2 + 4) != 0;
  v7 = *a2;
  v8 = a1 & 0x3FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v2 = HvcallFastExtended(65714LL, (unsigned __int64)v5, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v3) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v3);
}
