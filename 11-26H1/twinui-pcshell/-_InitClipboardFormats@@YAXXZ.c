/*
 * XREFs of ?_InitClipboardFormats@@YAXXZ @ 0x180699C08
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068E674 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     <none>
 */

void _InitClipboardFormats(void)
{
  if ( !g_cfAsyncFlag_Storage )
  {
    g_cfURL_Storage = RegisterClipboardFormatW(L"UniformResourceLocator");
    g_cfHIDA_Storage = RegisterClipboardFormatW(L"Shell IDList Array");
    RegisterClipboardFormatW(L"FileGroupDescriptor");
    RegisterClipboardFormatW(L"FileGroupDescriptorW");
    RegisterClipboardFormatW(L"Shell Object Offsets");
    RegisterClipboardFormatW(L"EnterpriseDataProtectionId");
    g_cfAsyncFlag_Storage = RegisterClipboardFormatW(L"AsyncFlag");
    RegisterClipboardFormatW(L"FilePropertyStore");
    RegisterClipboardFormatW(L"FilePropertyStoreByteSize");
  }
}
