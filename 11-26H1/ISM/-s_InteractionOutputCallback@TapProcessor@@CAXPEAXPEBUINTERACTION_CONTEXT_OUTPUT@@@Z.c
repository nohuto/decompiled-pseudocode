/*
 * XREFs of ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801B6E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall TapProcessor::s_InteractionOutputCallback(
        TapProcessor *a1,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  TapProcessor::InteractionContextCallback(a1, a2);
}
