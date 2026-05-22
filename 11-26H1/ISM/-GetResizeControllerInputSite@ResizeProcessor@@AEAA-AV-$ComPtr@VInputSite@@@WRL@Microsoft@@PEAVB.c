/*
 * XREFs of ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180154290
 * Callers:
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801559D0 (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180061A40 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x180098730 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800A7A68 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180152CF4 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ResizeProcessor::GetResizeControllerInputSite(__int64 a1, __int64 *a2, __int64 *a3)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v6; // rbx
  __int64 v7; // rsi
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  *a2 = 0LL;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  std::vector<InputSite *>::vector<InputSite *>(v9, (__int64)InputSiteManager + 56);
  v6 = (__int64 *)v9[0];
  v7 = v9[1];
  while ( v6 != (__int64 *)v7 )
  {
    InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v6, (__int64 *)&v10);
    if ( v10 && v10 == a3 )
    {
      Microsoft::WRL::ComPtr<InputSite>::operator=(a2, *v6);
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v10);
      break;
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v10);
    ++v6;
  }
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>(v9);
  return a2;
}
