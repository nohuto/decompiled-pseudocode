/*
 * XREFs of wil::details::ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___::_ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___ @ 0x1802C2100
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$2 @ 0x1806D4A2F (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$2.c)
 * Callees:
 *     ??$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z @ 0x1801F8D7C (--$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z.c)
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
