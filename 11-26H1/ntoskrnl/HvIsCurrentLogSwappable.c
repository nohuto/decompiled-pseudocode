/*
 * XREFs of HvIsCurrentLogSwappable @ 0x140B11ED4
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1408BA65C (CmpGenerateFlushControlData.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 168);
  if ( v1 == 4 )
  {
    v2 = 193LL;
    return *(_BYTE *)(a1 + v2) == 0;
  }
  if ( v1 == 5 )
  {
    v2 = 192LL;
    return *(_BYTE *)(a1 + v2) == 0;
  }
  return 0;
}
