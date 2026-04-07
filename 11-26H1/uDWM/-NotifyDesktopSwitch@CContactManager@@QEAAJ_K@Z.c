/*
 * XREFs of ?NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z @ 0x18005EE98
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180074130 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18005EF08 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18005F0F0 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 */

__int64 __fastcall CContactManager::NotifyDesktopSwitch(CContactManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int refreshed; // eax

  v2 = CContactManager::Reset(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x7BDu, 0LL);
  }
  else
  {
    refreshed = CContactManager::RefreshPresentationModeSettings(this);
    v3 = refreshed;
    if ( refreshed < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, refreshed, 0x7BEu, 0LL);
  }
  return v3;
}
