/*
 * XREFs of ValidateRegistrLangType @ 0x1408AFAAC
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x140724EE4 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateRegistrLangType(int a1)
{
  unsigned int v1; // edx
  char v2; // r8
  int v3; // r9d
  __int64 *v4; // r11
  unsigned int v5; // ecx

  v1 = 0;
  v2 = a1;
  if ( (a1 & 0x18) != 0 && ((a1 & 1) != 0 || (a1 & 6) != 0) )
  {
    v3 = 0;
    v4 = ulInvalidTypes;
    while ( v3 < 8 )
    {
      if ( *(_DWORD *)v4 == (a1 & *(_DWORD *)v4) )
        return (unsigned int)-1073741811;
      ++v3;
      v4 = (__int64 *)((char *)v4 + 4);
    }
    if ( (a1 & 1) != 0 || (a1 & 2) != 0 )
    {
      v5 = 0;
      if ( (v2 & 0x10) == 0 )
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
