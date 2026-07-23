/*
 * XREFs of SdbpCheckUptoStringVersion @ 0x14088D9E4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x14088D628 (SdbpCheckAttribute.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SdbpCheckUptoStringVersion(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v3; // r11d
  BOOL v4; // r8d
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r10
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx

  v3 = 0;
  v4 = 1;
  while ( 1 )
  {
    v5 = *a1;
    if ( !*a1 )
      break;
    v6 = *a2;
    if ( !*a2 )
      return 0;
    v7 = 0LL;
    v8 = 0LL;
    v3 = 0;
    if ( v5 == 42 )
    {
      v3 = 1;
      ++a1;
    }
    else
    {
      while ( v5 >= 0x30u && v5 <= 0x39u )
      {
        ++a1;
        v7 = v5 + 2 * (5 * v7 - 24);
        v5 = *a1;
      }
    }
    while ( v6 >= 0x30u && v6 <= 0x39u )
    {
      if ( !v3 )
        v8 = v6 + 2 * (5 * v8 - 24);
      v6 = *++a2;
    }
    if ( !v3 && v7 != v8 )
    {
      v5 = *a1;
      v4 = v7 > v8;
      break;
    }
    if ( *a1 )
    {
      if ( *a2 && *a1 != *a2 )
        return 0;
      ++a1;
    }
    if ( *a2 )
      ++a2;
  }
  if ( (v5 || *a2) && (!v4 || v5 || !v3) )
    return 0;
  return v4;
}
