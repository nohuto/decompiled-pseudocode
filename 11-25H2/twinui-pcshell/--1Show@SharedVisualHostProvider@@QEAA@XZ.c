/*
 * XREFs of ??1Show@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5240
 * Callers:
 *     ?Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1805E6F4C (-Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 *     _SharedDesktopBackgroundVisualHost::Show_::_1_::dtor$0 @ 0x1806D8743 (_SharedDesktopBackgroundVisualHost--Show_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E5F9C (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::Show::~Show(SharedVisualHostProvider::Show *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::Show::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
