/*
 * XREFs of SdbpCheckFromStringVersion @ 0x14088D874
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x14088D628 (SdbpCheckAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckFromStringVersion(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 *v3; // r8
  unsigned int v4; // r9d
  unsigned __int16 v5; // r10
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r11
  int v8; // edi
  unsigned __int16 v9; // ax

  v2 = *a1;
  v3 = a1;
  v4 = 1;
  while ( v2 )
  {
    v5 = *a2;
    if ( !*a2 )
      break;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( v2 == 42 )
    {
      v8 = 1;
      ++v3;
    }
    else
    {
      while ( 1 )
      {
        v9 = *v3;
        if ( *v3 < 0x30u || v9 > 0x39u )
          break;
        ++v3;
        v6 = v9 + 2 * (5 * v6 - 24);
      }
    }
    while ( v5 >= 0x30u && v5 <= 0x39u )
    {
      if ( !v8 )
        v7 = v5 + 2 * (5 * v7 - 24);
      v5 = *++a2;
    }
    if ( !v8 && v6 != v7 )
      return v6 < v7;
    if ( *v3 )
    {
      if ( *a2 && *v3 != *a2 )
        return 0;
      ++v3;
    }
    if ( *a2 )
      ++a2;
    v2 = *v3;
    if ( (*v3 || *a2) && (!v4 || v2 || !v8) )
      v4 = 0;
  }
  return v4;
}
