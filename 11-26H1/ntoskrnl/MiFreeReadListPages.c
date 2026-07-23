/*
 * XREFs of MiFreeReadListPages @ 0x140A5B8D0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x140A5B840 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 */

__int64 *__fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 *i; // r8
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 *result; // rax
  unsigned __int64 ThreadLock; // rdx
  __int64 v12; // r8

  v2 = 0LL;
  v3 = MiPageChainCount(a1 + 40);
  for ( i = MiUnlinkPageChainHead(a1 + 40); i; i = MiUnlinkPageChainHead(a1 + 40) )
  {
    if ( !v2 )
      v2 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)i[5] >> 43) & 0x3FF));
    MiReleaseFreshPage((__int64)i, v4, (__int64)i);
  }
  v6 = a1 + 64;
  v7 = 5LL;
  do
  {
    v8 = MiPageChainCount(v6);
    for ( result = MiUnlinkPageChainHead(v9); result; result = MiUnlinkPageChainHead(v6) )
    {
      if ( !v2 )
      {
        ThreadLock = stru_140E2ED08.ThreadLock;
        v2 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)result[5] >> 43) & 0x3FF));
      }
      MiReleaseFreshPage((__int64)result, ThreadLock, v12);
    }
    v3 += v8;
    v6 += 24LL;
    --v7;
  }
  while ( v7 );
  if ( v3 )
    return (__int64 *)MiReturnFaultCharges(v2, v3);
  return result;
}
