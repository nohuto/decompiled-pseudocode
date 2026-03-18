/*
 * XREFs of ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x180150AA8
 * Callers:
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x180150948 (-TriggerMmcss@CKst@@QEAAJXZ.c)
 *     ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x1801509A0 (-EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Reset@CKstBase@@QEAAJPEBG@Z @ 0x180294EF8 (-Reset@CKstBase@@QEAAJPEBG@Z.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802A8084 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        _QWORD *a1)
{
  char result; // al

  result = 0;
  if ( !*a1 || *a1 == -1LL )
    return 1;
  return result;
}
