/*
 * XREFs of Xp10Compute2Crc64 @ 0x180151E6C
 * Callers:
 *     Xp10ReadAndValidateCrc @ 0x1800FA3D8 (Xp10ReadAndValidateCrc.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x1800FA0B0 (Xp10ScatteredReadBytes.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall Xp10Compute2Crc64(__int64 *a1)
{
  __int64 *v2; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  bool v6; // zf
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  unsigned int Bytes; // eax
  __int64 v12; // rdx
  char *v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  char v16; // al
  unsigned __int64 v17; // rcx
  char v19[256]; // [rsp+20h] [rbp-128h] BYREF

  v2 = (__int64 *)a1[4];
  v3 = -1LL;
  v4 = 0LL;
  v5 = *a1 - v2[2 * a1[3]];
  v6 = a1[2] + v5 == 0;
  v7 = a1[2] + v5;
  a1[3] = 0LL;
  v8 = *v2;
  *a1 = *v2;
  v9 = v2[1];
  a1[2] = 0LL;
  a1[1] = v8 + v9;
  if ( !v6 )
  {
    do
    {
      v10 = v7 - v4;
      if ( v7 - v4 > 0x100 )
        v10 = 256;
      Bytes = Xp10ScatteredReadBytes((__int64)a1, v19, v10);
      v12 = Bytes;
      if ( Bytes )
      {
        v13 = v19;
        v14 = Bytes;
        do
        {
          v15 = 8LL;
          v3 ^= (unsigned __int8)*v13;
          do
          {
            v16 = v3;
            v17 = v3 >> 1;
            v3 = (v3 >> 1) ^ 0x9A6C9329AC4BC9B5uLL;
            if ( (v16 & 1) == 0 )
              v3 = v17;
            --v15;
          }
          while ( v15 );
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      v4 += v12;
    }
    while ( v4 < v7 );
  }
  return ~v3;
}
