/*
 * XREFs of VidSchIsContextFlushable @ 0x1400C37C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsContextFlushable(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 804) )
    return 0;
  if ( *(_DWORD *)(a1 + 808) )
    return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 880LL) == 0;
  return 1;
}
