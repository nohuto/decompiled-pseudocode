/*
 * XREFs of ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x14021F638
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::GrowUMPDHeap(UMPDOBJ *this, struct _UMPDHEAP *a2, unsigned int a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rdx
  void *v6; // rdi
  __int64 result; // rax
  void *v8; // rcx
  ULONG_PTR v9; // [rsp+40h] [rbp+8h] BYREF
  PVOID v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = (ULONG_PTR)this;
  v3 = *((_QWORD *)a2 + 2);
  v5 = v3 + a3;
  if ( v5 < v3 )
    return 0LL;
  if ( v5 + 4095 < v5 )
    return 0LL;
  v9 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v9 > 0x400000 )
    return 0LL;
  v10 = *(PVOID *)a2;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v10, 0LL, &v9, 0x1000u, 4u) < 0 )
    return 0LL;
  v6 = GrepSecureVirtualMemory(v10, v9, 4u);
  if ( !v6 )
    return 0LL;
  v8 = (void *)*((_QWORD *)a2 + 1);
  if ( v8 )
    GrepUnsecureVirtualMemory(v8);
  *((_QWORD *)a2 + 2) = v9;
  result = 1LL;
  *((_QWORD *)a2 + 1) = v6;
  return result;
}
