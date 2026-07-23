/*
 * XREFs of MiTranslateWsType @ 0x1404A8B64
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x1404A8AF4 (MmGetWorkingSetLeafSize.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateWsType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 0LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3LL;
  v4 = v2 - 1;
  if ( !v4 )
    return 1LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 2LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 4LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 5LL;
  v8 = v7 - 1;
  if ( !v8 )
    return 6LL;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      return 8LL;
    return 0LL;
  }
  return 7LL;
}
