/*
 * XREFs of HvlSetPasidAddressSpace @ 0x1405C0B30
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetPasidAddressSpace(int a1, int a2, __int64 *a3)
{
  __int16 v3; // r8
  __int64 v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 v8; // [rsp+50h] [rbp-28h]

  v8 = *a3;
  v5 = -1LL;
  v7 = a1;
  v6 = a2;
  while ( 1 )
  {
    v3 = HvcallFastExtended(65695LL, (unsigned __int64)&v5, 0x18u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v3) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v3);
}
