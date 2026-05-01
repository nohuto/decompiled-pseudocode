/*
 * XREFs of ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x1802960B0
 * Callers:
 *     ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180077980 (-OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18020E9BC (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ?OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x18022B020 (-OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038D9F0 (-OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18038E1A0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     _CJumpViewExperienceManager::OnSetForegroundFailed_::_1_::dtor$0 @ 0x1806DF241 (_CJumpViewExperienceManager--OnSetForegroundFailed_--_1_--dtor$0.c)
 *     _CJumpViewExperienceManager::Show_::_1_::dtor$3 @ 0x1806E73CA (_CJumpViewExperienceManager--Show_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180296114 (-Destroy@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity(
        JumpViewProvider::ShowJumpViewActivity *this)
{
  *(_QWORD *)this = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
