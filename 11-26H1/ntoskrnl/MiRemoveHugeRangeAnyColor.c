/*
 * XREFs of MiRemoveHugeRangeAnyColor @ 0x1406F24B0
 * Callers:
 *     MiGetBestHugeRangeFromNode @ 0x1406F0244 (MiGetBestHugeRangeFromNode.c)
 * Callees:
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404883BC (MiGetColorHeadHugeRangeBase.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406F0910 (MiGetPerfectColorHeadHugeRange.c)
 */

_QWORD *__fastcall MiRemoveHugeRangeAnyColor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rax
  char v5; // si
  unsigned int v6; // ebx
  _BOOL8 v7; // rdi
  __int64 v8; // r11
  __int64 v10; // r11
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  _QWORD *v13; // r10
  unsigned int Cache; // r15d
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  int v17; // esi
  unsigned int v18; // ecx
  unsigned int v19; // r11d
  char v20; // al
  unsigned int v21; // edi
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // r8
  unsigned int v25; // r15d
  unsigned int v26; // ecx
  int v27; // r11d
  unsigned __int64 v28; // rcx
  _QWORD *PerfectColorHeadHugeRange; // rax
  _QWORD v30[3]; // [rsp+20h] [rbp-68h] BYREF
  int v31; // [rsp+38h] [rbp-50h]
  int v32; // [rsp+3Ch] [rbp-4Ch]
  int v33; // [rsp+40h] [rbp-48h]
  int v34; // [rsp+44h] [rbp-44h]
  __int64 v35; // [rsp+48h] [rbp-40h]
  _QWORD *v36; // [rsp+90h] [rbp+8h]
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  v4 = &MiZeroThenZero;
  v5 = a3;
  v34 = 0;
  v35 = 0LL;
  v6 = a2;
  if ( (a3 & 0x10) == 0 )
    v4 = &MiFreeThenFree;
  v30[2] = v4;
  v7 = (a3 & 0x10) == 0;
  v8 = *(_QWORD *)(a1 + 16) + 56320LL * (((unsigned int)a2 >> 9) & 0x3F);
  if ( !*(_QWORD *)(v8 + 8 * ((((unsigned int)a2 >> 8) & 1) + 2 * v7) + 13912) )
    return 0LL;
  v30[0] = *(_QWORD *)(a1 + 16) + 56320LL * (((unsigned int)a2 >> 9) & 0x3F);
  v33 = a3;
  v32 = a2;
  v31 = 1;
  v30[1] = MiGetColorHeadHugeRangeBase(v8, a2, v7);
  v36 = 0LL;
  v37 = v10 + 16 * (v7 + 872);
  v11 = dword_140E2D900[HIWORD(v6) & 3];
  Cache = MiColorGetCache(v6);
  v15 = 0LL;
  v16 = 0LL;
  v17 = v5 & 0x40;
  if ( v17 )
  {
    v18 = MiColorGetCache(v12) & 0xF;
    do
    {
      v20 = v18;
      v18 += 16;
      v16 |= 1LL << (v20 & 0x3F);
    }
    while ( v18 < 0x40 && v18 < v19 );
  }
  v21 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = (unsigned __int64)Cache >> 6;
      v23 = *(_QWORD *)(v37 + 8);
      v24 = (_QWORD *)(v23 + 8 * v22);
      if ( v13 != v24 )
      {
        v13 = (_QWORD *)(v23 + 8 * v22);
        v36 = v13;
        v15 = ~((1LL << Cache) - 1) & *v24;
        if ( v17 )
          v15 &= ~v16;
        if ( ((Cache ^ (unsigned __int64)v11) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
          v15 &= (1LL << v11) - 1;
      }
      v25 = Cache & 0xFFFFFFC0;
      if ( v15 )
        break;
      Cache = v25 + 64;
      if ( Cache >= v11 )
      {
        v36 = 0LL;
        if ( !(unsigned int)MiColorGetCache(v6) || v11 != v27 )
          return (_QWORD *)v3;
        v11 = MiColorGetCache(v26);
        Cache = 0;
      }
    }
    _BitScanForward64(&v28, v15);
    Cache = v28 + v25;
    v21 ^= (unsigned __int8)(v21 ^ Cache);
    v32 = v21;
    v15 &= ~(1LL << v28);
    PerfectColorHeadHugeRange = MiGetPerfectColorHeadHugeRange((__int64)v30);
    if ( PerfectColorHeadHugeRange )
      break;
    v13 = v36;
  }
  return PerfectColorHeadHugeRange;
}
