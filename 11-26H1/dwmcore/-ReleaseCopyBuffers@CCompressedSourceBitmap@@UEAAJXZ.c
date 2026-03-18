/*
 * XREFs of ?ReleaseCopyBuffers@CCompressedSourceBitmap@@UEAAJXZ @ 0x1800E0F10
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::ReleaseCopyBuffers(CCompressedSourceBitmap *this)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  if ( !*((_QWORD *)this + 3) )
    return 1LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 3);
  return 0LL;
}
