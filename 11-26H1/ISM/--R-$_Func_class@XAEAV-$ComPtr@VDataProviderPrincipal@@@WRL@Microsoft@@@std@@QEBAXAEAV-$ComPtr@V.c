/*
 * XREFs of ??R?$_Func_class@XAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z @ 0x1801024D8
 * Callers:
 *     ?DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@Z @ 0x1801042B0 (-DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV-$function@$$A6AXAEAV-$ComPtr@VDataProvider.c)
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1801062B0 (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     ?DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180130B5C (-DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV-$function@$$A6AXAEAV-$ComPtr.c)
 *     ?SetBootstrapProxy@InputSystemInternalClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180130C20 (-SetBootstrapProxy@InputSystemInternalClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,Microsoft::WRL::ComPtr<DataProviderPrincipal> &>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
