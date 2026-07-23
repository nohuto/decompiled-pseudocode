/*
 * XREFs of ZwDrawText @ 0x140729C60
 * Callers:
 *     DifZwDrawTextWrapper @ 0x1406A8890 (DifZwDrawTextWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDrawText(PUNICODE_STRING Text)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Text);
}
