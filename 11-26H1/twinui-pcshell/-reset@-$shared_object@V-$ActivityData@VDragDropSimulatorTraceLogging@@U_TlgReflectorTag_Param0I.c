/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18057C25C
 * Callers:
 *     ??1?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180578C34 (--1-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ??4?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180578E20 (--4-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?Destroy@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805793B8 (-Destroy@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRefl.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180578C6C (--1-$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Act.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x110);
      }
    }
    *a1 = 0LL;
  }
}
