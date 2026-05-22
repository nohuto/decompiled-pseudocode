/*
 * XREFs of ??0?$unordered_map@_KV?$shared_ptr@VGestureHandler@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180087A1C
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800262D8 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@1@@Z @ 0x180087A88 (--0-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@_KU-$hash@_K.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,std::shared_ptr<GestureHandler>>::unordered_map<unsigned __int64,std::shared_ptr<GestureHandler>>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>(
    a1,
    &v3);
  return a1;
}
