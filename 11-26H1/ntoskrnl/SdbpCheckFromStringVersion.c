/*
 * XREFs of SdbpCheckFromStringVersion @ 0x140887474
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140714174 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140887228 (SdbpCheckAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckFromStringVersion(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 *v3; // r8
  unsigned int v4; // r9d
  unsigned __int16 v5; // r10
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r11
  int v9; // edi

  v2 = *a1;
  v3 = a1;
  v4 = 1;
  while ( v2 )
  {
    v5 = *a2;
    if ( !*a2 )
      break;
    v6 = *v3;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    if ( *v3 == 42 )
    {
      v9 = 1;
      ++v3;
    }
    else
    {
      while ( v6 >= 0x30u && v6 <= 0x39u )
      {
        ++v3;
        v7 = v6 + 2 * (5 * v7 - 24);
        v6 = *v3;
      }
    }
    while ( v5 >= 0x30u && v5 <= 0x39u )
    {
      if ( !v9 )
        v8 = v5 + 2 * (5 * v8 - 24);
      v5 = *++a2;
    }
    if ( !v9 && v7 != v8 )
      return v7 < v8;
    if ( *v3 )
    {
      if ( *a2 && *v3 != *a2 )
        return 0;
      ++v3;
    }
    if ( *a2 )
      ++a2;
    v2 = *v3;
    if ( (*v3 || *a2) && (!v4 || v2 || !v9) )
      v4 = 0;
  }
  return v4;
}
