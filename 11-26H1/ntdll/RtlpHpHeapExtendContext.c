/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1800E6C10
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x1800E6C00 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800E6D70 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x1800E7268 (RtlpHpMetadataCommit.c)
 */

unsigned __int64 __fastcall RtlpHpHeapExtendContext(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rsi
  unsigned __int64 Value; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int16 Ptr_high; // ax
  __int128 v13; // xmm0
  unsigned __int64 v14; // rdi
  int v15; // eax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  __m128i *v18; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1 + 29;
  BaseAddress = 0LL;
  RtlAcquireReleaseSRWLockExclusive(a1 + 29);
  while ( 1 )
  {
    while ( 1 )
    {
      Value = a1[30].Value;
      v6 = Value + a2;
      if ( Value + a2 < Value )
        return 0LL;
      if ( v6 > a1[31].Value )
        break;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[30], v6, Value) )
        return Value;
    }
    RtlAcquireSRWLockExclusive(v2);
    v8 = a1[30].Value;
    v9 = v8 + a2;
    if ( v8 + a2 < v8 || v9 > a1[32].Value )
      break;
    v10 = a1[31].Value;
    if ( v9 > v10 )
    {
      v11 = v9 - v10;
      BaseAddress = a1[31].Ptr;
      Ptr_high = HIWORD(a1[3].Ptr);
      v13 = *(_OWORD *)&a1->0;
      v14 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v18 = (__m128i *)v14;
      *(_OWORD *)RegionSize = v13;
      if ( (Ptr_high & 1) != 0 )
      {
        v15 = RtlpHpMetadataCommit((_DWORD)a1, (_DWORD)BaseAddress, v14, (unsigned int)RegionSize, 1);
      }
      else
      {
        v15 = RtlpHpAllocVA(&BaseAddress, &v18, 0LL, 0x1000u, 4u, (__m128i *)RegionSize);
        v14 = (unsigned __int64)v18;
      }
      if ( v15 < 0 )
        break;
      a1[31].Value += v14;
      _InterlockedAdd64((volatile signed __int64 *)&a1[17], v14 >> 12);
    }
    RtlReleaseSRWLockExclusive(v2);
  }
  Value = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return Value;
}
