/*
 * XREFs of PfPrefetchRequestVerify @ 0x14097F868
 * Callers:
 *     PfpPrefetchRequest @ 0x140980100 (PfpPrefetchRequest.c)
 * Callees:
 *     PfPrefetchRequestVerifyRanges @ 0x14097FC10 (PfPrefetchRequestVerifyRanges.c)
 *     PfPrefetchRequestVerifyPath @ 0x14097FD20 (PfPrefetchRequestVerifyPath.c)
 *     PfPrefetchRequestPrepareForVerify @ 0x14097FDAC (PfPrefetchRequestPrepareForVerify.c)
 */

__int64 __fastcall PfPrefetchRequestVerify(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // r15
  unsigned int i; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int j; // esi
  __int64 v19; // r14
  _DWORD *v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rsi
  unsigned int k; // edi
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int128 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  int v30; // [rsp+58h] [rbp-8h]

  v29 = 0LL;
  v30 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( (unsigned int)a2 < 0x80 )
    return 1000LL;
  if ( *(_DWORD *)a1 != 13 )
    return 1500LL;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)a2 != (_DWORD)v3 )
    return 2000LL;
  if ( a1 + v3 < a1 )
    return 2500LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 28) >= 8u )
    return 3000LL;
  if ( *(_WORD *)(a1 + 30) >= 8u )
    return 3200LL;
  if ( (*(_DWORD *)(a1 + 80) & 0xC0) != 0 )
    return 3400LL;
  if ( *(_BYTE *)(a1 + 81) >= 6u )
    return 3600LL;
  result = PfPrefetchRequestPrepareForVerify(a1, a2, &v26);
  if ( !(_DWORD)result )
  {
    _mm_lfence();
    v5 = *(unsigned int *)(a1 + 32);
    v6 = 40 * *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v5 < (unsigned int)v26 || (unsigned int)v5 >= DWORD1(v26) && v6 )
      return 12500LL;
    v7 = v5 + v6;
    if ( (int)v5 + v6 < (unsigned int)v26 || v7 > DWORD1(v26) || (v7 & 7) != 0 )
    {
      return 12500LL;
    }
    else
    {
      LODWORD(v26) = v5 + v6;
      v8 = a1 + v5;
      for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
      {
        v10 = *(unsigned int *)(v8 + 40LL * i + 24);
        v11 = *(unsigned int *)(v8 + 40LL * i + 32);
        if ( (unsigned int)v10 >= 0x7FFF )
          return 10000LL;
        if ( !(_DWORD)v10 )
          return 10500LL;
        if ( !(_DWORD)v11 )
          return 10750LL;
        if ( (unsigned int)v11 < (unsigned int)v29 || (unsigned int)v11 >= HIDWORD(v29) && 2 * (_DWORD)v10 != -2 )
          return 11000LL;
        v12 = v11 + 2 * v10 + 2;
        if ( v12 < (unsigned int)v29 || v12 > HIDWORD(v29) || (v12 & 1) != 0 )
          return 11000LL;
        LODWORD(v29) = v11 + 2 * v10 + 2;
        if ( *(_WORD *)(a1 + v11 + 2 * v10) )
          return 12000LL;
        v13 = *(_DWORD *)(v8 + 40LL * i + 12) >> 1;
        if ( !v13 )
          return 13000LL;
        if ( v13 > DWORD1(v27) )
          return 14000LL;
        v14 = *(unsigned int *)(v8 + 40LL * i + 16);
        v15 = 48 * v13;
        if ( (unsigned int)v14 < HIDWORD(v26) || (unsigned int)v14 >= (unsigned int)v27 && v15 )
          return 15000LL;
        v16 = v14 + v15;
        if ( (unsigned int)(v14 + v15) < HIDWORD(v26) || v16 > (unsigned int)v27 || (v16 & 7) != 0 )
          return 15000LL;
        HIDWORD(v26) = v14 + v15;
        v17 = a1 + v14;
        for ( j = 0; j < *(_DWORD *)(v8 + 40LL * i + 12) >> 1; ++j )
        {
          v19 = 48LL * j;
          v20 = (_DWORD *)(v19 + v17 + 32);
          if ( *v20 || *(_DWORD *)(v19 + v17 + 40) )
          {
            result = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, _DWORD *, _QWORD))PfPrefetchRequestVerifyPath)(
                       a1,
                       &v26,
                       v20,
                       0LL);
            if ( (_DWORD)result )
              return result;
          }
          result = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, __int64, _QWORD))PfPrefetchRequestVerifyRanges)(
                     a1,
                     &v26,
                     v19 + v17 + 16,
                     (*(_DWORD *)(v19 + v17) & 1) != 0 ? 512 : 4096);
          if ( (_DWORD)result )
            return result;
        }
      }
      v21 = *(unsigned int *)(a1 + 56);
      v22 = 40 * *(_DWORD *)(a1 + 20);
      if ( (unsigned int)v21 < DWORD1(v28) || (unsigned int)v21 >= DWORD2(v28) && v22 )
        return 40000LL;
      v23 = v21 + v22;
      if ( (unsigned int)(v21 + v22) < DWORD1(v28) || v23 > DWORD2(v28) || (v23 & 7) != 0 )
      {
        return 40000LL;
      }
      else
      {
        DWORD1(v28) = v21 + v22;
        v24 = a1 + v21;
        for ( k = 0; k < *(_DWORD *)(a1 + 20); ++k )
        {
          result = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, __int64, __int64))PfPrefetchRequestVerifyRanges)(
                     a1,
                     &v26,
                     v24 + 8 * (k + 4LL * k + 3),
                     4096LL);
          if ( (_DWORD)result )
            return result;
        }
        return 0LL;
      }
    }
  }
  return result;
}
