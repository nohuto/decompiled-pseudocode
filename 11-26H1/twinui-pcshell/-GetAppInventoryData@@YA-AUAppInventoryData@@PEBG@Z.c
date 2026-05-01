/*
 * XREFs of ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x180576ACC
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576934 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576B90 (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     IsPicRetrieveFileInfoPresent @ 0x1802D1410 (IsPicRetrieveFileInfoPresent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_INFO@@P6AJPEAU1@@Z$1?PicFreeFileInfo@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1805767A0 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_INFO@@P6AJPEAU1@@Z$1-PicFreeFileInfo@@YAJ0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall GetAppInventoryData(char *a1, __int64 a2)
{
  __int64 v4; // rcx
  void **v6; // [rsp+60h] [rbp+18h] BYREF

  std::wstring::wstring((__int64)a1);
  std::wstring::wstring(v4 + 32);
  std::wstring::wstring((__int64)(a1 + 64));
  if ( IsPicRetrieveFileInfoPresent() )
  {
    v6 = 0LL;
    if ( (int)PicRetrieveFileInfo(a2, 16LL, &v6) >= 0 )
    {
      std::wstring::operator=(a1, v6[6]);
      std::wstring::operator=(a1 + 32, v6[7]);
      std::wstring::operator=(a1 + 64, v6[2]);
    }
    wil::details::unique_storage<wil::details::resource_policy<_FILE_INFO *,long (*)(_FILE_INFO *),&long PicFreeFileInfo(_FILE_INFO *),wistd::integral_constant<unsigned __int64,0>,_FILE_INFO *,_FILE_INFO *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_INFO *,long (*)(_FILE_INFO *),&long PicFreeFileInfo(_FILE_INFO *),wistd::integral_constant<unsigned __int64,0>,_FILE_INFO *,_FILE_INFO *,0,std::nullptr_t>>(&v6);
  }
  return a1;
}
