/*
 * XREFs of KiMceDispatch @ 0x140C7A500
 * Callers:
 *     KiMceLinkage @ 0x140C81660 (KiMceLinkage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiMceDispatch(_QWORD *a1, unsigned int a2)
{
  _KIDTENTRY64 *IdtBase; // r8
  unsigned int Number; // ecx
  char *StackBase; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r10
  __m128i v9; // xmm0
  int v10; // edx
  unsigned int v11; // r11d
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // rbx
  char v14; // r15
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rax
  int v19; // ecx
  _BYTE *v20; // rax
  char *v21; // rcx
  __int64 v22; // r11
  char v23; // al
  signed __int32 v25[8]; // [rsp+0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp+18h]
  __int64 v27; // [rsp+38h] [rbp+18h]

  IdtBase = KeGetPcr()->IdtBase;
  Number = KeGetPcr()->Prcb.Number;
  StackBase = (char *)KeGetPcr()->NtTib.StackBase;
  LODWORD(v26) = IdtBase[4].Alignment;
  HIDWORD(v26) = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(&IdtBase[4].Alignment + 1)));
  v6 = v26;
  v7 = *(_QWORD *)(v26 + 5120);
  v8 = *(_QWORD **)(v26 + 5128);
  v9 = _mm_srli_si128(*(__m128i *)(v26 + 16 * (a2 + 32LL)), 8);
  LODWORD(v27) = *(_OWORD *)(v26 + 16 * (a2 + 32LL));
  HIDWORD(v27) = _mm_cvtsi128_si32(v9);
  _InterlockedOr((volatile signed __int32 *)(v6 + 5168), 1u);
  if ( Number != *(_DWORD *)(v6 + 5172) )
  {
    while ( (*(_DWORD *)(v6 + 5168) & 2) != 0 )
      _mm_pause();
    _InterlockedOr(v25, 0);
  }
  v10 = 4096;
  if ( Number == *(_DWORD *)(v6 + 5172) )
  {
    if ( (*(_DWORD *)(v7 + 2524) & 0x20000) == 0 )
    {
      **(_QWORD **)(v7 + 1208) = 0xA3A03F5891C8B4E8uLL;
      **(_QWORD **)(v7 + 1216) = 0LL;
      **(_QWORD **)(v7 + 1224) = 0LL;
      **(_QWORD **)(v7 + 1232) = 0LL;
    }
    v11 = 1;
    v12 = (unsigned __int64 *)(StackBase + 36);
    do
    {
      v13 = *v12;
      if ( *v12 )
      {
        v14 = *(_BYTE *)(v7 + 2203);
        v15 = a1[3];
        v16 = *(unsigned int *)(v7 + 2260);
        if ( (v14 & 8) != 0 )
          v16 = 464LL;
        if ( v15 <= v13 && v15 > v13 - v16 )
          break;
        if ( (v14 & 8) != 0 )
        {
          v17 = *(_QWORD *)(v13 + 8);
          if ( v15 <= v17 && v15 > v17 - (unsigned int)(*(_DWORD *)(v7 + 2260) - 32) )
            break;
        }
      }
      ++v11;
      ++v12;
    }
    while ( v11 < 8 );
    if ( v11 == 8 && *a1 - (_QWORD)v8 < 0x1000uLL )
    {
      v18 = (_QWORD *)a1[3];
      if ( *v18 == v7 + 2233 )
      {
        *a1 = *v18;
        a1[3] = v18 + 1;
      }
    }
    v19 = 4;
    *(_QWORD *)(v7 + 2238) = 0xC3C3C3C3C3C3C3C3uLL;
    v20 = (_BYTE *)(v7 + 2246);
    do
    {
      *v20++ = -61;
      --v19;
    }
    while ( v19 );
    _InterlockedAnd((volatile signed __int32 *)(v6 + 5168), 0xFFFFFFFD);
  }
  if ( (*(_DWORD *)(v6 + 5168) & 4) == 0 )
  {
    v21 = (char *)(v6 + 1024);
    v22 = 512LL;
    do
    {
      v10 -= 8;
      *v8 = *(_QWORD *)v21;
      v21 += 8;
      ++v8;
      --v22;
    }
    while ( v22 );
    for ( ; v10; --v10 )
    {
      v23 = *v21++;
      *(_BYTE *)v8 = v23;
      v8 = (_QWORD *)((char *)v8 + 1);
    }
  }
  *(_QWORD *)(v6 + 5136) = v7 + 2202;
  return v27;
}
