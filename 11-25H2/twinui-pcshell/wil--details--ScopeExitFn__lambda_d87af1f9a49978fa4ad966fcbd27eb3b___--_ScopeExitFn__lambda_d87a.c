/*
 * XREFs of wil::details::ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___::_ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___ @ 0x1802CA990
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$2 @ 0x1806AE751 (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$2.c)
 * Callees:
 *     ??$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z @ 0x18013ED48 (--$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___::_ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>(
             (int *)(*(_QWORD *)a1 + 44LL),
             *(int **)(a1 + 8));
  }
  return result;
}
