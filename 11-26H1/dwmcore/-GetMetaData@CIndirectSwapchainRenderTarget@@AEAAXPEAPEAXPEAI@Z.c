/*
 * XREFs of ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1801C8EE8
 * Callers:
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18020B854 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndirectSwapchainRenderTarget::GetMetaData(
        CIndirectSwapchainRenderTarget *this,
        void **a2,
        unsigned int *a3)
{
  unsigned int v3; // r9d
  void *v4; // rax

  v3 = *((_DWORD *)this + 610);
  v4 = 0LL;
  if ( v3 )
    v4 = (void *)*((_QWORD *)this + 302);
  *a2 = v4;
  *a3 = v3;
}
