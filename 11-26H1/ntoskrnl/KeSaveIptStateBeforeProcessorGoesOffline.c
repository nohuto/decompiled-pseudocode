/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x14052B0D0
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140BF2260 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 * Callees:
 *     KiSaveIptState @ 0x1404FB5B8 (KiSaveIptState.c)
 */

void KeSaveIptStateBeforeProcessorGoesOffline()
{
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    ExtendedState = KeGetCurrentPrcb()->ExtendedState;
    if ( ExtendedState )
      KiSaveIptState((unsigned __int64 *)((char *)&ExtendedState->LegacyState.ControlWord + (unsigned int)KeXStateLength));
  }
}
