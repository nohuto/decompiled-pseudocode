/*
 * XREFs of EtwpAllocateLbrData @ 0x14083631C
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x140836440 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x140B39990 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateLbrData(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_DWORD *)(Pool2 + 4) = -1;
  *(_QWORD *)(a1 + 1072) = Pool2;
  return 0LL;
}
