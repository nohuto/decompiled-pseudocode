/*
 * XREFs of HalpPmemErrorDeferredRecovery @ 0x140591B1C
 * Callers:
 *     HalpGenericErrorSourceRecovery @ 0x140591650 (HalpGenericErrorSourceRecovery.c)
 * Callees:
 *     HalpAcquireDrsPool @ 0x1405914EC (HalpAcquireDrsPool.c)
 *     HalpFreeDrsPool @ 0x14059161C (HalpFreeDrsPool.c)
 *     WheaRequestDeferredRecovery @ 0x1406DAE00 (WheaRequestDeferredRecovery.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpPmemErrorDeferredRecovery(_DWORD *Src)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  size_t v4; // r14
  void *Pool2; // rax
  void *v6; // rsi

  v2 = 0;
  v3 = HalpAcquireDrsPool();
  if ( v3 )
  {
    v4 = (unsigned int)(24 * Src[21] + 88);
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, Src, v4);
      *(_QWORD *)(v3 + 48) = v6;
      *(_QWORD *)(v3 + 64) = 0LL;
      *(_QWORD *)(v3 + 6232) = 0LL;
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 76) = 2;
      *(_DWORD *)(v3 + 80) = 1;
      *(_DWORD *)(v3 + 92) = 0;
      *(_QWORD *)(v3 + 100) = 0LL;
      if ( !(unsigned __int8)WheaRequestDeferredRecovery(v3 + 8, v3 + 48) )
      {
        HalpFreeDrsPool((_DWORD *)v3);
        v2 = -1073741757;
        ExFreePoolWithTag(v6, 0x576C6148u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741757;
  }
  return v2;
}
