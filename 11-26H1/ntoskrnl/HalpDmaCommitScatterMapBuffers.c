/*
 * XREFs of HalpDmaCommitScatterMapBuffers @ 0x1403549F4
 * Callers:
 *     HalpDmaAllocateLocalScatterPool @ 0x140782CB0 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B30E5C (HalpDmaGrowScatterMapBuffers.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     HalpDmaPrependTranslations @ 0x1403549D0 (HalpDmaPrependTranslations.c)
 *     HalpDmaGetTranslationEntries @ 0x140356738 (HalpDmaGetTranslationEntries.c)
 */

__int64 __fastcall HalpDmaCommitScatterMapBuffers(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  _QWORD *v8; // r14
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // r13
  _QWORD *v13; // rdx
  __int64 v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // rax
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
    v12 = *(unsigned __int8 *)(a1 + 152);
    v13 = (_QWORD *)result;
    if ( (_DWORD)v9 )
    {
      v14 = (unsigned int)v9;
      do
      {
        v15 = v8;
        v16 = a3;
        if ( a5 )
          v16 = *v8 << 12;
        else
          a3 += 4096LL;
        ++v8;
        *v13 = v16;
        if ( !a5 )
          v8 = v15;
        if ( a2 )
        {
          v13[6] = a2 | v13[6] & 0xFFF;
          a2 += 4096LL;
        }
        v13[6] = (4 * (_BYTE)v12) & 4 ^ (v12 & 0xFFFFFFFFFFFFFFFBuLL ^ (v13[6] ^ v12) & 0xFFFFFFFFFFFFFFFAuLL | 2) | 8;
        v13 = (_QWORD *)v13[1];
        --v14;
      }
      while ( v14 );
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v17 = HalpDmaPrependTranslations(v11, v9, *(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 40) += v9;
    *(_QWORD *)(a1 + 32) = v17;
    if ( (_BYTE)v12 )
      *(_DWORD *)(a1 + 216) += v9;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v11;
  }
  return result;
}
