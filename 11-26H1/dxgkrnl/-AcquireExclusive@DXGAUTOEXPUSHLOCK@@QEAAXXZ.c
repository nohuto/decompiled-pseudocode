/*
 * XREFs of ?AcquireExclusive@DXGAUTOEXPUSHLOCK@@QEAAXXZ @ 0x1400838F0
 * Callers:
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400837F4 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x140217498 (DxgkDdiGetVirtualGpuInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOEXPUSHLOCK::AcquireExclusive(DXGAUTOEXPUSHLOCK *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(*((_QWORD *)this + 1), 0LL);
  *((_DWORD *)this + 4) = 2;
}
