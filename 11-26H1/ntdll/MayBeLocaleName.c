/*
 * XREFs of MayBeLocaleName @ 0x180122E14
 * Callers:
 *     LdrpFusionManifestCodePages @ 0x1800D55E8 (LdrpFusionManifestCodePages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MayBeLocaleName(_WORD *a1)
{
  __int16 v1; // ax
  bool result; // al

  result = 0;
  if ( (unsigned __int16)(*a1 - 97) <= 0x19u && (unsigned __int16)(a1[1] - 97) <= 0x19u )
  {
    v1 = a1[2];
    if ( v1 == 45 || !v1 || (unsigned __int16)(v1 - 97) <= 0x19u && (a1[3] == 45 || !a1[3]) )
      return 1;
  }
  return result;
}
