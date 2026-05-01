/*
 * XREFs of ??1SyncState@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E52C4
 * Callers:
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1805EA028 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 *     _SharedDesktopBackgroundVisualHost::SyncState_::_1_::dtor$0 @ 0x1806D87C7 (_SharedDesktopBackgroundVisualHost--SyncState_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E5F9C (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::SyncState::~SyncState(SharedVisualHostProvider::SyncState *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::SyncState::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
