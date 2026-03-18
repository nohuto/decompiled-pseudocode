/*
 * XREFs of ?GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180196E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CLegacySwapChain::GetBackBuffer(CLegacySwapChain *this)
{
  return (struct IDeviceTarget *)((*((_QWORD *)this + 34) + 16LL) & -(__int64)(*((_QWORD *)this + 34) != 0LL));
}
