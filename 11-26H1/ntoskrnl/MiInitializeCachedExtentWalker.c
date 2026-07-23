/*
 * XREFs of MiInitializeCachedExtentWalker @ 0x1404FDCAC
 * Callers:
 *     MiTransferFileExtent @ 0x1404FDB1C (MiTransferFileExtent.c)
 *     MiGetCachedExtentWalkerNextPage @ 0x1406FEE98 (MiGetCachedExtentWalkerNextPage.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiLocateCachedExtent @ 0x14050B884 (MiLocateCachedExtent.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeCachedExtentWalker(__int64 a1, struct _KTHREAD *a2, __int64 a3, int a4)
{
  unsigned __int64 *p_WaitListHead; // r15
  volatile LONG *v5; // rdi
  unsigned __int64 v9; // rsi
  KIRQL v10; // bp
  __int64 CachedExtent; // rax
  __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  int v19; // [rsp+88h] [rbp+10h]

  p_WaitListHead = (unsigned __int64 *)&a2->Header.WaitListHead;
  v5 = (volatile LONG *)(*(_QWORD *)&a2->Header.Lock + 72LL);
  v19 = 1;
  v9 = 0x8000000000000000uLL;
  while ( 1 )
  {
    v10 = ExAcquireSpinLockShared(v5);
    CachedExtent = MiLocateCachedExtent(a2, a3);
    v12 = CachedExtent;
    if ( CachedExtent )
    {
      if ( *(_QWORD *)(CachedExtent + 32) != 0x8000000000000000uLL )
        break;
    }
    if ( v10 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    else
      ExReleaseSpinLockShared(v5, v10);
    if ( !a4 || !v19 )
    {
      result = 3221225626LL;
      if ( v12 )
      {
        if ( *(_QWORD *)(v12 + 32) == 0x8000000000000000uLL )
          return 3221227273LL;
      }
      return result;
    }
    p_WaitListHead = (unsigned __int64 *)&a2->Header.WaitListHead;
    result = MiAllocateFileExtents(a2, 2, 0LL);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        return result;
    }
    else
    {
      v19 = 0;
    }
  }
  v14 = *p_WaitListHead;
  *(_DWORD *)(a1 + 32) = a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v15 = MiStartingOffset((__int64 *)&a2->Header.Lock, v14, 0xFFFFFFFF);
  v16 = *(_QWORD *)(v12 + 32);
  v17 = (a3 - v15) >> 12;
  if ( v16 == 0x8000000000000000uLL )
  {
    v18 = 0x8000000000000000uLL;
  }
  else
  {
    v9 = v16 + *(_QWORD *)(v12 + 40);
    v18 = v16 + (unsigned int)v17 - (unsigned __int64)*(unsigned int *)(v12 + 24);
  }
  *(_QWORD *)(a1 + 16) = v18;
  *(_QWORD *)(a1 + 24) = v9;
  if ( v10 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v5);
  else
    ExReleaseSpinLockShared(v5, v10);
  return 0LL;
}
