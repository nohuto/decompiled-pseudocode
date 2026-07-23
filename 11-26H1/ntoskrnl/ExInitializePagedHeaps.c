/*
 * XREFs of ExInitializePagedHeaps @ 0x1406D69C4
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     ExCreateHeap @ 0x1406D6934 (ExCreateHeap.c)
 *     RtlpDynamicLookasideInitialize @ 0x140724064 (RtlpDynamicLookasideInitialize.c)
 */

__int64 ExInitializePagedHeaps()
{
  unsigned int v0; // edi
  bool v1; // si
  __int64 v2; // r15
  int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF

  v0 = 0;
  v11 = 0LL;
  v1 = byte_140FC8BD8 == 0;
  while ( 1 )
  {
    v10 = 0LL;
    LOBYTE(v10) = 2;
    if ( v0 >= HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink) )
      break;
    BYTE2(v10) = v0;
    v2 = 8384LL * v0;
    v3 = ExCreateHeap(&v10, 0x400000LL, &v11);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v4 = v11;
    if ( HIDWORD(ExSaPageGroupDescriptorArrayLock.InitialStack) )
    {
      *(_BYTE *)(v11 + 333) |= 8u;
      *(_BYTE *)(v4 + 525) |= 8u;
    }
    *(_QWORD *)((char *)&ExpUuidLock + v2 + 14792) = v4;
    RtlpDynamicLookasideInitialize((char *)&ExpUuidLock + v2 + 14840);
    if ( v1 )
      *(_QWORD *)(v4 + 56) = (char *)&ExpUuidLock + v2 + 14840;
    v10 = 0LL;
    BYTE2(v10) = v0;
    LOBYTE(v10) = 10;
    v3 = ExCreateHeap(&v10, 0x400000LL, &v11);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v5 = v11;
    *(_QWORD *)((char *)&ExpUuidLock + v2 + 14800) = v11;
    *(_BYTE *)(v5 + 333) |= 8u;
    *(_BYTE *)(v5 + 525) |= 8u;
    ++v0;
  }
  v3 = ExCreateHeap(&v10, 0x400000LL, &v11);
  if ( v3 >= 0 )
  {
    v6 = v11;
    v10 = 0LL;
    LOBYTE(v10) = 10;
    v7 = v10;
    *(_BYTE *)(v11 + 333) |= 8u;
    *(_BYTE *)(v6 + 525) |= 8u;
    qword_140EEF010 = v6;
    v10 = v7;
    v3 = ExCreateHeap(&v10, 0x400000LL, &v11);
    if ( v3 >= 0 )
    {
      v8 = v11;
      *(_BYTE *)(v11 + 333) |= 8u;
      *(_BYTE *)(v8 + 525) |= 8u;
      qword_140EEF018 = v8;
    }
  }
  return (unsigned int)v3;
}
