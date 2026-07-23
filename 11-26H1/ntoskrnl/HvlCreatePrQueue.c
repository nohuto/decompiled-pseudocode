/*
 * XREFs of HvlCreatePrQueue @ 0x1405BE680
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlCreatePrQueue(int a1, int a2, unsigned __int64 a3, int a4, int a5)
{
  int v5; // ecx
  __int16 v6; // r8
  __int64 v8; // [rsp+40h] [rbp-48h] BYREF
  int v9; // [rsp+48h] [rbp-40h]
  int v10; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  __int64 v14; // [rsp+60h] [rbp-28h]

  v14 = 0LL;
  v8 = -1LL;
  v9 = a1;
  v10 = a2;
  v11 = a3 >> 12;
  v12 = a4;
  if ( HvlpVirtualProcessorsIdentityMapped )
    v5 = a5;
  else
    v5 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * a5 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * a5] << 6);
  v13 = v5;
  while ( 1 )
  {
    v6 = HvcallFastExtended(65703LL, (unsigned __int64)&v8, 0x28u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v6) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v6) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v6);
}
