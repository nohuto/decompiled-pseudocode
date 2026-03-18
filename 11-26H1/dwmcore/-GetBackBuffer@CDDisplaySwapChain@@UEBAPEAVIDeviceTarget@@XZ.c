/*
 * XREFs of ?GetBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1801A83C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CDDisplaySwapChain::GetBackBuffer(CDDisplaySwapChain *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 55) + 8LL * *((unsigned int *)this + 125)) + 216LL);
  return (struct IDeviceTarget *)((v1 + 16) & -(__int64)(v1 != 0));
}
