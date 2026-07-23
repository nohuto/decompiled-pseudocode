/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x1409BD8EC
 * Callers:
 *     ExpAllocateHandleTable @ 0x1409BCEF8 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall ExpInsertLowLevelTableIntoFreeList(
        volatile signed __int32 *a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        struct _KLOCK_ENTRIES *a4)
{
  __m128i v5; // xmm3
  unsigned int v7; // r8d
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r11
  unsigned int v10; // eax
  __m128i v11; // xmm2
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rsi
  unsigned __int64 v15; // rcx
  __m128i v16; // [rsp+20h] [rbp-18h]

  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( (_BYTE)a4 )
  {
    v7 = 1;
    v8 = a2 + 3;
    v9 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    do
    {
      v10 = v7 + 1;
      v7 += 2;
      v16.m128i_i64[0] = _xmm;
      *(v8 - 1) = 0LL;
      v8[1] = v9;
      v11 = _mm_add_epi64(
              _mm_slli_epi64(
                _mm_unpacklo_epi32(
                  _mm_move_epi64(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 0), v16)),
                  (__m128i)0LL),
                4u),
              v5);
      *v8 = v11.m128i_i64[0];
      v8 += 4;
      *(v8 - 2) = _mm_srli_si128(v11, 8).m128i_u64[0];
    }
    while ( v7 < 0xFF );
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  _InterlockedAdd(a1, 0x400u);
  if ( (_BYTE)a4 )
  {
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)a3, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
      ExfAcquirePushLockExclusiveEx(a3, v12, (__int64)a3);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v15 = (unsigned __int64)(a2 + 2);
    if ( a3[1] )
      *(_QWORD *)(a3[2] + 8) = v15;
    else
      a3[1] = v15;
    a3[2] = (unsigned __int64)(a2 + 510);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    KeAbPostRelease((unsigned __int64)a3);
  }
}
