/*
 * XREFs of ValidateRegistrLangType @ 0x18014DB00
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801254D8 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateRegistrLangType(int a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  _DWORD *v3; // r10
  bool v4; // zf
  unsigned int v5; // ecx

  v1 = 0;
  if ( (a1 & 0x18) != 0 && ((a1 & 1) != 0 || (a1 & 6) != 0) )
  {
    v2 = 0;
    v3 = &ulInvalidTypes;
    while ( v2 < 8 )
    {
      if ( *v3 == (a1 & *v3) )
        return (unsigned int)-1073741811;
      ++v2;
      ++v3;
    }
    if ( (a1 & 1) != 0 || (a1 & 2) != 0 )
    {
      v4 = (a1 & 0x10) == 0;
      v5 = 0;
      if ( v4 )
        return (unsigned int)-1073741811;
      return v5;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
