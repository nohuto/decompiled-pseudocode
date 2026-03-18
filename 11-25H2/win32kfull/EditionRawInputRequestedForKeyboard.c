/*
 * XREFs of EditionRawInputRequestedForKeyboard @ 0x14011C550
 * Callers:
 *     <none>
 * Callees:
 *     HasHidTable @ 0x14011CE00 (HasHidTable.c)
 */

__int64 __fastcall EditionRawInputRequestedForKeyboard(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 16848)
    || (unsigned int)HasHidTable(a1) && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 464) + 824LL) + 100LL) & 0x10) != 0 )
  {
    return 1;
  }
  return v3;
}
