/*
 * XREFs of ??1?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180609C5C
 * Callers:
 *     ??1CreateXamlHost@SharedVisualHostProvider@@QEAA@XZ @ 0x180609D94 (--1CreateXamlHost@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ @ 0x180609DEC (--1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Hide@SharedVisualHostProvider@@QEAA@XZ @ 0x180609E18 (--1Hide@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Play@SharedVisualHostProvider@@QEAA@XZ @ 0x180609E70 (--1Play@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Show@SharedVisualHostProvider@@QEAA@XZ @ 0x180609E9C (--1Show@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ @ 0x180609EF4 (--1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1SyncState@SharedVisualHostProvider@@QEAA@XZ @ 0x180609F20 (--1SyncState@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1UpdateSize@SharedVisualHostProvider@@QEAA@XZ @ 0x180609F4C (--1UpdateSize@SharedVisualHostProvider@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18060FAB4 (-reset@-$shared_object@V-$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_ea_18060FAB4.c)
 */

__int64 __fastcall wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
