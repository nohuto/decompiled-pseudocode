/*
 * XREFs of ZwSetBootOptions @ 0x14069E420
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x14063BBB0 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x140805B44 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
