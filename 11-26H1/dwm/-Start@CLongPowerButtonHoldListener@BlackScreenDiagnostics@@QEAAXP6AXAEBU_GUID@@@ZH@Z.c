/*
 * XREFs of ?Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXAEBU_GUID@@@ZH@Z @ 0x1400040A0
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003500 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?Stop@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXXZ @ 0x14000D560 (-Stop@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXXZ.c)
 */

void __fastcall BlackScreenDiagnostics::CLongPowerButtonHoldListener::Start(
        BlackScreenDiagnostics::CLongPowerButtonHoldListener *this,
        void (*a2)(const struct _GUID *))
{
  *(_BYTE *)this = 1;
  *((_DWORD *)this + 5) = 5000;
  *((_QWORD *)this + 3) = BlackScreenDiagnostics::RunDiagnosticsFromLongPowerButtonHold;
  if ( (int)RtlSubscribeWnfStateChangeNotification(
              (char *)this + 8,
              WNF_PO_POWER_BUTTON_STATE,
              0LL,
              BlackScreenDiagnostics::CLongPowerButtonHoldListener::WnfCallback,
              this,
              0LL,
              0,
              0) < 0 )
    BlackScreenDiagnostics::CLongPowerButtonHoldListener::Stop(this);
}
