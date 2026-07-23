/*
 * XREFs of EtwpCCSwapStart @ 0x140B66BF0
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  unsigned int i; // esi
  __int64 v4; // rbx
  __int64 Pool2; // rax
  unsigned int j; // ebp
  __int64 v7; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  if ( !CCSwapNumLoggersPerClockType[a1] )
  {
    for ( i = 0; i < v1; ++i )
    {
      v4 = *(_QWORD *)(KeGetPrcb(i) + 35816);
      if ( *(_QWORD *)(v4 + 8 * v2 + 408) )
      {
        *(_BYTE *)(v2 + v4 + 400) = 0;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x40uLL);
        *(_QWORD *)(v4 + 8 * v2 + 408) = Pool2;
        if ( !Pool2 )
        {
          for ( j = 0; j < i; *(_QWORD *)(v7 + 8 * v2 + 408) = 0LL )
          {
            v7 = *(_QWORD *)(KeGetPrcb(j) + 35816);
            ExFreePoolWithTag(*(PVOID *)(v7 + 8 * v2 + 408), 0);
            ++j;
          }
          return 3221225495LL;
        }
      }
      **(_DWORD **)(v4 + 8 * v2 + 408) = 0;
    }
  }
  ++CCSwapNumLoggersPerClockType[v2];
  return 0LL;
}
