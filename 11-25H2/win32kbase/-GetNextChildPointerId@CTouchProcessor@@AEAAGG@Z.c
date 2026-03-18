/*
 * XREFs of ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1402027A0
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401FCAD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextChildPointerId(PERESOURCE *this, unsigned __int16 a2)
{
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8847);
  if ( !a2 )
  {
    a2 = *((_WORD *)this + 48);
    if ( !a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8857);
    if ( ++*((_WORD *)this + 48) < 0x4000u )
      *((_WORD *)this + 48) = 0x4000;
  }
  return a2;
}
