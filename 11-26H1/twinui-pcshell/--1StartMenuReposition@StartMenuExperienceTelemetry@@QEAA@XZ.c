/*
 * XREFs of ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x1800B630C
 * Callers:
 *     _CStartExperienceManager::PositionMenu_::_1_::dtor$0 @ 0x1806D235E (_CStartExperienceManager--PositionMenu_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B548C (-Destroy@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall StartMenuExperienceTelemetry::StartMenuReposition::~StartMenuReposition(
        StartMenuExperienceTelemetry::StartMenuReposition *this)
{
  *(_QWORD *)this = &StartMenuExperienceTelemetry::StartMenuReposition::`vftable';
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
