/*
 * XREFs of ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180063B78
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180035C60 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x1800638E8 (-GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18008F3B8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800BF610 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FEF40 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     ?GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@_K@wil@@@Z @ 0x180160AE8 (-GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x1801613FC (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV-$unique_ptr@UPac.c)
 * Callees:
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTCoAllocPolicy::Alloc(IMalloc *a1, char a2, SIZE_T a3, void **a4)
{
  void *v6; // rax
  size_t v7; // rbx
  void *v8; // rdi
  LPMALLOC ppMalloc; // [rsp+30h] [rbp+8h] BYREF

  ppMalloc = a1;
  v6 = CoTaskMemAlloc(a3);
  v7 = 0LL;
  *a4 = v6;
  v8 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( (a2 & 1) != 0 )
  {
    ppMalloc = 0LL;
    if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(LPMALLOC, void *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v8);
      ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
    }
    memset_0(*a4, 0, v7);
  }
  return 0LL;
}
