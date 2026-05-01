/*
 * XREFs of ??1?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805E506C
 * Callers:
 *     ??1?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805E5000 (--1-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1805EAE54 (-reset@-$shared_object@V-$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_ea_1805EAE54.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18003276C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1800327D0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 232));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  return _TlgActivityBase<wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(a1);
}
