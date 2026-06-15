/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800AB24C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180100A44 (--$_Emplace_reallocate@AEBV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISaDev.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??0?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800AB290 (--0-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::ComPtr<ISaDeviceProxy>(a3++, v5);
      v5 = v6 + 8;
    }
    while ( v5 != v7 );
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(a3, a3);
  return a3;
}
