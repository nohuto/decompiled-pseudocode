/*
 * XREFs of ??1Play@SharedVisualHostProvider@@QEAA@XZ @ 0x180609E70
 * Callers:
 *     ?Play@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x18060B93C (-Play@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     _SharedDesktopBackgroundVisualHost::Play_::_1_::dtor$0 @ 0x180700DB6 (_SharedDesktopBackgroundVisualHost--Play_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18060ABD8 (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::Play::~Play(SharedVisualHostProvider::Play *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::Play::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
