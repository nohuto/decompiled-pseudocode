/*
 * XREFs of ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x180222054
 * Callers:
 *     _CStartExperienceManager::PositionMenu_::_1_::dtor$0 @ 0x1806A4E74 (_CStartExperienceManager--PositionMenu_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018634 (-Destroy@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall StartMenuExperienceTelemetry::StartMenuReposition::~StartMenuReposition(
        StartMenuExperienceTelemetry::StartMenuReposition *this)
{
  *(_QWORD *)this = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
