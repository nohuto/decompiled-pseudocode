/*
 * XREFs of ?CleanupComputeScribble@CLegacySwapChain@@UEAAX_N@Z @ 0x1802A5B80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1801D2430 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::CleanupComputeScribble(volatile signed __int32 **this, char a2)
{
  if ( a2 )
    CScribbleSwapChain::ReleaseComputeScribbleResources(this - 32);
}
