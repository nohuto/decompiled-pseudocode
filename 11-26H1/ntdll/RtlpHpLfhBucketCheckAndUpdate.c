/*
 * XREFs of RtlpHpLfhBucketCheckAndUpdate @ 0x180071D60
 * Callers:
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhBucketActivate @ 0x180071E3C (RtlpHpLfhBucketActivate.c)
 */

__int64 __fastcall RtlpHpLfhBucketCheckAndUpdate(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v6; // rsi
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  signed __int64 v11; // [rsp+30h] [rbp+8h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = 8LL * a2 + 448;
  if ( (*(_QWORD *)(v6 + a1) & 1) == 0 )
    v4 = *(_QWORD *)(v6 + a1);
  if ( v4 )
    return v4;
  do
  {
    v7 = *(_QWORD *)(v6 + a1);
    v11 = v7;
    v8 = v7;
    if ( (v7 & 1) == 0 )
      break;
    v4 = BYTE2(v7);
    LOBYTE(v4) = BYTE2(v7) & 0x1F;
    if ( WORD1(v7) > 0xFF00u )
      break;
    if ( (unsigned __int8)v4 > 0x10u )
      break;
    WORD1(v11) = WORD1(v7) + 33;
    v8 = v11;
  }
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + a1), v11, v7) != v7 );
  v9 = v8 >> 16;
  if ( (unsigned __int16)v9 > 0xFF00u || (v9 & 0x1F) > 0x10 )
    RtlpHpLfhBucketActivate(a1, a2, v4);
  if ( (*(_QWORD *)(v6 + a1) & 1) == 0 )
    return *(_QWORD *)(v6 + a1);
  return v3;
}
