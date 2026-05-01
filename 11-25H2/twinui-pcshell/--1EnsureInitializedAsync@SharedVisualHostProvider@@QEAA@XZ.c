/*
 * XREFs of ??1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5190
 * Callers:
 *     ?EnsureInitializedAsync@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1805E603C (-EnsureInitializedAsync@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     _SharedDesktopBackgroundVisualHost::EnsureInitializedAsync_::_1_::dtor$0 @ 0x1806D86FB (_SharedDesktopBackgroundVisualHost--EnsureInitializedAsync_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E5F9C (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::EnsureInitializedAsync::~EnsureInitializedAsync(
        SharedVisualHostProvider::EnsureInitializedAsync *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::EnsureInitializedAsync::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
