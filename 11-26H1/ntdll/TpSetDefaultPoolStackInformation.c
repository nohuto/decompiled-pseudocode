/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x180065C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 *     TpSetPoolStackInformation @ 0x180065BF0 (TpSetPoolStackInformation.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18006745C (TpPoolReferenceExistingGlobalPool.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1, __int64 a2)
{
  char v3; // si
  int v4; // ebx
  __int64 v5; // rcx
  _QWORD *Heap_0; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  v3 = 0;
  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  v5 = TppPoolpGlobalPoolStackSize;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock, a2);
    Heap_0 = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap_0 = (_QWORD *)RtlAllocateHeap_0(), (TppPoolpGlobalPoolStackSize = (__int64)Heap_0) != 0) )
    {
      v7 = a1[1];
      if ( Heap_0[1] < v7 )
      {
        Heap_0[1] = v7;
        v3 = 1;
      }
      if ( *Heap_0 < *a1 )
      {
        *Heap_0 = *a1;
        v3 = 1;
      }
    }
    else
    {
      v4 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v4 >= 0 && v3 )
  {
    v8 = TpPoolReferenceExistingGlobalPool(v5);
    if ( v8 )
    {
      v4 = TpSetPoolStackInformation(v8, TppPoolpGlobalPoolStackSize);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v4;
}
