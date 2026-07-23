/*
 * XREFs of _CmMapPnpObjectTypeToCmObjectType @ 0x14096365C
 * Callers:
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1409636A4 (PiDmGetCmObjectConstraintListFromCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapPnpObjectTypeToCmObjectType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  v5 = v3 - 1;
  if ( !v5 )
    return 4LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 5LL;
  if ( v6 == 1 )
    return 6LL;
  return 0LL;
}
