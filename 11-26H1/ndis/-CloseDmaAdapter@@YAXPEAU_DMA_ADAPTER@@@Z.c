/*
 * XREFs of ?CloseDmaAdapter@@YAXPEAU_DMA_ADAPTER@@@Z @ 0x1400C9948
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1?CloseDmaAdapter@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400C9928 (--1-$unique_storage@U-$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1-CloseDmaAdapter@@YAX0@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall CloseDmaAdapter(struct _DMA_ADAPTER *a1)
{
  if ( a1 )
    ((void (*)(void))a1->DmaOperations->PutDmaAdapter)();
}
