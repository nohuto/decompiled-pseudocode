/*
 * XREFs of ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Default_allocator_traits@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@1@QEAUInputSample@ContextualProcessorBuffer@@$$QEAU34@@Z @ 0x18004D784
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18004D600 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x180094064 (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Cont.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x18004D7F4 (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$hash@.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x18004D8D0 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rax

  v5 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a2 = v5;
  *(_DWORD *)(a2 + 8) = *((_DWORD *)a3 + 2);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
    a2 + 16,
    a3 + 2);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
    a2 + 80,
    a3 + 10);
  return std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>(
           a2 + 144,
           a3 + 18);
}
