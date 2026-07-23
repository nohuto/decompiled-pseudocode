/*
 * XREFs of CmpFindNameInList @ 0x140AACC58
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(
        ULONG_PTR a1,
        unsigned int *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
