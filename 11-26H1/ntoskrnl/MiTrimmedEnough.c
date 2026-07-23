/*
 * XREFs of MiTrimmedEnough @ 0x1403C48C0
 * Callers:
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 *     MiTrimWorkingSetVpabCallback @ 0x1403C47C0 (MiTrimWorkingSetVpabCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTrimmedEnough(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(a2 + 8) )
    return 1LL;
  if ( (*(_DWORD *)a2 & 0x4000) == 0 )
    return 0LL;
  if ( (*(_DWORD *)a2 & 0x8000) != 0 )
    v2 = *(_QWORD *)(a1 + 136);
  else
    v2 = *(_QWORD *)(a1 + 152);
  return v2 <= *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 8);
}
