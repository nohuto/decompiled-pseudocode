/*
 * XREFs of RtlpRemoveUCRBlock @ 0x1406203C4
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14061F4D4 (RtlpFindAndCommitPages.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpRemoveUCRBlock(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 *v5; // rcx
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rcx
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdx

  v2 = (__int64)(a2 + 2);
  v4 = a2[2];
  v5 = (__int64 *)a2[3];
  v6 = *(struct _KLOCK_ENTRIES **)(v4 + 8);
  v7 = *v5;
  if ( (struct _KLOCK_ENTRIES *)*v5 == v6 && v7 == v2 )
  {
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  else
  {
    RtlpLogHeapFailure(0xDu, 0LL, v2, v6, v7, 0LL);
  }
  if ( a2[5] )
  {
    v8 = *a2;
    v9 = (__int64 *)a2[1];
    v10 = *(struct _KLOCK_ENTRIES **)(*a2 + 8);
    v11 = *v9;
    if ( (struct _KLOCK_ENTRIES *)*v9 == v10 && (__int64 *)v11 == a2 )
    {
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
    }
    else
    {
      RtlpLogHeapFailure(0xDu, 0LL, (__int64)a2, v10, v11, 0LL);
    }
  }
}
