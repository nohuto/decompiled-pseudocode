/*
 * XREFs of ??1Pause@SharedVisualHostProvider@@QEAA@XZ @ 0x180609E44
 * Callers:
 *     ?Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x18060B87C (-Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     _SharedDesktopBackgroundVisualHost::Pause_::_1_::dtor$0 @ 0x180700DA4 (_SharedDesktopBackgroundVisualHost--Pause_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18060AB38 (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::Pause::~Pause(SharedVisualHostProvider::Pause *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::Pause::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
