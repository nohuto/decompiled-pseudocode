/*
 * XREFs of ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1401BB390
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x14010CBE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextRootPointerId(PERESOURCE *this)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // cx

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8802);
  v2 = *((_WORD *)this + 48);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8808);
  v3 = (*((_WORD *)this + 48) + 1) & 0x3FFF;
  *((_WORD *)this + 48) = v3;
  if ( v3 < 2u )
    *((_WORD *)this + 48) = 2;
  return v2;
}
