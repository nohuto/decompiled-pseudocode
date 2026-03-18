/*
 * XREFs of ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140002BE8
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400024D0 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002C30 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E2C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDwmAppHost::HandleDisplayModeChange(CDwmAppHost *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CDwmAppHost::LpcNotifySettingsChange(this, 0x21u);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x21Eu, 0LL);
  return v2;
}
