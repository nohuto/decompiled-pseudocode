/*
 * XREFs of ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x140235B14
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8368 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

struct _UMPDHEAP *__fastcall UMPDOBJ::CreateUMPDHeap(UMPDOBJ *this)
{
  __int64 v1; // rbx
  struct _UMPDHEAP *result; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = this;
  v1 = Win32AllocPoolZInit(32LL, 1886221639LL);
  if ( v1 )
  {
    BaseAddress = 0LL;
    RegionSize = 0x400000LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) >= 0 )
    {
      *(_QWORD *)v1 = BaseAddress;
      result = (struct _UMPDHEAP *)v1;
      *(_DWORD *)(v1 + 24) = 0;
      return result;
    }
    Win32FreePool((void *)v1);
  }
  return 0LL;
}
