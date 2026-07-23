/*
 * XREFs of PspSetProcessCacheIsolationCallback @ 0x1404ECA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetProcessCacheIsolationCallback(__int64 a1, _BYTE *a2)
{
  if ( (*(_DWORD *)(a1 + 500) & 0x40000008) == 0 && (*(_DWORD *)(a1 + 496) & 1) == 0 )
  {
    if ( *a2 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 6u);
  }
  return 0LL;
}
