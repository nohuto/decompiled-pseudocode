/*
 * XREFs of ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1805528C4
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805526F4 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805529B4 (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     IsPicRetrieveFileInfoPresent @ 0x1802D8C98 (IsPicRetrieveFileInfoPresent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_INFO@@P6AJPEAU1@@Z$1?PicFreeFileInfo@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18055254C (--1-$unique_storage@U-$resource_policy@PEAU_FILE_INFO@@P6AJPEAU1@@Z$1-PicFreeFileInfo@@YAJ0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAppInventoryData(__int64 a1, __int64 a2)
{
  void **v4; // rdi
  void **v5; // rsi
  _WORD **v7; // [rsp+60h] [rbp+18h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v4 = (void **)(a1 + 32);
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  v5 = (void **)(a1 + 64);
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 7LL;
  *(_WORD *)(a1 + 64) = 0;
  if ( IsPicRetrieveFileInfoPresent() )
  {
    v7 = 0LL;
    if ( (int)PicRetrieveFileInfo(a2, 16LL, &v7) >= 0 )
    {
      std::wstring::operator=((void **)a1, v7[6]);
      std::wstring::operator=(v4, v7[7]);
      std::wstring::operator=(v5, v7[2]);
    }
    wil::details::unique_storage<wil::details::resource_policy<_FILE_INFO *,long (*)(_FILE_INFO *),&long PicFreeFileInfo(_FILE_INFO *),wistd::integral_constant<unsigned __int64,0>,_FILE_INFO *,_FILE_INFO *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_INFO *,long (*)(_FILE_INFO *),&long PicFreeFileInfo(_FILE_INFO *),wistd::integral_constant<unsigned __int64,0>,_FILE_INFO *,_FILE_INFO *,0,std::nullptr_t>>(&v7);
  }
  return a1;
}
