/*
 * XREFs of ??1?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805E5000
 * Callers:
 *     ??1CreateXamlHost@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5138 (--1CreateXamlHost@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5190 (--1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Hide@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E51BC (--1Hide@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Play@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5214 (--1Play@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Show@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5240 (--1Show@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5298 (--1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1SyncState@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E52C4 (--1SyncState@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1UpdateSize@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E52F0 (--1UpdateSize@SharedVisualHostProvider@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1805EAE54 (-reset@-$shared_object@V-$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_ea_1805EAE54.c)
 */

__int64 __fastcall wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
