/*
 * XREFs of PspSetJobBackgroundCountCallback @ 0x140AF43A0
 * Callers:
 *     <none>
 * Callees:
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407FFAAC (PspUpdateJobEffectivePriorityLimits.c)
 */

__int64 __fastcall PspSetJobBackgroundCountCallback(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v3; // zf
  int v4; // r8d
  int v5; // r10d
  int v6; // eax

  v2 = *(_DWORD *)(a1 + 1072);
  v3 = *(_BYTE *)a2 == 0;
  v4 = v2 - 1;
  v5 = v2 + 1;
  v6 = *(_DWORD *)(a1 + 1084);
  if ( !*(_BYTE *)a2 )
    v5 = v4;
  *(_DWORD *)(a1 + 1072) = v5;
  *(_DWORD *)(a2 + 4) = v6;
  if ( !v3 && v5 == 1 || !v5 )
    PspUpdateJobEffectivePriorityLimits(a1, 3);
  return 0LL;
}
