/*
 * XREFs of ?OnPropertyValueChanged@CMMNotificationDelegator@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800BF480
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800259E8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x180063CF0 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::CMMNotificationDelegator::OnPropertyValueChanged(
        AudioEffectsWatcher::CMMNotificationDelegator *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  void *v5; // rdx
  __int64 v6; // rcx

  if ( CompareStringOrdinal(a2, -1, *((LPCWCH *)this + 2), -1, 1) == 2
    && ((unsigned int)operator==((__int64)a3, (__int64)&PKEY_AudioEndpoint_Disable_SysFx)
     || (unsigned int)operator==(v6, (__int64)&PKEY_AudioEndpoint_LastSetEffectPack)) )
  {
    wil::details::SetEvent(*((wil::details **)this + 3), v5);
  }
  return 0LL;
}
