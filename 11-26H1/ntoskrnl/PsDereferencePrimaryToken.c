/*
 * XREFs of PsDereferencePrimaryToken @ 0x140A48F50
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x14065B4C0 (DifIoDeleteControllerWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
