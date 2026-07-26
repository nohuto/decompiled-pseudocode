/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1?CloseDmaAdapter@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400C9928
 * Callers:
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x1401453E8 (ndisRegisterScatterGatherDmaForGenericObject.c)
 * Callees:
 *     ?CloseDmaAdapter@@YAXPEAU_DMA_ADAPTER@@@Z @ 0x1400C9948 (-CloseDmaAdapter@@YAXPEAU_DMA_ADAPTER@@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>(
        struct _DMA_ADAPTER **a1)
{
  struct _DMA_ADAPTER *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CloseDmaAdapter(v1);
}
