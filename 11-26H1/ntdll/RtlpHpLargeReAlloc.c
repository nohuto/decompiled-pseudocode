/*
 * XREFs of RtlpHpLargeReAlloc @ 0x1800710A8
 * Callers:
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x180080D58 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapLogRangeRelease @ 0x18006DD44 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x18006F198 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpLargeLockAcquire @ 0x18007100C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x180095038 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x18011D6D8 (RtlpHpVaMgrCtxDecommit.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(_RTL_SRWLOCK *BaseAddress, int a2, char *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v11; // rsi
  _RTL_SRWLOCK v12; // rcx
  __int64 Metadata; // rax
  __int64 v14; // r13
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int8 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  ULONG_PTR v22; // r12
  bool v23; // zf
  char *v24; // r8
  char v25; // r9
  NTSTATUS v26; // eax
  __int64 v27; // rbx
  unsigned __int64 v29; // xmm1_8
  PVOID BaseAddressa; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]
  unsigned __int64 v32; // [rsp+40h] [rbp-38h]
  __int16 v33; // [rsp+88h] [rbp+10h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF

  v33 = a2;
  v4 = *(_QWORD *)(a4 + 8);
  v5 = 0LL;
  LODWORD(RegionSize) = 0;
  v7 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(v4 + 4095) >> 12;
  v11 = (v7 + 4095) >> 12;
  v32 = v11 << 12;
  if ( v11 << 12 >= v7 )
  {
    if ( v11 > v8
      || (v12.0 = ($2F38BEDF952D5DA5F266621B11247D04)BaseAddress->Value, BYTE1(BaseAddress->Value) >= 2u)
      && (*(_BYTE *)&v12.0 & 6) == 0
      || (HIDWORD(BaseAddress[2].Ptr) & 0x4000000) != 0 )
    {
      if ( (a2 & 0x10000000) == 0 )
        return RtlpHpReallocMove(BaseAddress, a3);
    }
    else
    {
      RtlpHpLargeLockAcquire(BaseAddress);
      Metadata = RtlpHpLargeAllocGetMetadata(BaseAddress, a3);
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
        RtlReleaseSRWLockExclusive(BaseAddress + 8);
        if ( *(_DWORD *)(a4 + 16) )
        {
          v17 = (__int64)&a3[*(_QWORD *)a4 + 16];
          if ( (v33 & 0x2000) == 0 )
            v17 = (__int64)&a3[*(_QWORD *)a4];
          v18 = (unsigned __int8 *)((v17 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
          v19 = (__int64)&a3[*(_QWORD *)(a4 + 24) + 16];
          if ( (v33 & 0x2000) == 0 )
            v19 = (__int64)&a3[*(_QWORD *)(a4 + 24)];
          memmove((void *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v18, 16 * (v18[3] + 1LL));
        }
        if ( v11 < v8 )
        {
          v20 = v31
              - ((unsigned __int64)&a3[4096 * (v11 + ((*(_DWORD *)(v14 + 32) >> 1) & 1)) + 0xFFFFF] & 0xFFFFFFFFFFF00000uLL);
          BaseAddressa = (PVOID)((unsigned __int64)&a3[4096 * (v11 + ((*(_DWORD *)(v14 + 32) >> 1) & 1)) + 0xFFFFF] & 0xFFFFFFFFFFF00000uLL);
          RegionSize = (ULONG_PTR)&a3[v20];
          if ( &a3[v20] )
          {
            RtlpHpVaMgrCtxFree((__int64)&unk_1801C6958, &BaseAddressa, &RegionSize);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 )
              RtlpHpTlLogVAChange(0x8000, RegionSize, (__int64)BaseAddressa, 0);
          }
          if ( RtlGetCurrentServiceSessionId() )
            v21 = (__int64)NtCurrentPeb()->SharedData + 558;
          else
            v21 = 2147353480LL;
          if ( *(_BYTE *)v21 )
            RtlpHeapLogRangeRelease((__int64)BaseAddress, (__int64)BaseAddressa, RegionSize);
          v22 = RegionSize >> 12;
          v24 = (char *)((_BYTE *)BaseAddressa - &a3[v32]);
          v23 = BaseAddressa == &a3[v32];
          v31 -= RegionSize;
          RegionSize = (ULONG_PTR)v24;
          BaseAddressa = &a3[v32];
          if ( !v23 )
          {
            v25 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&BaseAddress->0, 1));
            if ( (unsigned __int8)(v25 - 2) <= 2u )
            {
              RtlpHpVaMgrCtxDecommit(&unk_1801C6958, &a3[v32], v24);
            }
            else
            {
              if ( v25 == 5 )
              {
                v29 = _mm_srli_si128(*(__m128i *)&BaseAddress->0, 8).m128i_u64[0];
                v26 = ((__int64 (__fastcall *)(unsigned __int64, __int64, PVOID *, ULONG_PTR *, int))(*(_QWORD *)(v29 + 16) ^ v29 ^ RtlpHpHeapGlobals))(
                        RtlpHpHeapGlobals ^ *(_QWORD *)v29 ^ v29,
                        -1LL,
                        &BaseAddressa,
                        &RegionSize,
                        0x4000);
              }
              else
              {
                v26 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x4000u);
              }
              LODWORD(v5) = v26;
            }
            if ( (RtlpHpHeapFeatures & 0x10) != 0 )
              RtlpHpTlLogVAChange(0x4000, RegionSize, (__int64)BaseAddressa, v5);
          }
          _BitScanForward64((unsigned __int64 *)&v27, v31);
          if ( v27 != ((*(_DWORD *)(v14 + 32) >> 2) & 0x3F) )
          {
            RtlpHpLargeLockAcquire(BaseAddress);
            *(_QWORD *)(v14 + 32) = (4 * v27) ^ (*(_QWORD *)(v14 + 32) ^ (4 * v27)) & 0xFFFFFFFFFFFFFF03uLL;
            RtlReleaseSRWLockExclusive(BaseAddress + 8);
          }
          _InterlockedAdd64((volatile signed __int64 *)&BaseAddress[12], v11 - v8);
          _InterlockedAdd64((volatile signed __int64 *)&BaseAddress[11], -(__int64)v22);
        }
        return (__int64)a3;
      }
      else
      {
        RtlReleaseSRWLockExclusive(BaseAddress + 8);
        return -1LL;
      }
    }
  }
  return v5;
}
