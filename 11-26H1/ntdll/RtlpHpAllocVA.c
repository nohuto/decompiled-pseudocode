/*
 * XREFs of RtlpHpAllocVA @ 0x18006EF50
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18006EA9C (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapExtendContext @ 0x1800E6C10 (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x1800E6ECC (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTlLogVAChange @ 0x18006F198 (RtlpHpTlLogVAChange.c)
 *     RtlpHpEnvAllocVA @ 0x18006F2D0 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrAlloc @ 0x18006F7E8 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x1800705AC (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011D310 (RtlpHpVaMgrCtxCommit.c)
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocVA(
        PVOID *BaseAddress,
        __m128i **a2,
        __int64 a3,
        unsigned int a4,
        ULONG a5,
        __m128i *RegionSize)
{
  __m128i v9; // xmm1
  __int64 v10; // r9
  unsigned int v11; // ecx
  __m128i *v12; // r8
  __int64 v13; // xmm0_8
  int v14; // eax
  __m128i *v15; // r8
  int v16; // ebx
  _RTL_SRWLOCK *v18; // rbp
  void *v19; // rcx
  int v20; // [rsp+28h] [rbp-50h]
  _DWORD v21[3]; // [rsp+50h] [rbp-28h] BYREF
  int v22; // [rsp+5Ch] [rbp-1Ch]
  __int64 v23; // [rsp+60h] [rbp-18h]

  v21[0] = 0;
  v22 = 0;
  v9 = *RegionSize;
  v10 = RegionSize->m128i_i64[0];
  if ( HIBYTE(RegionSize->m128i_u32[0]) )
    v11 = BYTE3(RegionSize->m128i_i64[0]) - 1;
  else
    v11 = -1;
  v21[0] = v11;
  v21[2] = BYTE2(v10);
  v21[1] = BYTE1(v10);
  if ( (v10 & 8) != 0 )
    v22 = 1;
  v12 = *a2;
  v13 = _mm_srli_si128(v9, 8).m128i_u64[0];
  v23 = v13;
  v14 = (_DWORD)v12 - 1;
  if ( a4 == 0x2000 )
  {
    RegionSize = (__m128i *)((char *)v12 - (v14 & 0xFFFFF) + 0xFFFFF);
    if ( v11 == -1 )
    {
      RtlAcquireSRWLockShared(&stru_1801C71B8);
      v18 = (_RTL_SRWLOCK *)RtlpHpVaMgrCtxAllocatorFind(&unk_1801C6958, v21, 0LL, 0LL);
      RtlReleaseSRWLockShared(&stru_1801C71B8);
    }
    else
    {
      v18 = (_RTL_SRWLOCK *)((char *)&unk_1801C71C8 + 48 * v11);
    }
    v19 = (void *)RtlpHpVaMgrAlloc(v18);
    if ( v19 )
    {
      *a2 = RegionSize;
      *BaseAddress = v19;
      goto LABEL_9;
    }
    v16 = -1073741670;
  }
  else
  {
    v15 = (__m128i *)((char *)v12 - (v14 & 0xFFF) + 4095);
    RegionSize = v15;
    if ( (unsigned __int8)(_mm_cvtsi128_si32(_mm_srli_si128(v9, 1)) - 2) > 2u )
    {
      v16 = RtlpHpEnvAllocVA(BaseAddress, (PSIZE_T)&RegionSize, a5, v20, BYTE1(v10), v13);
      if ( v16 < 0 )
        goto LABEL_10;
      goto LABEL_8;
    }
    v16 = RtlpHpVaMgrCtxCommit(&unk_1801C6958, *BaseAddress, v15, a5);
    if ( v16 >= 0 )
    {
      if ( (a4 & 0x40000000) != 0 )
        RtlHeapZero(*BaseAddress, RegionSize);
LABEL_8:
      *a2 = RegionSize;
LABEL_9:
      v16 = 0;
    }
  }
LABEL_10:
  if ( (RtlpHpHeapFeatures & 0x10) != 0 )
    RtlpHpTlLogVAChange(a4, *a2, *BaseAddress, (unsigned int)v16);
  return (unsigned int)v16;
}
