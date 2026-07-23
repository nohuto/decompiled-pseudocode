/*
 * XREFs of MiCommittedVadsInRegion @ 0x1404AD22C
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140B262B8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCommittedVadsInRegion(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 i; // r9

  CurrentThread = KeGetCurrentThread();
  for ( i = a1 >> 39; ; ++i )
  {
    if ( i > a2 >> 39 )
      return 0LL;
    if ( ((*(char *)(((unsigned __int64)(unsigned int)i >> 3)
                   + CurrentThread->ApcState.Process[2].ActiveProcessors[6].StaticBitmap[3]) >> (i & 7)) & 1) != 0 )
      break;
  }
  return 1LL;
}
