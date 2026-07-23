/*
 * XREFs of KiSetProcessorIdle @ 0x14041CED0
 * Callers:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbp
  __int64 v5; // r9
  char result; // al
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int8 i; // di
  __int64 v13; // r8
  unsigned __int8 j; // dl
  unsigned __int64 v15; // rbx
  unsigned __int8 k; // r10
  __int64 v17; // r8
  unsigned __int8 m; // al
  __int64 v19; // rsi
  signed __int64 v20; // rdx
  signed __int64 v21; // rdi
  __int128 v22; // rt0
  unsigned __int8 v23; // tt
  unsigned __int64 v24; // r8
  unsigned __int8 jj; // r10
  unsigned __int64 v26; // rbx
  unsigned __int8 kk; // dl
  char v28; // al
  unsigned __int8 n; // di
  unsigned __int64 v30; // rbx
  unsigned __int8 ii; // dl

  v3 = *(unsigned __int8 *)(a1 + 209);
  v5 = *(_QWORD *)(a1 + 192);
  result = *(_BYTE *)(a1 + 35);
  v8 = *(_QWORD *)(a1 + 36512);
  v9 = 1LL << v3;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a1 + 36600);
    if ( v10 )
      *(_BYTE *)(v10 + 16) = 1;
    *(_BYTE *)(a1 + 14523) = a3;
    if ( (result & 1) != 0 )
    {
      result &= ~1u;
      *(_BYTE *)(a1 + 35) = result;
      if ( (result & 0x10) == 0 )
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), v9);
      if ( v8 == v9 )
      {
        _InterlockedOr64((volatile signed __int64 *)(v5 + 16), v9);
        _InterlockedOr64((volatile signed __int64 *)(v5 + 24), v9);
      }
      else
      {
        v19 = *(_QWORD *)(v5 + 16);
        v20 = *(_QWORD *)(v5 + 24);
        while ( 1 )
        {
          v21 = v20;
          if ( (v8 & (v9 | v19)) == v8 )
            v21 = v20 | v8;
          *(_QWORD *)&v22 = v19;
          *((_QWORD *)&v22 + 1) = v20;
          v23 = _InterlockedCompareExchange128(
                  (volatile signed __int64 *)(v5 + 16),
                  v21,
                  v9 | v19,
                  (signed __int64 *)&v22);
          v20 = *((_QWORD *)&v22 + 1);
          v19 = v22;
          result = v23 != 0;
          if ( v23 )
            break;
          _mm_pause();
        }
      }
      if ( (*(_BYTE *)(v5 + 184) & 2) != 0 )
      {
        if ( v8 == v9 )
        {
          *(_BYTE *)(v3 + v5 + 512) = 0;
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 36512);
          for ( i = 0; v11; v11 >>= 8 )
          {
            if ( (_BYTE)v11 )
            {
              v13 = 0LL;
              for ( j = 0; j < 8u; ++j )
              {
                if ( _bittest64((const __int64 *)&v11, j) )
                  v13 += 1LL << (8 * j);
              }
              result = i;
              _InterlockedAdd64((volatile signed __int64 *)(v5 + 8LL * i + 512), -v13);
            }
            ++i;
          }
        }
      }
      if ( (*(_BYTE *)(v5 + 184) & 4) != 0 )
      {
        v15 = *(_QWORD *)(a1 + 36536);
        if ( v15 == v9 )
        {
          *(_BYTE *)(v3 + v5 + 576) = 0;
        }
        else
        {
          for ( k = 0; v15; v15 >>= 8 )
          {
            if ( (_BYTE)v15 )
            {
              v17 = 0LL;
              for ( m = 0; m < 8u; ++m )
              {
                if ( _bittest64((const __int64 *)&v15, m) )
                  v17 += 1LL << (8 * m);
              }
              result = k;
              _InterlockedAdd64((volatile signed __int64 *)(v5 + 8LL * k + 576), -v17);
            }
            ++k;
          }
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 14523) = 0;
    if ( (result & 1) != 0 )
      __fastfail(0x21u);
    v28 = result | 1;
    *(_BYTE *)(a1 + 35) = v28;
    if ( (v28 & 0x10) == 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), ~v9);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 16), ~v9);
    result = ~(_BYTE)v8;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), ~v8);
    if ( (*(_BYTE *)(v5 + 184) & 2) != 0 )
    {
      if ( v9 == v8 )
      {
        *(_BYTE *)(v3 + v5 + 512) = 1;
      }
      else
      {
        for ( n = 0; v8; v8 >>= 8 )
        {
          if ( (_BYTE)v8 )
          {
            v30 = 0LL;
            for ( ii = 0; ii < 8u; ++ii )
            {
              if ( _bittest64((const __int64 *)&v8, ii) )
                v30 += 1LL << (8 * ii);
            }
            result = n;
            _InterlockedAdd64((volatile signed __int64 *)(v5 + 8LL * n + 512), v30);
          }
          ++n;
        }
      }
    }
    if ( (*(_BYTE *)(v5 + 184) & 4) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 36536);
      if ( v9 == v24 )
      {
        *(_BYTE *)(v3 + v5 + 576) = 1;
      }
      else
      {
        for ( jj = 0; v24; v24 >>= 8 )
        {
          if ( (_BYTE)v24 )
          {
            v26 = 0LL;
            for ( kk = 0; kk < 8u; ++kk )
            {
              if ( _bittest64((const __int64 *)&v24, kk) )
                v26 += 1LL << (8 * kk);
            }
            result = jj;
            _InterlockedAdd64((volatile signed __int64 *)(v5 + 8LL * jj + 576), v26);
          }
          ++jj;
        }
      }
    }
  }
  return result;
}
