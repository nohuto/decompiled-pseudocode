/*
 * XREFs of RtlpHpLargeFree @ 0x14035645C
 * Callers:
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403546B4 (RtlpHpAllocateHeapSlow.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x140351F7C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1403565A0 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x140356600 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLargeLockRelease @ 0x140356624 (RtlpHpLargeLockRelease.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int128 *a1, __int64 a2)
{
  char v4; // r14
  _RTL_BALANCED_NODE *Metadata; // rax
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
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1, a2);
  v7 = 0LL;
  v8 = (__int64)Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)((char *)a1 + 72), Metadata);
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
      RtlpHpVaMgrCtxFree((__int64)&ExpUuidLock.TrapFrame, &v15, &v16);
      v7 = v16;
    }
    _InterlockedAdd64((volatile signed __int64 *)a1 + 12, -(*(_QWORD *)(v8 + 32) >> 12));
    _InterlockedAdd64((volatile signed __int64 *)a1 + 11, -(__int64)(v7 >> 12));
    v14 = *a1;
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
