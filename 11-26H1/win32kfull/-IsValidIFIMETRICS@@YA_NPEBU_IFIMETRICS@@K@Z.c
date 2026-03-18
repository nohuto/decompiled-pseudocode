/*
 * XREFs of ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x14020F71C
 * Callers:
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x140282D40 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 * Callees:
 *     ?IsValidString@@YA_NPEBXKJ@Z @ 0x14020F868 (-IsValidString@@YA_NPEBXKJ@Z.c)
 *     ?IsValidFONTSIM@@YA_NPEBXKJ@Z @ 0x14020F8AC (-IsValidFONTSIM@@YA_NPEBXKJ@Z.c)
 *     ?IsValidAXESLISTW@@YA_NPEBXKJ@Z @ 0x14034A41C (-IsValidAXESLISTW@@YA_NPEBXKJ@Z.c)
 *     ?IsValidDESIGNVECTOR@@YA_NPEBXKJ@Z @ 0x14034A470 (-IsValidDESIGNVECTOR@@YA_NPEBXKJ@Z.c)
 */

bool __fastcall IsValidIFIMETRICS(const struct _IFIMETRICS *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  int *v4; // rcx
  int *v5; // rcx
  int *v6; // rcx
  int *v7; // rcx
  unsigned __int64 dpCharSets; // rax
  int v9; // ecx
  _BYTE *i; // rdx
  unsigned __int64 cjIfiExtra; // rdx
  unsigned __int64 v13; // rax

  v2 = a2;
  if ( a2 < 0xC0
    || a1->cjThis != a2
    || !IsValidString(a1, a2, a1->dpwszFamilyName)
    || !IsValidString(v4, v2, v4[3])
    || !IsValidString(v5, v2, v5[4])
    || !IsValidString(v6, v2, v6[5])
    || !IsValidFONTSIM(v7, v2, v7[6]) )
  {
    return 0;
  }
  dpCharSets = a1->dpCharSets;
  if ( (_DWORD)dpCharSets )
  {
    if ( (dpCharSets & 0x80000000) != 0LL || dpCharSets >= v2 )
      return 0;
    v9 = 0;
    for ( i = (char *)a1 + dpCharSets; v9 < 16; ++i )
    {
      if ( a1->dpCharSets + (__int64)v9 >= v2 )
        return 0;
      if ( *i == 1 )
        break;
      ++v9;
    }
  }
  cjIfiExtra = a1->cjIfiExtra;
  if ( (_DWORD)cjIfiExtra )
  {
    if ( cjIfiExtra > v2 - 192 )
      return 0;
    if ( (unsigned int)cjIfiExtra >= 0x14 )
    {
      if ( !IsValidAXESLISTW(a1, v2, a1[1].dpwszFaceName) )
        return 0;
    }
    else
    {
      if ( (_DWORD)cjIfiExtra == 4 )
        return 1;
      if ( (_DWORD)cjIfiExtra == 8 || (_DWORD)cjIfiExtra == 12 )
      {
LABEL_28:
        v13 = a1[1].cjIfiExtra;
        return !(_DWORD)v13
            || (int)v13 > 0 && v13 < v2 && v2 > 0x18 && v13 <= v2 - 24 && (((_BYTE)a1 + (_BYTE)v13) & 3) == 0;
      }
      if ( (_DWORD)cjIfiExtra != 16 )
        return 0;
    }
    if ( !IsValidDESIGNVECTOR(a1, v2, a1[1].dpwszStyleName) )
      return 0;
    goto LABEL_28;
  }
  return 1;
}
