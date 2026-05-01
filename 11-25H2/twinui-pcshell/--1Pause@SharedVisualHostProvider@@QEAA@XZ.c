/*
 * XREFs of ??1Pause@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E51E8
 * Callers:
 *     ?Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1805E6C3C (-Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     _SharedDesktopBackgroundVisualHost::Pause_::_1_::dtor$0 @ 0x1806D871F (_SharedDesktopBackgroundVisualHost--Pause_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E5EFC (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::Pause::~Pause(SharedVisualHostProvider::Pause *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::Pause::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
