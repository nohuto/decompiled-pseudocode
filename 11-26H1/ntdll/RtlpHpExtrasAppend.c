/*
 * XREFs of RtlpHpExtrasAppend @ 0x180005470
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x180005674 (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x180095038 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpPgSetExtraPresent @ 0x1800DF824 (RtlpHpPgSetExtraPresent.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasAppend(
        _RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  __m128i *v8; // r9
  __m128i *v9; // rsi
  unsigned __int64 v10; // rsi
  int v11; // eax
  _RTL_SRWLOCK *v12; // rdi
  unsigned __int64 v13; // r9
  _RTL_SRWLOCK *v14; // r10
  char v15; // cl
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // dl
  unsigned int v19; // edx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 Metadata; // rbx

  v8 = (__m128i *)(a2 + a3);
  if ( (a6 & 0x2000) != 0 )
    *v8 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  if ( (a6 & 0x20000F08) != 0 )
  {
    v9 = v8 + 1;
    if ( (a6 & 0x2000) == 0 )
      v9 = (__m128i *)(a2 + a3);
    v10 = ((unsigned __int64)&v9->m128i_u64[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)v10 = 0LL;
    *(_BYTE *)(v10 + 2) &= 0xFu;
    *(_BYTE *)(v10 + 2) |= 16 * (BYTE1(a6) & 0xFE);
    *(_BYTE *)(v10 + 3) = a5 >> 4;
    if ( (_WORD)a2 )
    {
      v11 = 0;
    }
    else
    {
      v24 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a2 - qword_1801C6908) >> 20));
      if ( !v24 || (v11 = v24 - 1, v11 == 2) )
      {
        RtlAcquireSRWLockShared(a1 + 8);
        Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
        RtlReleaseSRWLockShared(a1 + 8);
        *(_QWORD *)(Metadata + 32) |= 1uLL;
        return v10;
      }
    }
    v12 = &a1[24 * v11];
    v13 = a2 & v12[40].Value;
    if ( (_RTL_SRWLOCK *)(RtlpHpHeapGlobals ^ *(_QWORD *)(v13 + 0x10) ^ v13) == &v12[40] )
    {
      v14 = v12 + 41;
      v15 = (char)v12[41].0;
      v16 = v13 + 32 * ((unsigned __int64)(unsigned int)(a2 - v13) >> v15);
      v17 = v16 - 32LL * *(unsigned __int8 *)(v16 + 26);
      v18 = *(_BYTE *)(v17 + 24);
      if ( (v18 & 3) != 3 || v13 + ((unsigned int)((__int64)(v17 - v13) >> 5) << v15) != a2 && (v18 & 0x1Cu) < 8 )
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
      v14 = v12 + 41;
    }
    v19 = *(_BYTE *)(v17 + 24) & 0x1C;
    if ( v19 < 8 )
    {
      *(_DWORD *)(v17 + 8) |= 1u;
    }
    else
    {
      v20 = v17 & v12[40].Value;
      v21 = v20 + ((unsigned int)((__int64)(v17 - v20) >> 5) << *(_BYTE *)&v14->0);
      if ( v19 == 8 )
      {
        v23 = (unsigned __int16)qword_1801C5EC8 ^ *(unsigned __int16 *)(v21 + 40) ^ (unsigned __int64)(unsigned __int16)(v21 >> 12);
        *(_WORD *)(v23 + a2 - 2) |= 0x4000u;
      }
      else if ( v19 == 12 )
      {
        RtlpHpVsChunkSetExtraPresent(v12[44].Value, a2, v20, v21);
      }
      else
      {
        RtlpHpPgSetExtraPresent(v12[58].Value, a2, v20, v21);
      }
    }
    return v10;
  }
  return 0LL;
}
