/*
 * XREFs of ?NotifyInvalid@?$CDeviceResourceT@VIRenderTargetBitmap@@@@QEAAXXZ @ 0x18029AE54
 * Callers:
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D80C0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18029AEE0 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A5DC0 (-NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceResourceT<IRenderTargetBitmap>::NotifyInvalid(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v3 = (__int64)(a1[3] - a1[2]) >> 3;
  while ( (_DWORD)v3 )
  {
    LODWORD(v3) = v3 - 1;
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1[2] + 8LL * (unsigned int)v3);
    (**v4)(v4, v2);
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
}
