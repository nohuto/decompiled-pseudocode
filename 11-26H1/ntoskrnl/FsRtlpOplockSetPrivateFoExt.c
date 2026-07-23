/*
 * XREFs of FsRtlpOplockSetPrivateFoExt @ 0x14030C978
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x14030C928 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpOplockSetPrivateFoExt(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rdi
  unsigned __int64 v4; // r15
  char v5; // r14
  unsigned int v6; // ebx
  _QWORD *v7; // rdx
  _OWORD *v8; // rax
  __int64 *Pool2; // rbp

  v2 = *(__int64 **)(a1 + 208);
  v4 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  if ( a2 )
    v4 = a2;
  v5 = 0;
  if ( v2 )
  {
    if ( v2 == qword_1400137E0 )
      return (unsigned int)-1073741670;
    v6 = 0;
LABEL_6:
    v7 = (_QWORD *)v2[7];
    if ( v7 )
      goto LABEL_9;
    v8 = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&IopOplockFoExtLookasideList);
    v7 = v8;
    if ( v8 )
    {
      v5 = 1;
      *v8 = 0LL;
      v8[1] = 0LL;
      v8[2] = 0LL;
LABEL_9:
      v7[5] = v4;
      if ( v5 )
      {
        if ( _InterlockedCompareExchange64(v2 + 7, (signed __int64)v7, 0LL) )
        {
          v6 = -1073741823;
          ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&IopOplockFoExtLookasideList, v7);
        }
        else
        {
          return 0;
        }
      }
      return v6;
    }
    return (unsigned int)-1073741670;
  }
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
  v2 = Pool2;
  v6 = Pool2 == 0LL ? 0xC000009A : 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
  {
    if ( Pool2 && Pool2 != qword_1400137E0 )
      ExFreePoolWithTag(Pool2, 0);
    v2 = *(__int64 **)(a1 + 208);
  }
  if ( Pool2 )
    goto LABEL_6;
  return v6;
}
