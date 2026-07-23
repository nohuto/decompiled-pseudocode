/*
 * XREFs of PspSetJobFreezeCountCallback @ 0x1404CAF80
 * Callers:
 *     <none>
 * Callees:
 *     PspComputeExecutionState @ 0x140A94964 (PspComputeExecutionState.c)
 */

__int64 __fastcall PspSetJobFreezeCountCallback(_DWORD *a1, __int64 *a2)
{
  int v3; // eax
  int v4; // r9d
  int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // r10
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  if ( (*(_DWORD *)*a2 & 1) != 0 )
  {
    v3 = a1[266];
    v4 = v3 - 1;
    v5 = v3 + 1;
    if ( !*(_BYTE *)(*a2 + 4) )
      v5 = v4;
    a1[266] = v5;
    v6 = *a2;
    if ( (*(_DWORD *)v6 & 8) == 0 )
    {
      v10 = a1[267];
      if ( *(_BYTE *)(v6 + 4) )
        v11 = v10 + 1;
      else
        v11 = v10 - 1;
      a1[267] = v11;
    }
  }
  if ( (*(_DWORD *)*a2 & 4) != 0 )
  {
    v12 = a1[269];
    if ( *(_BYTE *)(*a2 + 5) )
      v13 = v12 + 1;
    else
      v13 = v12 - 1;
    a1[269] = v13;
  }
  v7 = PspComputeExecutionState();
  *(_BYTE *)(v8 + 8) = v7;
  return 0LL;
}
