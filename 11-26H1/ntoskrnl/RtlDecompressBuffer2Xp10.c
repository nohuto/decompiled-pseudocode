/*
 * XREFs of RtlDecompressBuffer2Xp10 @ 0x14080FFC0
 * Callers:
 *     RtlDecompressBufferXp10 @ 0x1408101E0 (RtlDecompressBufferXp10.c)
 * Callees:
 *     Xp10ExecuteHuffmanDecode @ 0x140812000 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ReadAndValidateCrc @ 0x14081422C (Xp10ReadAndValidateCrc.c)
 *     Xp10ReadMtfHeader @ 0x14081430C (Xp10ReadMtfHeader.c)
 *     Xp10ScatteredCopyBits @ 0x140814638 (Xp10ScatteredCopyBits.c)
 *     Xp10ScatteredReadBytes @ 0x1408148E8 (Xp10ScatteredReadBytes.c)
 *     Xp10ValidateFrameHeaderAndFillParameters @ 0x1408149EC (Xp10ValidateFrameHeaderAndFillParameters.c)
 */

__int64 __fastcall RtlDecompressBuffer2Xp10(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 result; // rax
  _QWORD *v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // edi
  int v16; // [rsp+28h] [rbp-69h] BYREF
  __int16 v17; // [rsp+2Ch] [rbp-65h]
  int v18; // [rsp+30h] [rbp-61h] BYREF
  __int16 v19; // [rsp+34h] [rbp-5Dh]
  __int64 v20; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-51h]
  __int64 v22; // [rsp+48h] [rbp-49h]
  _QWORD v23[7]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v24[2]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v25; // [rsp+98h] [rbp+7h]
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  _QWORD *v27; // [rsp+A8h] [rbp+17h]
  __int64 v28; // [rsp+B0h] [rbp+1Fh]
  unsigned int v29; // [rsp+F0h] [rbp+5Fh] BYREF

  v29 = a4;
  v23[4] = a3;
  v17 = 0;
  v16 = 0;
  v23[0] = *a3;
  v23[1] = a3[1] + v23[0];
  v24[0] = *a1;
  v24[1] = a1[1] + v24[0];
  v27 = a1;
  v18 = 0;
  v19 = 0;
  v22 = 0LL;
  v23[5] = 1LL;
  v23[3] = 0LL;
  v23[2] = 0LL;
  v21 = 0LL;
  v20 = -1LL;
  v28 = 1LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( (unsigned int)Xp10ScatteredReadBytes(v23, &v18, 6LL) == 6 )
  {
    result = Xp10ValidateFrameHeaderAndFillParameters(&v18, &v16);
    if ( (int)result < 0 )
      return result;
    v8 = a7;
    v9 = 0;
    *a7 = &v16;
    do
    {
      *(_OWORD *)(v8 + 1) = 0LL;
      while ( 1 )
      {
        v20 = -1LL;
        if ( v9 < 0 )
        {
          result = Xp10ReadAndValidateCrc(&v16, v24, &v20);
          *a6 = v24[0] + v25 - v27[2 * v26];
          return result;
        }
        v10 = v22;
        v11 = 32;
        v29 = 0;
        if ( (unsigned int)v22 >= 0x20 )
        {
          v13 = v21;
        }
        else
        {
          v12 = Xp10ScatteredReadBytes(v23, &v29, 4LL);
          v10 = v22 + 8 * v12;
          v13 = ((unsigned __int64)v29 << v22) | v21;
          v11 = 32;
          if ( v10 < 0x20 )
            v11 = v10;
        }
        LODWORD(v22) = v10 - v11;
        v9 = v13 & ((1LL << v11) - 1);
        v21 = v13 >> v11;
        if ( v11 != 32 )
          return 3221226050LL;
        v14 = v9 & 0xFFFFFFF;
        if ( (v9 & 0xFFFFFFFu) < 0x20 || (v9 & 0x10000000) != 0 )
          return 3221226050LL;
        v15 = v14 - 32;
        v20 = (unsigned int)(v14 - 32);
        if ( (v9 & 0x20000000) == 0 )
          break;
        if ( (v9 & 0x40000000) == 0 || (result = Xp10ReadMtfHeader(&v16, v8 + 1, &v20), (int)result >= 0) )
        {
          result = Xp10ExecuteHuffmanDecode(v8, &v20, v24);
          if ( (int)result >= 0 )
            continue;
        }
        return result;
      }
    }
    while ( (v15 & 7) == 0 && (unsigned int)Xp10ScatteredCopyBits(v24, &v20, v15) == v15 );
  }
  return 3221226050LL;
}
