/*
 * XREFs of RtlpHpLfhContextSlotStandbyProcess @ 0x140349DA0
 * Callers:
 *     RtlpHpLfhContextSlotAllocate @ 0x140348DE8 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x1403497A0 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x14034B470 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140532FB0 (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhContextLockExtension @ 0x14053398C (RtlpHpLfhContextLockExtension.c)
 */

_QWORD *__fastcall RtlpHpLfhContextSlotStandbyProcess(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char v3; // r15
  _QWORD *result; // rax
  char v6; // al
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  unsigned __int8 *v10; // rbp
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  char v14; // al
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = a2;
  v17[1] = v17;
  result = v17;
  v17[0] = v17;
  if ( *(_QWORD *)(a1 + 160) )
  {
    do
    {
      v6 = RtlpHpLfhContextLockExtension(a1, a2);
      v8 = *(_QWORD **)(a1 + 160);
      if ( v8 )
        *(_QWORD *)(a1 + 160) = *v8;
      LOBYTE(v7) = v6;
      result = (_QWORD *)RtlpHpLfhContextUnlockExtension(a1, v7);
      if ( !v8 )
        break;
      v9 = v8 - 2;
      v10 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v8 - 7) << 6));
      RtlpHpLfhOwnerFreeListProcess(a1, v8 - 2, v17, 0LL);
      if ( (v3 & 1) != 0 )
      {
        v12 = 8LL;
      }
      else
      {
        v11 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v10);
        v12 = 4LL;
        if ( v11 >= 1 )
          v12 = 8LL;
      }
      RtlpHpLfhBucketAddSubsegment(a1, v10, v17, v12);
      result = v8 + 3;
      if ( (_QWORD *)*result == result )
      {
        LOBYTE(v13) = RtlpHpLfhContextLockExtension(a1, a2);
        *v9 = *(_QWORD *)(a1 + 152);
        *(_QWORD *)(a1 + 152) = v9;
        result = (_QWORD *)RtlpHpLfhContextUnlockExtension(a1, v13);
      }
      else
      {
        *v8 = v2;
        v2 = v8;
      }
    }
    while ( *(_QWORD *)(a1 + 160) );
    if ( v2 )
    {
      v14 = RtlpHpLfhContextLockExtension(a1, a2);
      v15 = *(_QWORD **)(a1 + 160);
      do
      {
        v16 = (_QWORD *)*v2;
        *v2 = v15;
        v15 = v2;
        *(_QWORD *)(a1 + 160) = v2;
        v2 = v16;
      }
      while ( v16 );
      LOBYTE(v15) = v14;
      return (_QWORD *)RtlpHpLfhContextUnlockExtension(a1, v15);
    }
  }
  return result;
}
