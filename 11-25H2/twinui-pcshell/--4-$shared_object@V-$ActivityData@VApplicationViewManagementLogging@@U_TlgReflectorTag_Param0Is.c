/*
 * XREFs of ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800E7054
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003AFF0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ??_GRefAndObject@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAPEAXI@Z @ 0x1800E70B4 (--_GRefAndObject@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflect.c)
 */

void **__fastcall wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
        void **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rax

  if ( a1 != (void **)a2 )
  {
    v4 = (volatile signed __int32 *)*a1;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 && *a1 )
        wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(*a1);
      *a1 = 0LL;
    }
    v5 = *a2;
    *a1 = (void *)*a2;
    if ( v5 )
      _InterlockedIncrement(v5);
  }
  return a1;
}
