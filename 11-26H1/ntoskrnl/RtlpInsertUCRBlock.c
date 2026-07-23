/*
 * XREFs of RtlpInsertUCRBlock @ 0x1406202F4
 * Callers:
 *     RtlpCreateUCREntry @ 0x14061EB90 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpFindUCREntry @ 0x140628F60 (RtlpFindUCREntry.c)
 */

void __fastcall RtlpInsertUCRBlock(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 UCREntry; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // rbx
  __int64 v11; // rax
  struct _KLOCK_ENTRIES *v12; // r9

  v4 = a2[5];
  if ( v4 )
  {
    UCREntry = RtlpFindUCREntry(a1, v4);
    v6 = *(__int64 **)(UCREntry + 8);
    if ( *v6 == UCREntry )
    {
      *a2 = UCREntry;
      a2[1] = (__int64)v6;
      *v6 = (__int64)a2;
      *(_QWORD *)(UCREntry + 8) = a2;
    }
    else
    {
      RtlpLogHeapFailure(0xDu, 0LL, UCREntry, 0LL, *v6, 0LL);
    }
  }
  v7 = *((unsigned __int8 *)a2 - 2);
  if ( (_BYTE)v7 )
    v8 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = (_QWORD *)(v8 + 96);
  v10 = a2 + 2;
  v11 = *(_QWORD *)(v8 + 96);
  v12 = *(struct _KLOCK_ENTRIES **)(v11 + 8);
  if ( v12 == (struct _KLOCK_ENTRIES *)(v8 + 96) )
  {
    *v10 = v11;
    v10[1] = v9;
    *(_QWORD *)(v11 + 8) = v10;
    *v9 = v10;
  }
  else
  {
    RtlpLogHeapFailure(0xDu, 0LL, (__int64)v9, v12, 0LL, 0LL);
  }
}
