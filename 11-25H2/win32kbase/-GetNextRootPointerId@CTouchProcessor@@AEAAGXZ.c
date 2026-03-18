/*
 * XREFs of ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x140202950
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401FCAD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextRootPointerId(PERESOURCE *this)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // cx

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8819);
  v2 = *((_WORD *)this + 48);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8825);
  v3 = (*((_WORD *)this + 48) + 1) & 0x3FFF;
  *((_WORD *)this + 48) = v3;
  if ( v3 < 2u )
    *((_WORD *)this + 48) = 2;
  return v2;
}
