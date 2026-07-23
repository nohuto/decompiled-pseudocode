/*
 * XREFs of MiLockMemoryLists @ 0x140708630
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiWalkAllFreeZeroLists @ 0x14041C710 (MiWalkAllFreeZeroLists.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404883BC (MiGetColorHeadHugeRangeBase.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 *     MiAcquireReleaseLock @ 0x1407084D0 (MiAcquireReleaseLock.c)
 */

void __fastcall MiLockMemoryLists(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 i; // r15
  int v7; // r14d
  __int64 v8; // r12
  volatile signed __int32 *ColorHeadHugeRangeBase; // rdi
  unsigned int v10; // r11d
  __int64 v11; // r13
  volatile LONG *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r14
  volatile LONG *v15; // rbx
  volatile LONG *v16; // rbx
  _BOOL8 v17; // rbx
  unsigned int v18; // ebx
  volatile LONG *v19; // rdi
  int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h]

  MiAcquireReleaseLock(a2, (volatile LONG *)(a1 + 7456));
  MiWalkAllFreeZeroLists(a1, (__int64)MiLockMemoryListsCallback, a2);
  v5 = 0;
  v21 = dword_140E2D900[0];
  for ( i = 8LL; v5 < (unsigned __int16)KeNumberNodes; ++v5 )
  {
    v7 = 0;
    v8 = *(_QWORD *)(a1 + 16) + 56320LL * v5;
    do
    {
      ColorHeadHugeRangeBase = (volatile signed __int32 *)MiGetColorHeadHugeRangeBase(v8, v4, v7);
      if ( v10 )
      {
        v11 = v10;
        do
        {
          if ( a2 )
          {
            v20 = 0;
            while ( _interlockedbittestandset64(ColorHeadHugeRangeBase, 3uLL) )
            {
              do
                KeYieldProcessorEx(&v20);
              while ( (*(_QWORD *)ColorHeadHugeRangeBase & 8) != 0 );
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)ColorHeadHugeRangeBase, 0xFFFFFFFFFFFFFFF7uLL);
          }
          ColorHeadHugeRangeBase += 2;
          --v11;
        }
        while ( v11 );
      }
      ++v7;
    }
    while ( v7 <= 1 );
  }
  v12 = (volatile LONG *)(a1 + 3680);
  do
  {
    MiAcquireReleaseLock(a2, v12);
    v12 += 22;
    --i;
  }
  while ( i );
  MiAcquireReleaseLock(a2, (volatile LONG *)(a1 + 4384));
  MiAcquireReleaseLock(a2, (volatile LONG *)(a1 + 4512));
  v13 = 16LL;
  v14 = 16LL;
  v15 = (volatile LONG *)(a1 + 4640);
  do
  {
    MiAcquireReleaseLock(a2, v15);
    v15 += 22;
    --v14;
  }
  while ( v14 );
  v16 = (volatile LONG *)(a1 + 6048);
  do
  {
    MiAcquireReleaseLock(a2, v16);
    v16 += 22;
    --v13;
  }
  while ( v13 );
  v17 = a2 != 0;
  MiEnumerateSlabAllocatorsEx(a1, (__int64)MiLockSlabAllocator, v17, 0xFFFFFFFF, 9u);
  MiEnumerateSlabAllocatorsEx(a1, (__int64)MiLockSlabRepurposedStandbyList, v17, 0xFFFFFFFF, 9u);
  MiAcquireReleaseLock(a2, (volatile LONG *)(a1 + 23392));
  v18 = 0;
  if ( KeNumberNodes )
  {
    v19 = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 14200LL);
    do
    {
      if ( *((_QWORD *)v19 - 1) )
        MiAcquireReleaseLock(a2, v19);
      v19 += 14080;
      ++v18;
    }
    while ( v18 < (unsigned __int16)KeNumberNodes );
  }
}
