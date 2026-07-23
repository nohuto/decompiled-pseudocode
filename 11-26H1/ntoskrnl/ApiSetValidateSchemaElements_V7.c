/*
 * XREFs of ApiSetValidateSchemaElements_V7 @ 0x1406DE418
 * Callers:
 *     ApiSetValidateSchemaFormat_V7 @ 0x1406DE5E8 (ApiSetValidateSchemaFormat_V7.c)
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetValidateSchemaElements_V7(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int i; // r9d
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // r8
  unsigned int v6; // r11d
  unsigned int v7; // r10d
  unsigned int v8; // r8d

  v1 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 48); ++i )
  {
    v3 = *(unsigned __int16 *)(a1 + 18);
    v4 = *(unsigned int *)(a1 + 44) + i * (unsigned __int64)*(unsigned __int8 *)(a1 + 52) - v3;
    if ( (*(_BYTE *)(v4 + a1 + 10) & 2) != 0 )
    {
      if ( *(unsigned __int16 *)(v4 + a1 + 4) > *(unsigned __int16 *)(a1 + 96) - 1 )
        return (unsigned int)-1073741596;
      v5 = *(unsigned int *)(a1 + 92)
         + *(unsigned __int8 *)(a1 + 100) * (unsigned __int64)*(unsigned __int16 *)(v4 + a1 + 4)
         - v3;
      v6 = *(_DWORD *)(a1 + 40);
      v7 = *(_DWORD *)(v5 + a1 + 4);
      if ( v7 > v6 )
        return (unsigned int)-1073741596;
      v8 = v7 + 2 * *(unsigned __int16 *)(v5 + a1 + 8);
      if ( v8 < v7 )
        return v1;
      if ( v8 > v6 )
        return (unsigned int)-1073741596;
    }
  }
  return v1;
}
