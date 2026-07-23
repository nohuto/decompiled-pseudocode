/*
 * XREFs of CmpComputeComponentHashes @ 0x1408D4670
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  __m128i v3; // xmm6
  char v4; // cl
  __int16 v6; // bx
  _WORD *v7; // rbp
  __int16 v8; // di
  __int16 v9; // r12
  __int16 v10; // di
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  int v13; // r9d
  __int64 result; // rax
  struct _KPRCB *v15; // rbp
  _GENERAL_LOOKASIDE *v16; // rsi
  _DWORD *v17; // rbx
  _GENERAL_LOOKASIDE *v18; // rsi
  unsigned __int16 v19; // si
  __int64 v20; // r10
  int v21; // r9d
  _DWORD *v22; // r13
  unsigned __int16 *v23; // r11
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r8
  struct _LIST_ENTRY *v26; // rsi
  unsigned __int16 *v27; // r11
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r8
  struct _LIST_ENTRY *Flink; // r13
  __m128i v31; // [rsp+20h] [rbp-68h]
  __m128i v32; // [rsp+30h] [rbp-58h]
  char v33; // [rsp+90h] [rbp+8h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp+8h]
  _GENERAL_LOOKASIDE *P; // [rsp+A8h] [rbp+20h]
  _GENERAL_LOOKASIDE *L; // [rsp+A8h] [rbp+20h]

  v3 = *a1;
  v4 = 0;
  v33 = 0;
  v6 = _mm_cvtsi128_si32(v3);
  v32 = v3;
  v31.m128i_i64[0] = v3.m128i_i64[0];
  if ( v6 )
  {
    v7 = (_WORD *)v3.m128i_i64[1];
    v8 = 0;
    v9 = v3.m128i_i16[1];
    while ( v6 )
    {
      if ( v8 >= 32 )
        return 3221225485LL;
      if ( *v7 == 92 )
      {
        ++v8;
        v19 = v32.m128i_i16[0] - v6;
        v32.m128i_i16[0] = v19;
        v32.m128i_i16[1] = v19;
        if ( v8 > 8 && !v4 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[8].P;
          ++P->TotalAllocates;
          v22 = RtlpInterlockedPopEntrySList(&P->ListHead);
          if ( v22
            || (++P->AllocateMisses,
                L = CurrentPrcb->PPLookasideList[8].L,
                ++L->TotalAllocates,
                (v22 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
            || (++L->AllocateMisses,
                (v22 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0LL) )
          {
            *v22 = CurrentPrcb->Number;
          }
          if ( !v22 )
            return 3221225626LL;
          memset_0(v22, 0, 0x1E0uLL);
          *(_QWORD *)(a3 + 160) = v22;
          v33 = 1;
        }
        v20 = (unsigned int)(v8 - 1);
        if ( (unsigned int)v20 >= 8 )
          *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v8 - 9) + 6LL)) = v32;
        else
          *(__m128i *)(a3 + 16 * ((unsigned int)v20 + 2LL)) = v32;
        v21 = 0;
        if ( v19 >= 2u )
        {
          v27 = (unsigned __int16 *)v32.m128i_i64[1];
          v28 = (unsigned __int64)v19 >> 1;
          do
          {
            LODWORD(v29) = *v27;
            if ( (unsigned int)v29 >= 0x61 )
            {
              if ( (unsigned int)v29 > 0x7A )
              {
                Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
                if ( Flink && (unsigned __int16)v29 >= 0xC0u )
                  LOWORD(v29) = *((_WORD *)&Flink->Flink
                                + (v29 & 0xF)
                                + *((unsigned __int16 *)&Flink->Flink
                                  + ((unsigned __int8)v29 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v29 >> 8))))
                              + v29;
              }
              else
              {
                LOWORD(v29) = v29 - 32;
              }
            }
            ++v27;
            v21 = (unsigned __int16)v29 + 37 * v21;
            --v28;
          }
          while ( v28 );
        }
        if ( (unsigned int)v20 >= 8 )
          *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v20 - 8)) = v21;
        else
          *(_DWORD *)(a3 + 4 * v20) = v21;
        do
        {
          if ( *v7 != 92 )
            break;
          v6 -= 2;
          ++v7;
          v9 -= 2;
          v31.m128i_i16[0] = v6;
        }
        while ( v6 );
        v4 = v33;
        v31.m128i_i64[1] = (__int64)v7;
        v31.m128i_i16[1] = v9;
        v3 = v31;
        v32 = v31;
      }
      else
      {
        ++v7;
        v6 -= 2;
        v9 -= 2;
        v31.m128i_i16[0] = v6;
      }
    }
    v10 = v8 + 1;
    if ( v10 > 8 && !v4 )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->PPLookasideList[8].P;
      ++v16->TotalAllocates;
      v17 = RtlpInterlockedPopEntrySList(&v16->ListHead);
      if ( v17
        || (++v16->AllocateMisses,
            v18 = v15->PPLookasideList[8].L,
            ++v18->TotalAllocates,
            (v17 = RtlpInterlockedPopEntrySList(&v18->ListHead)) != 0LL)
        || (++v18->AllocateMisses,
            (v17 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)v18->Type, v18->Size)) != 0LL) )
      {
        *v17 = v15->Number;
      }
      if ( !v17 )
        return 3221225626LL;
      memset_0(v17, 0, 0x1E0uLL);
      *(_QWORD *)(a3 + 160) = v17;
    }
    v11 = (unsigned int)(v10 - 1);
    if ( (unsigned int)v11 >= 8 )
      *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v10 - 9) + 6LL)) = v3;
    else
      *(__m128i *)(a3 + 16 * ((unsigned int)v11 + 2LL)) = v3;
    v12 = _mm_cvtsi128_si32(v3);
    v13 = 0;
    if ( v12 >= 2u )
    {
      v23 = (unsigned __int16 *)v3.m128i_i64[1];
      v24 = (unsigned __int64)v12 >> 1;
      do
      {
        LODWORD(v25) = *v23;
        if ( (unsigned int)v25 >= 0x61 )
        {
          if ( (unsigned int)v25 > 0x7A )
          {
            v26 = PsGetCurrentServerSiloGlobals()[75].Flink;
            if ( v26 && (unsigned __int16)v25 >= 0xC0u )
              LOWORD(v25) = *((_WORD *)&v26->Flink
                            + (v25 & 0xF)
                            + *((unsigned __int16 *)&v26->Flink
                              + ((unsigned __int8)v25 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&v26->Flink + (v25 >> 8))))
                          + v25;
          }
          else
          {
            LOWORD(v25) = v25 - 32;
          }
        }
        ++v23;
        v13 = (unsigned __int16)v25 + 37 * v13;
        --v24;
      }
      while ( v24 );
    }
    if ( (unsigned int)v11 >= 8 )
      *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v11 - 8)) = v13;
    else
      *(_DWORD *)(a3 + 4 * v11) = v13;
    *a2 = v10;
    return 0LL;
  }
  else
  {
    result = 0LL;
    *a2 = 0;
  }
  return result;
}
