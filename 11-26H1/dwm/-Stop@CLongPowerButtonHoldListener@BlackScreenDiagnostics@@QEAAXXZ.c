/*
 * XREFs of ?Stop@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXXZ @ 0x14000D560
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003500 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXAEBU_GUID@@@ZH@Z @ 0x1400040A0 (-Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXAEBU_GUID@@@ZH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BlackScreenDiagnostics::CLongPowerButtonHoldListener::Stop(
        BlackScreenDiagnostics::CLongPowerButtonHoldListener *this)
{
  if ( *(_BYTE *)this )
  {
    *(_BYTE *)this = 0;
    if ( *((_QWORD *)this + 1) )
    {
      if ( (int)RtlUnsubscribeWnfStateChangeNotification() >= 0 )
        *((_QWORD *)this + 1) = 0LL;
    }
  }
}
