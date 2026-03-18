/*
 * XREFs of HsaBuildDefaultDomain @ 0x1405A911C
 * Callers:
 *     HsaAttachDeviceDomainInternal @ 0x1405A8F88 (HsaAttachDeviceDomainInternal.c)
 *     HsaSetDevicePasidTable @ 0x1405AA810 (HsaSetDevicePasidTable.c)
 * Callees:
 *     IommupGetTranslationTypeFromPolicy @ 0x14058C078 (IommupGetTranslationTypeFromPolicy.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HsaBuildDefaultDomain(__int64 a1, int *a2, char a3)
{
  int v6; // ecx
  int v7; // edx
  __int64 result; // rax
  int TranslationTypeFromPolicy; // eax

  memset_0(a2, 0, 0x70uLL);
  v6 = *(_DWORD *)(a1 + 172);
  v7 = 1;
  if ( v6 != 2 && v6 != 1 )
    return 3221225473LL;
  if ( a3 )
    TranslationTypeFromPolicy = 1;
  else
    TranslationTypeFromPolicy = IommupGetTranslationTypeFromPolicy(v6);
  a2[1] = TranslationTypeFromPolicy;
  result = 0LL;
  *a2 = v7;
  return result;
}
