/*
 * XREFs of ??$Write@UtagINPUT_TRANSFORM@@@?$UserModePointer@UtagINPUT_TRANSFORM@@@@QEAAXAEBUtagINPUT_TRANSFORM@@@Z @ 0x1402AD908
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x14025F020 (NtUserCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall UserModePointer<tagINPUT_TRANSFORM>::Write<tagINPUT_TRANSFORM>(void **a1, void *a2)
{
  return RtlCopyToUser(*a1, a2, 0x40uLL);
}
