/*
 * XREFs of HalpDmaCommitScatterMapBuffers @ 0x14035679C
 * Callers:
 *     HalpDmaAllocateLocalScatterPool @ 0x1407857E4 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B3305C (HalpDmaGrowScatterMapBuffers.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     HalpDmaPrependTranslations @ 0x140356778 (HalpDmaPrependTranslations.c)
 *     HalpDmaGetTranslationEntries @ 0x1403584D8 (HalpDmaGetTranslationEntries.c)
 */

__int64 __fastcall HalpDmaCommitScatterMapBuffers(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  _QWORD *v8; // r14
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbp
  char v12; // r13
  _QWORD *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a5 )
  {
    v8 = a5 + 12;
    v9 = (((a5[8] + a5[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a5[10] + 4095) >> 12;
  }
  else
  {
    LODWORD(v9) = a4;
    v8 = 0LL;
  }
  result = HalpDmaGetTranslationEntries(a1, 1LL, (unsigned int)v9);
  v11 = result;
  if ( result )
  {
    v12 = *(_BYTE *)(a1 + 152);
    v13 = (_QWORD *)result;
    if ( (_DWORD)v9 )
    {
      v14 = (unsigned int)v9;
      do
      {
        v15 = a3;
        if ( a5 )
          v15 = *v8 << 12;
        else
          a3 += 4096LL;
        *v13 = v15;
        v16 = v8 + 1;
        if ( !a5 )
          v16 = v8;
        v8 = v16;
        if ( a2 )
        {
          v13[6] = a2 | v13[6] & 0xFFF;
          a2 += 4096LL;
        }
        v13[6] = (4 * v12) & 4 ^ (v13[6] & 0xFFFFFFFFFFFFFFFAuLL ^ v12 & 1 | 2) | 8;
        v13 = (_QWORD *)v13[1];
        --v14;
      }
      while ( v14 );
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v17 = HalpDmaPrependTranslations(v11, v9, *(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 40) += v9;
    *(_QWORD *)(a1 + 32) = v17;
    if ( v12 )
      *(_DWORD *)(a1 + 216) += v9;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v11;
  }
  return result;
}
