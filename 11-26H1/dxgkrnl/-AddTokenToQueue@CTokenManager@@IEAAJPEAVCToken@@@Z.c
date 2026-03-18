/*
 * XREFs of ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14003A2D0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001FD20 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x14003A1E0 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@UEAAJPEAVCToken@@@Z @ 0x1400A1180 (-AddTokenToQueueAndSignalTokenEvent@CTokenManager@@UEAAJPEAVCToken@@@Z.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1400A11D0 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x14003A410 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x140041C20 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CompositionSurfaceObject **a2)
{
  int v3; // ebx
  struct CTokenManager::TokenQueueTableEntry *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v3 = CTokenManager::EnsureTokenQueue(this, a2[6], &v5);
  if ( v3 >= 0 )
    CTokenQueue::AddToken(*((CTokenQueue **)v5 + 1), (struct CToken *)a2);
  return (unsigned int)v3;
}
