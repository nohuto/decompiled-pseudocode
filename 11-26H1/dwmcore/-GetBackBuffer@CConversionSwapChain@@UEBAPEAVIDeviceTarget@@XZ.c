/*
 * XREFs of ?GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1801C5FF0
 * Callers:
 *     ?IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z @ 0x1802A78A0 (-IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDeviceTarget *__fastcall CConversionSwapChain::GetBackBuffer(CConversionSwapChain *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 144LL))(*((_QWORD *)this + 62));
  return (struct IDeviceTarget *)((v1 + 16) & -(__int64)(v1 != 0));
}
