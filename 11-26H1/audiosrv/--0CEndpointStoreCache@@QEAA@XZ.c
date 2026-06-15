/*
 * XREFs of ??0CEndpointStoreCache@@QEAA@XZ @ 0x1800AE1DC
 * Callers:
 *     _dynamic_initializer_for__g_endpointStoreCache__ @ 0x180008000 (_dynamic_initializer_for__g_endpointStoreCache__.c)
 * Callees:
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E360 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 */

CEndpointStoreCache *__fastcall CEndpointStoreCache::CEndpointStoreCache(CEndpointStoreCache *this)
{
  g_endpointStoreCache = 0;
  SRWLock.Ptr = 0LL;
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&qword_1801D6640);
  return (CEndpointStoreCache *)&g_endpointStoreCache;
}
