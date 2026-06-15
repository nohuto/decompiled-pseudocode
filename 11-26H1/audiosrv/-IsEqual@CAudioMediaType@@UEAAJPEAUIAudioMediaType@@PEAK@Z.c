/*
 * XREFs of ?IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z @ 0x1800B4B50
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioMediaType::IsEqual(struct IAudioMediaType *this, struct IAudioMediaType *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __m128i *lpVtbl; // rcx
  __int64 v8; // r13
  __int128 v9; // xmm0
  __int16 v10; // r11
  __m128i v11; // xmm1
  __int16 v12; // r14
  __int16 v13; // dx
  __int16 v14; // r10
  int v15; // r8d
  __int16 v16; // r9
  __int16 v17; // ax
  int v18; // r15d
  unsigned int v19; // r14d
  int v20; // r14d
  int v21; // ecx
  struct IAudioMediaTypeVtbl *v22; // r9
  __int128 Buf2; // [rsp+20h] [rbp-30h] BYREF
  __int16 v25; // [rsp+30h] [rbp-20h]
  __m128i Buf1; // [rsp+38h] [rbp-18h] BYREF
  __int16 v27; // [rsp+48h] [rbp-8h]

  v3 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    if ( this == a2 )
    {
      *a3 = 14;
      return v3;
    }
    v6 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
    lpVtbl = (__m128i *)this[2].lpVtbl;
    v8 = v6;
    if ( !v6 )
    {
      if ( lpVtbl )
        return 1;
      else
        *a3 |= 0xEu;
      return v3;
    }
    if ( lpVtbl )
    {
      v9 = *(_OWORD *)v6;
      v10 = *(_WORD *)(v6 + 16);
      v11 = *lpVtbl;
      v12 = lpVtbl[1].m128i_i16[0];
      v27 = v12;
      v13 = v11.m128i_i16[0];
      v25 = v10;
      Buf1 = v11;
      Buf2 = v9;
      if ( v11.m128i_i16[1] )
      {
        v14 = WORD1(Buf2);
      }
      else
      {
        v14 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( v11.m128i_i32[1] )
      {
        v15 = DWORD1(Buf2);
      }
      else
      {
        v15 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( _mm_srli_si128(v11, 8).m128i_u16[3] )
      {
        v16 = HIWORD(Buf2);
      }
      else
      {
        v16 = 0;
        HIDWORD(Buf2) = 0;
      }
      if ( v11.m128i_i16[0] )
      {
        v17 = Buf2;
      }
      else
      {
        v17 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v14 )
      {
        Buf1.m128i_i16[1] = 0;
        Buf1.m128i_i32[2] = 0;
        Buf1.m128i_i16[6] = 0;
      }
      if ( !v15 )
        *(__int64 *)((char *)Buf1.m128i_i64 + 4) = 0LL;
      if ( !v16 )
        Buf1.m128i_i32[3] = 0;
      if ( !v17 )
      {
        v13 = 0;
        Buf1.m128i_i16[0] = 0;
      }
      if ( v17 == 1 )
      {
        v10 = 0;
        v25 = 0;
      }
      if ( v13 == 1 )
      {
        v12 = 0;
        v27 = 0;
      }
      if ( v17 != v13
        || lpVtbl->m128i_i16[0] == -2
        && (*(_QWORD *)(v8 + 24) != lpVtbl[1].m128i_i64[1] || *(_QWORD *)(v8 + 32) != lpVtbl[2].m128i_i64[0]) )
      {
        return 1;
      }
      if ( v10 != v12 )
        return 1;
      v18 = 18;
      v19 = *a3 | 2;
      *a3 = v19;
      if ( memcmp_0(&Buf1, &Buf2, 0x12uLL) )
        return 1;
      v20 = v19 | 4;
      v21 = 18;
      *a3 = v20;
      v22 = this[2].lpVtbl;
      if ( LOWORD(v22->QueryInterface) != 1 )
        v21 = LOWORD(v22->Release) + 18;
      if ( *(_WORD *)v8 != 1 )
        v18 = *(unsigned __int16 *)(v8 + 16) + 18;
      if ( v21 != v18 )
        return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
      if ( memcmp_0((char *)&v22->Release + 2, (const void *)(v8 + 18), *(unsigned __int16 *)(v8 + 16)) )
        return 1;
      *a3 = v20 | 8;
    }
    return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
  }
  return 2147942487LL;
}
