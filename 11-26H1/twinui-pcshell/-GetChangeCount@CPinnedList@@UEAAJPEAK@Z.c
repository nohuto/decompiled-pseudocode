/*
 * XREFs of ?GetChangeCount@CPinnedList@@UEAAJPEAK@Z @ 0x180688DB0
 * Callers:
 *     ?GetChangeCount@CPinnedList@@W7EAAJPEAK@Z @ 0x180688DD0 (-GetChangeCount@CPinnedList@@W7EAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::GetChangeCount(CPinnedList *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this - 2) + 152LL))((char *)this - 16, a2);
}
