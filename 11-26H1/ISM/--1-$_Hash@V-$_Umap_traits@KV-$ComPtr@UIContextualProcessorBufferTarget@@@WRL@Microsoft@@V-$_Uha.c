/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800F0BE4
 * Callers:
 *     ??1?$unordered_map@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1800F0E24 (--1-$unordered_map@KV-$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@U-$hash@K@std@@.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800F0E4C (--1Win32kInterop@@UEAA@XZ.c)
 *     ??1MagnifierProcessor@@UEAA@XZ @ 0x1801B1E60 (--1MagnifierProcessor@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F04B8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UDeviceState@MagnifierProce.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>(
        __int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16>((void *)a1[1], (struct std::nothrow_t *)0x20);
}
