/*
 * XREFs of PpmIdlePrepareExitLatencyTrace @ 0x140604D88
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmIdlePrepareExitLatencyTrace(__int64 a1, int a2)
{
  char v2; // r8
  int v3; // eax
  int v4; // eax
  unsigned int v5; // r9d
  unsigned int v6; // eax

  v2 = 0;
  if ( a2 == -1 )
    return v2;
  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_DWORD *)(a1 + 20) = v4;
    if ( v4 )
      return v2;
  }
  v5 = stru_140E67200.Padding[1];
  v6 = 0;
  if ( LODWORD(stru_140E67200.Padding[1]) <= 0x64 )
  {
    if ( !LODWORD(stru_140E67200.Padding[1]) )
      goto LABEL_8;
  }
  else
  {
    v5 = 100;
  }
  v6 = 0x64 / v5;
LABEL_8:
  *(_DWORD *)(a1 + 20) = v6;
  if ( v6 )
  {
    *(_BYTE *)(a1 + 3) = 1;
    return 1;
  }
  return v2;
}
