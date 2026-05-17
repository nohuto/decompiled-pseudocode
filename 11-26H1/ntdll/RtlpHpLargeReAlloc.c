/*
 * XREFs of RtlpHpLargeReAlloc @ 0x180089604
 * Callers:
 *     RtlpHpReAllocateHeapSlow @ 0x1800B0E90 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x1800B11E4 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x180074A54 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x180089C88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHeapLogRangeRelease @ 0x18008A90C (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x18011D928 (RtlpHpVaMgrCtxDecommit.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(__m128i *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 Metadata; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int8 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  bool v24; // zf
  char v25; // r9
  int v26; // eax
  __int64 v27; // rbx
  unsigned __int64 v29; // xmm1_8
  unsigned __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]
  unsigned __int64 v32; // [rsp+40h] [rbp-38h]
  __int16 v33; // [rsp+88h] [rbp+10h]
  unsigned __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v33 = a2;
  v4 = *(_QWORD *)(a4 + 8);
  v5 = 0LL;
  LODWORD(v34) = 0;
  v7 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(v4 + 4095) >> 12;
  v11 = (v7 + 4095) >> 12;
  v32 = v11 << 12;
  if ( v11 << 12 >= v7 )
  {
    if ( v11 > v8
      || (v12 = a1->m128i_i64[0], BYTE1(a1->m128i_i64[0]) >= 2u) && (v12 & 6) == 0
      || (a1[1].m128i_i32[1] & 0x4000000) != 0 )
    {
      if ( (a2 & 0x10000000) == 0 )
        return RtlpHpReallocMove(a1, a3, a4, a2);
    }
    else
    {
      RtlpHpLargeLockAcquire(a1);
      Metadata = RtlpHpLargeAllocGetMetadata((__int64)a1, a3);
      v14 = Metadata;
      if ( Metadata )
      {
        v15 = *(_QWORD *)(Metadata + 32) & 0xFFFLL;
        v16 = ((*(_QWORD *)(Metadata + 32) >> 12) + ((*(_QWORD *)(Metadata + 32) >> 1) & 1LL)) << 12;
        v31 = (1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
            - (((1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F)) - 1) & ((1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
                                                                                           + v16
                                                                                           - 1))
            + v16
            - 1;
        *(_QWORD *)(Metadata + 32) = (v11 << 12) | v15;
        *(_WORD *)(Metadata + 24) = ((_WORD)v11 << 12) - *(_WORD *)(a4 + 24);
        RtlReleaseSRWLockExclusive(a1[4].m128i_i64);
        if ( *(_DWORD *)(a4 + 16) )
        {
          v18 = a3 + *(_QWORD *)a4 + 16;
          if ( (v33 & 0x2000) == 0 )
            v18 = a3 + *(_QWORD *)a4;
          v19 = (unsigned __int8 *)((v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
          v20 = a3 + *(_QWORD *)(a4 + 24) + 16;
          if ( (v33 & 0x2000) == 0 )
            v20 = a3 + *(_QWORD *)(a4 + 24);
          memmove((void *)((v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v19, 16 * (v19[3] + 1LL));
        }
        if ( v11 < v8 )
        {
          v21 = v31 - ((a3 + ((v11 + ((*(_DWORD *)(v14 + 32) >> 1) & 1)) << 12) + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
          v30 = (a3 + ((v11 + ((*(_DWORD *)(v14 + 32) >> 1) & 1)) << 12) + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
          v34 = v21 + a3;
          if ( v21 + a3 )
          {
            RtlpHpVaMgrCtxFree(&unk_1801C7908, &v30, &v34, v17);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 )
              RtlpHpTlLogVAChange(0x8000LL, v34, v30, 0LL);
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v22 = (__int64)NtCurrentPeb()->SharedData + 558;
          else
            v22 = 2147353480LL;
          if ( *(_BYTE *)v22 )
            RtlpHeapLogRangeRelease(a1, v30, v34);
          v23 = v34 >> 12;
          v24 = v30 == a3 + v32;
          v31 -= v34;
          v34 = v30 - (a3 + v32);
          v30 = a3 + v32;
          if ( !v24 )
          {
            v25 = _mm_cvtsi128_si32(_mm_srli_si128(*a1, 1));
            if ( (unsigned __int8)(v25 - 2) <= 2u )
            {
              RtlpHpVaMgrCtxDecommit(&unk_1801C7908);
            }
            else
            {
              if ( v25 == 5 )
              {
                v29 = _mm_srli_si128(*a1, 8).m128i_u64[0];
                v26 = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64 *, unsigned __int64 *, int))(*(_QWORD *)(v29 + 16) ^ v29 ^ RtlpHpHeapGlobals))(
                        RtlpHpHeapGlobals ^ *(_QWORD *)v29 ^ v29,
                        -1LL,
                        &v30,
                        &v34,
                        0x4000);
              }
              else
              {
                v26 = ZwFreeVirtualMemory(-1LL, &v30, &v34, 0x4000LL);
              }
              LODWORD(v5) = v26;
            }
            if ( (RtlpHpHeapFeatures & 0x10) != 0 )
              RtlpHpTlLogVAChange(0x4000LL, v34, v30, (unsigned int)v5);
          }
          _BitScanForward64((unsigned __int64 *)&v27, v31);
          if ( v27 != ((*(_DWORD *)(v14 + 32) >> 2) & 0x3F) )
          {
            RtlpHpLargeLockAcquire(a1);
            *(_QWORD *)(v14 + 32) = (4 * v27) ^ (*(_QWORD *)(v14 + 32) ^ (4 * v27)) & 0xFFFFFFFFFFFFFF03uLL;
            RtlReleaseSRWLockExclusive(a1[4].m128i_i64);
          }
          _InterlockedAdd64(a1[6].m128i_i64, v11 - v8);
          _InterlockedAdd64(&a1[5].m128i_i64[1], -(__int64)v23);
        }
        return a3;
      }
      else
      {
        RtlReleaseSRWLockExclusive(a1[4].m128i_i64);
        return -1LL;
      }
    }
  }
  return v5;
}
