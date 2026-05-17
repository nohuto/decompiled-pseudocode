/*
 * XREFs of RtlpHpHeapExtendContext @ 0x18008E320
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x18008E310 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataCommit @ 0x18008DCD8 (RtlpHpMetadataCommit.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18008E480 (RtlAcquireReleaseSRWLockExclusive.c)
 */

unsigned __int64 __fastcall RtlpHpHeapExtendContext(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int16 v13; // ax
  __m128i v14; // xmm0
  unsigned __int64 v15; // rdi
  int v16; // eax
  __m128i v17[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __m128i *v19; // [rsp+68h] [rbp+10h] BYREF

  v2 = (volatile signed __int64 *)(a1 + 232);
  v18 = 0LL;
  RtlAcquireReleaseSRWLockExclusive(a1 + 232);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 + 240);
      v7 = v6 + a2;
      if ( v6 + a2 < v6 )
        return 0LL;
      if ( v7 > *(_QWORD *)(a1 + 248) )
        break;
      if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 240), v7, v6) )
        return v6;
    }
    RtlAcquireSRWLockExclusive(v2, v5);
    v9 = *(_QWORD *)(a1 + 240);
    v10 = v9 + a2;
    if ( v9 + a2 < v9 || v10 > *(_QWORD *)(a1 + 256) )
      break;
    v11 = *(_QWORD *)(a1 + 248);
    if ( v10 > v11 )
    {
      v12 = v10 - v11;
      v18 = *(_QWORD *)(a1 + 248);
      v13 = *(_WORD *)(a1 + 30);
      v14 = *(__m128i *)a1;
      v15 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v19 = (__m128i *)v15;
      v17[0] = v14;
      if ( (v13 & 1) != 0 )
      {
        v16 = RtlpHpMetadataCommit(a1, v18, v15, v17, 1);
      }
      else
      {
        v16 = RtlpHpAllocVA(&v18, &v19, 0LL, 0x1000u, 4u, v17);
        v15 = (unsigned __int64)v19;
      }
      if ( v16 < 0 )
        break;
      *(_QWORD *)(a1 + 248) += v15;
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 136), v15 >> 12);
    }
    RtlReleaseSRWLockExclusive(v2);
  }
  v6 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v6;
}
