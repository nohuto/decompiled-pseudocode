/*
 * XREFs of ??$emplace_back@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV234@@Z @ 0x180100B78
 * Callers:
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180045C10 (-FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV-$vector@V-$ComPtr@U.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x180073394 (--$_Emplace_reallocate@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rcx

  v4 = (__int64 *)a1[1];
  if ( v4 == (__int64 *)a1[2] )
    return std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
             a1,
             (__int64)v4,
             a2);
  v5 = (__int64 *)a1[1];
  *v4 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v5);
  v6 = a1[1];
  a1[1] = v6 + 8;
  return (__int64 *)v6;
}
