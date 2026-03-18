/*
 * XREFs of _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x140059760
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x140059438 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 *     ?ClearPointerListEntries@CInputManager@@SAXI@Z @ 0x1400B4A0C (-ClearPointerListEntries@CInputManager@@SAXI@Z.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x140165A28 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x14017E0DC (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool()
{
  return *(_QWORD *)W32GetUserInputMgrSessionState() != 0LL;
}
