/*
 * XREFs of RtlDecompressBuffer2Xp10 @ 0x1800F8ED8
 * Callers:
 *     RtlDecompressBufferXp10 @ 0x180151550 (RtlDecompressBufferXp10.c)
 * Callees:
 *     Xp10ReadMtfHeader @ 0x1800F8D5C (Xp10ReadMtfHeader.c)
 *     Xp10ExecuteHuffmanDecode @ 0x1800F9900 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ScatteredReadBytes @ 0x1800FA0B0 (Xp10ScatteredReadBytes.c)
 *     Xp10ReadAndValidateCrc @ 0x1800FA3D8 (Xp10ReadAndValidateCrc.c)
 *     Xp10ScatteredCopyBits @ 0x1800FA4B4 (Xp10ScatteredCopyBits.c)
 *     Xp10ValidateFrameHeaderAndFillParameters @ 0x1801205BC (Xp10ValidateFrameHeaderAndFillParameters.c)
 *     Xp10ScatteredNextBuffer @ 0x180122BD4 (Xp10ScatteredNextBuffer.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlDecompressBuffer2Xp10(
        _QWORD *a1,
        __int64 a2,
        char **a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  int *v7; // r14
  char *v8; // rdi
  char *v9; // r8
  char *v10; // r8
  int v11; // esi
  size_t v12; // r8
  size_t v13; // rbx
  __int64 result; // rax
  _QWORD *v15; // r14
  int v16; // ebx
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // eax
  unsigned __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // edi
  int v23; // [rsp+28h] [rbp-69h] BYREF
  __int16 v24; // [rsp+2Ch] [rbp-65h]
  int v25; // [rsp+30h] [rbp-61h] BYREF
  __int16 v26; // [rsp+34h] [rbp-5Dh]
  __int64 v27; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-51h]
  __int64 v29; // [rsp+48h] [rbp-49h]
  char *v30; // [rsp+50h] [rbp-41h] BYREF
  char *v31; // [rsp+58h] [rbp-39h]
  __int64 v32; // [rsp+60h] [rbp-31h]
  __int64 v33; // [rsp+68h] [rbp-29h]
  char **v34; // [rsp+70h] [rbp-21h]
  __int64 v35; // [rsp+78h] [rbp-19h]
  _QWORD v36[2]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v37; // [rsp+98h] [rbp+7h]
  __int64 v38; // [rsp+A0h] [rbp+Fh]
  _QWORD *v39; // [rsp+A8h] [rbp+17h]
  __int64 v40; // [rsp+B0h] [rbp+1Fh]
  unsigned int v41; // [rsp+F0h] [rbp+5Fh] BYREF

  v41 = a4;
  v34 = a3;
  v24 = 0;
  v7 = &v25;
  v23 = 0;
  v8 = *a3;
  v9 = a3[1];
  v35 = 1LL;
  v10 = &v9[(_QWORD)v8];
  v40 = 1LL;
  v36[0] = *a1;
  v36[1] = a1[1] + v36[0];
  v11 = 0;
  v25 = 0;
  v26 = 0;
  v29 = 0LL;
  v33 = 0LL;
  v31 = v10;
  v32 = 0LL;
  v28 = 0LL;
  v27 = -1LL;
  v39 = a1;
  v38 = 0LL;
  v37 = 0LL;
  while ( 1 )
  {
    v12 = v10 - v8;
    v13 = (unsigned int)(6 - v11);
    if ( v12 <= v13 )
      v13 = v12;
    memmove(v7, v8, v13);
    v11 += v13;
    v7 = (int *)((char *)v7 + v13);
    v30 = &v8[v13];
    if ( v11 == 6 )
      break;
    if ( !(unsigned int)Xp10ScatteredNextBuffer(&v30) )
      return 3221226050LL;
    v10 = v31;
    v8 = v30;
  }
  result = Xp10ValidateFrameHeaderAndFillParameters(&v25, &v23);
  if ( (int)result < 0 )
    return result;
  v15 = a7;
  v16 = 0;
  *a7 = &v23;
  do
  {
    *(_OWORD *)(v15 + 1) = 0LL;
    while ( 1 )
    {
      v27 = -1LL;
      if ( v16 < 0 )
      {
        result = Xp10ReadAndValidateCrc(&v23, v36, &v27);
        *a6 = v36[0] + v37 - v39[2 * v38];
        return result;
      }
      v17 = v29;
      v18 = 32;
      v41 = 0;
      if ( (unsigned int)v29 >= 0x20 )
      {
        v20 = v28;
      }
      else
      {
        v19 = Xp10ScatteredReadBytes(&v30, &v41, 4LL);
        v17 = v29 + 8 * v19;
        v20 = ((unsigned __int64)v41 << v29) | v28;
        v18 = 32;
        if ( v17 < 0x20 )
          v18 = v17;
      }
      LODWORD(v29) = v17 - v18;
      v16 = v20 & ((1LL << v18) - 1);
      v28 = v20 >> v18;
      if ( v18 != 32 )
        return 3221226050LL;
      v21 = v16 & 0xFFFFFFF;
      if ( (v16 & 0xFFFFFFFu) < 0x20 || (v16 & 0x10000000) != 0 )
        return 3221226050LL;
      v22 = v21 - 32;
      v27 = (unsigned int)(v21 - 32);
      if ( (v16 & 0x20000000) == 0 )
        break;
      if ( (v16 & 0x40000000) == 0 || (result = Xp10ReadMtfHeader(&v23, v15 + 1, (__int64)&v27), (int)result >= 0) )
      {
        result = Xp10ExecuteHuffmanDecode(v15, &v27, v36);
        if ( (int)result >= 0 )
          continue;
      }
      return result;
    }
  }
  while ( (v22 & 7) == 0 && (unsigned int)Xp10ScatteredCopyBits(v36, &v27, v22) == v22 );
  return 3221226050LL;
}
