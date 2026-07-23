/*
 * XREFs of PsDereferencePrimaryToken @ 0x140A52240
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x14065F0A0 (DifIoDeleteControllerWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
