/*
 * XREFs of RtlpFindEntry @ 0x180015010
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

_QWORD *__fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // esi
  unsigned __int64 v5; // rax
  int v6; // r13d
  int v7; // eax
  int v8; // r11d
  _QWORD *v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // r15
  _QWORD *v12; // rax
  int v13; // edx
  __int16 v14; // bp
  __int64 v15; // r8
  int v16; // edx
  __int16 v17; // bp
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // r10
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  _QWORD *i; // rbp
  int v27; // edx
  __int16 v28; // r12
  int v29; // [rsp+60h] [rbp+8h]

  v2 = *(__int64 **)(a1 + 312);
  v3 = a2;
  while ( 1 )
  {
    v5 = *((unsigned int *)v2 + 2);
    if ( a2 < v5 )
    {
      v6 = a2;
      goto LABEL_6;
    }
    if ( !*v2 )
      break;
    v2 = (__int64 *)*v2;
  }
  v6 = v5 - 1;
LABEL_6:
  v7 = *((_DWORD *)v2 + 6);
  v8 = a2;
  v29 = a2;
  while ( 1 )
  {
    v9 = (_QWORD *)v2[4];
    v10 = (unsigned int)(v6 - v7);
    v11 = 0LL;
    v12 = (_QWORD *)v9[1];
    if ( v9 == v12 )
    {
      v11 = (_QWORD *)v2[4];
      v8 = v3;
      goto LABEL_25;
    }
    v13 = *((_DWORD *)v12 - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v13 ^= *(_DWORD *)(a1 + 136);
      v14 = v13;
      if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
      {
        RtlpLogHeapFailure(3, a1, (_DWORD)v12 - 16, 0, 0LL, 0LL);
        v8 = v29;
        LOWORD(v13) = v14;
      }
    }
    if ( v3 - (unsigned __int16)v13 > 0 )
    {
      v11 = v9;
      goto LABEL_25;
    }
    v15 = *v9 - 16LL;
    v16 = *(_DWORD *)(v15 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v16 ^= *(_DWORD *)(a1 + 136);
      v17 = v16;
      if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
      {
        RtlpLogHeapFailure(3, a1, v15, 0, 0LL, 0LL);
        v8 = v29;
        LOWORD(v16) = v17;
      }
    }
    if ( v8 - (unsigned __int16)v16 <= 0 )
    {
      v11 = (_QWORD *)*v9;
      goto LABEL_25;
    }
    if ( !*v2 && v6 == *((_DWORD *)v2 + 2) - 1 )
      break;
    v18 = v2[5];
    v19 = (unsigned int)v10 >> 5;
    v20 = *(_DWORD *)(v18 + 4 * v19) & (-1 << (v10 & 0x1F));
    v21 = v18 + 4 * v19;
    if ( v20 )
    {
LABEL_19:
      if ( (_WORD)v20 )
      {
        if ( (_BYTE)v20 )
          v22 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v20];
        else
          v22 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v20)] + 8;
      }
      else if ( (v20 & 0xFF0000) != 0 )
      {
        v22 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v20)] + 16;
      }
      else
      {
        v22 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v20 >> 24] + 24;
      }
      v23 = 32 * v19 + v22;
      v24 = 2 * v23;
      if ( !*((_DWORD *)v2 + 3) )
        v24 = v23;
      v11 = *(_QWORD **)(v2[6] + 8LL * v24);
      goto LABEL_25;
    }
    while ( (unsigned int)v19 <= ((unsigned int)(*((_DWORD *)v2 + 2) - *((_DWORD *)v2 + 6)) >> 5) - 1 )
    {
      v20 = *(_DWORD *)(v21 + 4);
      v21 += 4LL;
      LODWORD(v19) = v19 + 1;
      if ( v20 )
        goto LABEL_19;
    }
    v29 = v8;
LABEL_28:
    v2 = (__int64 *)*v2;
    v6 = *((_DWORD *)v2 + 6);
    v7 = v6;
  }
  if ( *((_DWORD *)v2 + 3) )
    v10 = (unsigned int)(2 * v10);
  for ( i = *(_QWORD **)(v2[6] + 8 * v10); v9 != i; i = (_QWORD *)*i )
  {
    v27 = *((_DWORD *)i - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v27 ^= *(_DWORD *)(a1 + 136);
      v28 = v27;
      if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
      {
        RtlpLogHeapFailure(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
        v8 = v29;
        LOWORD(v27) = v28;
      }
    }
    if ( v8 - (unsigned __int16)v27 <= 0 )
    {
      v11 = i;
      break;
    }
  }
LABEL_25:
  v29 = v8;
  if ( !v11 )
    goto LABEL_28;
  return v11;
}
