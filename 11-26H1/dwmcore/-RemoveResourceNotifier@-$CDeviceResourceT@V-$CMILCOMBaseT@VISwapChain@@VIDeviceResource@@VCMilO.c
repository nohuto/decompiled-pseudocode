/*
 * XREFs of ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FB8C0
 * Callers:
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802064A4 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

__int64 __fastcall CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = _std_find_trivial_8(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), a2);
  v4 = *(_QWORD *)(a1 + 32);
  if ( result != v4 )
  {
    result = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
               (void *)(result + 8),
               v4,
               (void *)result);
    *(_QWORD *)(a1 + 32) -= 8LL;
  }
  return result;
}
