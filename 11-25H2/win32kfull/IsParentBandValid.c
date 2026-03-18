/*
 * XREFs of IsParentBandValid @ 0x1400619A0
 * Callers:
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 * Callees:
 *     IsTopLevelParent @ 0x140061BA4 (IsTopLevelParent.c)
 */

__int64 __fastcall IsParentBandValid(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax

  if ( (unsigned int)IsTopLevelParent(a2) )
    return 1LL;
  v5 = *(_QWORD *)(v2 + 40);
  if ( (*(_BYTE *)(v5 + 233) & 8) != 0 )
    return 1LL;
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_DWORD *)(v6 + 236);
  if ( *(_DWORD *)(v5 + 236) != v7 )
    return 0LL;
  LOBYTE(v7) = ~*(_BYTE *)(v6 + 232);
  return ((*(unsigned __int8 *)(v5 + 232) ^ v7) >> 6) & 1;
}
