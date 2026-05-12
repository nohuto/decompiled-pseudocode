/*
 * XREFs of RaidAdjustDeferredQueueDepth @ 0x140045798
 * Callers:
 *     RaidInitializeDeferredQueue @ 0x140072180 (RaidInitializeDeferredQueue.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 */

__int64 __fastcall RaidAdjustDeferredQueueDepth(union _SLIST_HEADER *a1)
{
  unsigned int i; // edi
  int Alignment_low; // ecx
  int v4; // ebp
  unsigned __int64 Region; // rsi
  __int64 Pool2; // rax

  if ( LOWORD(a1->Alignment) >= 0xAu )
    return 0LL;
  for ( i = 0; ; ++i )
  {
    Alignment_low = LOWORD(a1->Alignment);
    if ( i >= 10 - Alignment_low )
    {
      LOWORD(a1->Alignment) = i + Alignment_low;
      return 0LL;
    }
    v4 = *((unsigned __int16 *)&a1->HeaderX64 + 1);
    Region = a1[2].Region;
    Pool2 = ExAllocatePool2(64LL, *((unsigned __int16 *)&a1->HeaderX64 + 1), 1715757394LL);
    if ( !Pool2 )
      break;
    *(_DWORD *)(Pool2 + 16) = 134684675;
    ExpInterlockedPushEntrySList(a1 + 5, (PSLIST_ENTRY)Pool2);
  }
  if ( Region )
    RaidLogAllocationFailure(Region, 64, v4, 1715757394, 0x80000000);
  LOWORD(a1->Alignment) += i;
  return 3221225495LL;
}
