/*
 * XREFs of ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F819C
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1401F89B4 (-zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 */

void __fastcall CInputConfig::_EnsureInputSpace(CInputConfig *this, __int64 a2)
{
  if ( *(CInputConfig **)this == this )
  {
    if ( *((_BYTE *)this + 1504) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 797);
    *((_BYTE *)this + 1504) = 1;
    CInputConfig::_CreateLegacyInputSpace(this, a2);
  }
}
