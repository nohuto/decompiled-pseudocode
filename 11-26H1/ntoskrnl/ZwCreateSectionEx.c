/*
 * XREFs of ZwCreateSectionEx @ 0x140724CB0
 * Callers:
 *     DifZwCreateSectionExWrapper @ 0x1406A19A0 (DifZwCreateSectionExWrapper.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407F23D0 (PsCheckProcessFileSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSectionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
