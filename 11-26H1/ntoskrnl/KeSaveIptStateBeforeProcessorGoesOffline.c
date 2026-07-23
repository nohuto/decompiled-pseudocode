/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x14052D5F0
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     KiSaveIptState @ 0x1404F4AA0 (KiSaveIptState.c)
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
