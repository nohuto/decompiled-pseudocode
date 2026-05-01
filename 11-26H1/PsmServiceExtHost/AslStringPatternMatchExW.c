/*
 * XREFs of AslStringPatternMatchExW @ 0x180099A68
 * Callers:
 *     SdbpCheckAttribute @ 0x1800923C8 (SdbpCheckAttribute.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180094584 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180095210 (SdbpCheckMatchingRegistryValue.c)
 *     AslStringPatternMatchExW @ 0x180099A68 (AslStringPatternMatchExW.c)
 *     AslpProcessMatchRegNode @ 0x1800A0D28 (AslpProcessMatchRegNode.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x180099A68 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchExW(WCHAR *a1, WCHAR *a2)
{
  unsigned int v4; // edi
  WCHAR v5; // ax
  WCHAR v6; // bp
  WCHAR v7; // bx
  WCHAR *v8; // r15
  WCHAR v9; // bp
  WCHAR v10; // bx

  v4 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*a1 )
      {
        if ( !*a2 )
          return 1;
        v5 = *a1;
LABEL_5:
        v6 = *a2;
        if ( v5 != *a2 )
        {
          v7 = RtlUpcaseUnicodeChar(*a1);
          if ( v7 != RtlUpcaseUnicodeChar(v6) )
            return v4;
        }
LABEL_7:
        ++a1;
        goto LABEL_8;
      }
      if ( *a1 == 63 )
        goto LABEL_7;
      v5 = *a1;
      if ( *a1 != 42 )
        goto LABEL_5;
      v8 = a1 + 1;
      if ( a1[1] != 42 )
        break;
      ++a1;
    }
    if ( !*v8 )
      return 1;
    v9 = *a2;
    if ( *v8 == *a2 || (v10 = RtlUpcaseUnicodeChar(*v8), v10 == RtlUpcaseUnicodeChar(v9)) )
    {
      if ( (unsigned int)AslStringPatternMatchExW(a1 + 1, a2) )
        return 1;
    }
LABEL_8:
    if ( !*a2 )
      return v4;
    ++a2;
  }
}
