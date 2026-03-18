/*
 * XREFs of _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x14009C230
 * Callers:
 *     ?ClearPointerListEntries@CInputManager@@SAXI@Z @ 0x14009B558 (-ClearPointerListEntries@CInputManager@@SAXI@Z.c)
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x14009BF54 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x14009D4F0 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x14014B200 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool()
{
  return *(_QWORD *)W32GetUserInputMgrSessionState() != 0LL;
}
