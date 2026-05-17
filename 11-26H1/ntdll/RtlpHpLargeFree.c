/*
 * XREFs of RtlpHpLargeFree @ 0x18008918C
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180019C00 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpFreeHeapSlow @ 0x180089330 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x180074A54 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x180089C88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHeapLogRangeRelease @ 0x18008A90C (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 Metadata; // rax
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  char v7; // cl
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v15 = a2;
  RtlpHpLargeLockAcquire(a1);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, v15);
  v4 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode(a1 + 72, Metadata);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v6 = *(_QWORD *)(v4 + 32);
    v7 = (unsigned __int8)v6 >> 2;
    v8 = ((v6 >> 12) + ((v6 >> 1) & 1)) << 12;
    v9 = v8
       + (1LL << v7)
       - (((1LL << v7) - 1) & ((1LL << v7) + v8 - 1))
       + v15
       - 1
       - ((v15 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v15 = (v15 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v16 = v9;
    if ( v9 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801C7908, &v15, &v16, v5);
      if ( (RtlpHpHeapFeatures & 0x10) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v16, v15, 0LL);
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), -(*(_QWORD *)(v4 + 32) >> 12));
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(v16 >> 12));
    v14 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v4, &v14);
    v10 = v16;
    v11 = v16;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v10 = v16;
      v12 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v12 = 2147353480LL;
    }
    if ( *(_BYTE *)v12 )
      RtlpHeapLogRangeRelease(a1, v15, v10);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlpLogHeapFailure(8, a1, v15, 0, 0LL, 0LL);
    return 0LL;
  }
  return v11;
}
