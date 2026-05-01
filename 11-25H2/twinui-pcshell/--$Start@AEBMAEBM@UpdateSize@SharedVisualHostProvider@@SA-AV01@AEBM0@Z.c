/*
 * XREFs of ??$Start@AEBMAEBM@UpdateSize@SharedVisualHostProvider@@SA?AV01@AEBM0@Z @ 0x1805E3FB8
 * Callers:
 *     ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1805E7090 (-Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805E4AF0 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?StartActivity@UpdateSize@SharedVisualHostProvider@@QEAAXMM@Z @ 0x1805E7800 (-StartActivity@UpdateSize@SharedVisualHostProvider@@QEAAXMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
SharedVisualHostProvider::UpdateSize *__fastcall SharedVisualHostProvider::UpdateSize::Start<float const &,float const &>(
        SharedVisualHostProvider::UpdateSize *this,
        float *a2,
        float *a3)
{
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &SharedVisualHostProvider::UpdateSize::`vftable';
  SharedVisualHostProvider::UpdateSize::StartActivity(this, *a2, *a3);
  return this;
}
