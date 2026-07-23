/*
 * XREFs of Xp10ReadAndValidateCrc @ 0x1800FA3D8
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x1800F8ED8 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ScatteredBitBufferReadBytes @ 0x180120ED8 (Xp10ScatteredBitBufferReadBytes.c)
 *     Xp10Compute2Crc32 @ 0x180151D64 (Xp10Compute2Crc32.c)
 *     Xp10Compute2Crc64 @ 0x180151E6C (Xp10Compute2Crc64.c)
 */

__int64 __fastcall Xp10ReadAndValidateCrc(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v5; // eax
  int v6; // r9d
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v14 = 0;
  v5 = v3 & 7;
  v15 = 0LL;
  v6 = v3 - v5;
  *(_QWORD *)(a3 + 8) >>= v5;
  v8 = v5;
  v9 = 0LL;
  v10 = *(_QWORD *)a3 - v8;
  *(_DWORD *)(a3 + 16) = v6;
  if ( v8 <= *(_QWORD *)a3 )
    v9 = v10;
  *(_QWORD *)a3 = v9;
  if ( ((*a1 >> 14) & 1) != 0 )
  {
    if ( ((*a1 >> 14) & 1) != 1 )
      return 3221225485LL;
    if ( (unsigned int)Xp10ScatteredBitBufferReadBytes(a3, &v14, 4LL) == 4 )
    {
      v12 = Xp10Compute2Crc32(a2);
      if ( v12 == v14 )
        return 0LL;
    }
  }
  else if ( (unsigned int)Xp10ScatteredBitBufferReadBytes(a3, &v15, 8LL) == 8 )
  {
    v13 = Xp10Compute2Crc64(a2);
    return v15 != v13 ? 0xC0000242 : 0;
  }
  return 3221226050LL;
}
