/*
 * XREFs of RtlpHpLargeFree @ 0x1403546B4
 * Callers:
 *     RtlpHpFreeHeap @ 0x140347010 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataFree @ 0x1403524BC (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x140352630 (RtlpHpAllocateHeapSlow.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x14034FEFC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpMetadataFree @ 0x1403524BC (RtlpHpMetadataFree.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1403547F8 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x140354858 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLargeLockRelease @ 0x14035487C (RtlpHpLargeLockRelease.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(volatile signed __int64 *a1, __int64 a2)
{
  char v4; // r14
  __int64 Metadata; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  char v11; // cl
  __int64 v12; // r8
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = RtlpHpLargeLockAcquire(a1);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
  v7 = 0LL;
  v8 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode(a1 + 9, Metadata);
    LOBYTE(v9) = v4;
    RtlpHpLargeLockRelease(a1, v9);
    v10 = *(_QWORD *)(v8 + 32);
    v11 = (unsigned __int8)v10 >> 2;
    v12 = ((v10 >> 12) + ((v10 >> 1) & 1)) << 12;
    v15 = (a2 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v7 = a2 + v12 + (1LL << v11) - (((1LL << v11) - 1) & ((1LL << v11) + v12 - 1)) - 1 - v15;
    v16 = v7;
    if ( v7 )
    {
      RtlpHpVaMgrCtxFree((__int64)&ExpUuidLock.FirstArgument, &v15, &v16);
      v7 = v16;
    }
    _InterlockedAdd64(a1 + 12, -(*(_QWORD *)(v8 + 32) >> 12));
    _InterlockedAdd64(a1 + 11, -(__int64)(v7 >> 12));
    v14 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v8, &v14);
  }
  else
  {
    LOBYTE(v6) = v4;
    RtlpHpLargeLockRelease(a1, v6);
    RtlpLogHeapFailure(8, (_DWORD)a1, a2, 0, 0LL, 0LL);
  }
  return v7;
}
