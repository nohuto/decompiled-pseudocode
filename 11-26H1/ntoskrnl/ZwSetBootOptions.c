/*
 * XREFs of ZwSetBootOptions @ 0x14072B2C0
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x1406BC770 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x14089A5E0 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
