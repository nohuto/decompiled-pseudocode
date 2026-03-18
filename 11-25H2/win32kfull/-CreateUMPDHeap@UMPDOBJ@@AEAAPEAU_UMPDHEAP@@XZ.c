/*
 * XREFs of ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x14020DEE0
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D2FC0 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     <none>
 */

struct _UMPDHEAP *__fastcall UMPDOBJ::CreateUMPDHeap(UMPDOBJ *this)
{
  _DWORD *v1; // rbx
  PVOID v3; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = this;
  v1 = (_DWORD *)Win32AllocPoolZInit(32LL, 1886221639LL);
  if ( !v1 )
    return 0LL;
  BaseAddress = 0LL;
  RegionSize = 0x400000LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
  {
    Win32FreePool(v1);
    return 0LL;
  }
  v3 = BaseAddress;
  v1[6] = 0;
  *(_QWORD *)v1 = v3;
  return (struct _UMPDHEAP *)v1;
}
