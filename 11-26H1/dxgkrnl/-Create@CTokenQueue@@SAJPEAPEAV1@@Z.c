/*
 * XREFs of ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x14003A4C0
 * Callers:
 *     ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x14003A320 (-EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x14003A410 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenQueue::Create(struct CTokenQueue **a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(256LL, 32LL, 1903447380LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
  }
  *a1 = (struct CTokenQueue *)Pool2;
  return Pool2 == 0 ? 0xC0000017 : 0;
}
