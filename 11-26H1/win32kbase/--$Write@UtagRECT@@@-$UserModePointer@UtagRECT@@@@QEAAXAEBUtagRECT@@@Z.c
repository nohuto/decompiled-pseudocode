/*
 * XREFs of ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1401C5C90
 * Callers:
 *     NtUserGetUniformSpaceMapping @ 0x14011D250 (NtUserGetUniformSpaceMapping.c)
 * Callees:
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall UserModePointer<tagRECT>::Write<tagRECT>(void **a1, void *a2)
{
  return RtlCopyToUser(*a1, a2, 0x10uLL);
}
