/*
 * XREFs of ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC300
 * Callers:
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC270 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEBVIDevice.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ @ 0x18020FAAC (-ReleaseResources@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180249560 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceR.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

__int64 __fastcall CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = _std_find_trivial_8(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a2);
  v4 = *(_QWORD *)(a1 + 24);
  if ( result != v4 )
  {
    result = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
               (void *)(result + 8),
               v4,
               (void *)result);
    *(_QWORD *)(a1 + 24) -= 8LL;
  }
  return result;
}
