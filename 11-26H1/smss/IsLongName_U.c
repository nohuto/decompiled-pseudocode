/*
 * XREFs of IsLongName_U @ 0x14001CC34
 * Callers:
 *     FindLFNorSFN_U @ 0x14001C750 (FindLFNorSFN_U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLongName_U(_WORD *a1, int a2)
{
  int v3; // ecx
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // edx

  if ( !a2 || a2 > 12 || *a1 == 46 )
    return 1LL;
  v3 = 0;
  v4 = a2;
  v5 = 0LL;
  v6 = a2 - 1;
  while ( v5 < v4 )
  {
    if ( a1[v5] == 46 )
    {
      if ( v3 || v6 > 3 )
        return 1LL;
      v3 = 1;
    }
    if ( v5 >= 8 && !v3 )
      return 1LL;
    --v6;
    ++v5;
  }
  return 0LL;
}
