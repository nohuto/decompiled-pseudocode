/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x180145910
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  unsigned __int64 Heap_0; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  bool v11; // r8
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax

  Heap_0 = RtlAllocateHeap_0();
  RtlAcquireSRWLockExclusive(&RtlpPtrTreeLock, v9);
  v10 = RtlpPtrTree;
  if ( (qword_1801C60A8 & 1) != 0 )
  {
    if ( !RtlpPtrTree )
    {
      v11 = 0;
      goto LABEL_8;
    }
    v10 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  }
  v11 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( a1 - *(_QWORD *)(v10 + 24) >= 0 )
      {
        if ( a1 - *(_QWORD *)(v10 + 24) <= 0 )
        {
          v15 = *(_QWORD *)(v10 + 32);
          if ( !a3 || v15 == *a3 )
            *(_QWORD *)(v10 + 32) = a2;
          v13 = 0x40000000;
LABEL_24:
          if ( a4 )
            *a4 = v15;
          goto LABEL_26;
        }
        v14 = *(_QWORD *)(v10 + 8);
        if ( !v14 || (v12 = v10 ^ v14) == 0 )
        {
          v11 = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)v10 )
          break;
        v12 = v10 ^ *(_QWORD *)v10;
        if ( !v12 )
          break;
      }
      v10 = v12;
    }
  }
LABEL_8:
  if ( Heap_0 )
  {
    *(_QWORD *)(Heap_0 + 24) = a1;
    *(_QWORD *)(Heap_0 + 32) = a2;
    RtlRbInsertNodeEx((unsigned __int64 *)&RtlpPtrTree, v10, v11, Heap_0);
    if ( a3 )
      v15 = *a3;
    else
      v15 = 0LL;
    Heap_0 = 0LL;
    v13 = 0;
    goto LABEL_24;
  }
  v13 = -1073741670;
LABEL_26:
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( Heap_0 )
    RtlFreeHeap_0();
  return v13;
}
