/*
 * XREFs of ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1401EE190
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z @ 0x140181878 (-bDeleteSurface@SURFREF@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@H@Z.c)
 *     ?GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z @ 0x1401F3490 (-GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z.c)
 */

void __fastcall SURFREF::vTryDeleteSurface(void ***this)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax

  if ( KeAreApcsDisabled() )
  {
    GrepQueueApc(
      (void (*)(void *, void *, void *))SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_,
      *this[4],
      0LL);
  }
  else
  {
    SessionState = W32GetSessionState(v2);
    SURFREF::bDeleteSurface((__int64 **)this, *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), 0);
  }
}
