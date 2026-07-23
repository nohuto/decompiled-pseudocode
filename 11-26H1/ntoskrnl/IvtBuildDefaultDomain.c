/*
 * XREFs of IvtBuildDefaultDomain @ 0x1405A8490
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1405A8178 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x1405A8660 (IvtConfigureAts.c)
 *     IvtSetDevicePasidTable @ 0x1405A9FD0 (IvtSetDevicePasidTable.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x1404F9C14 (IvtGetBlockedDomain.c)
 *     IommupGetTranslationTypeFromPolicy @ 0x14058E7F8 (IommupGetTranslationTypeFromPolicy.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IvtBuildDefaultDomain(__int64 a1, unsigned __int64 *a2, char a3)
{
  int v6; // ecx
  __int64 result; // rax
  unsigned int *v8; // rdx
  int TranslationTypeFromPolicy; // ebx

  memset_0(a2, 0, 0x70uLL);
  v6 = *(_DWORD *)(a1 + 308);
  if ( v6 != 2 && v6 != 1 )
    return 3221225473LL;
  v8 = 0LL;
  if ( a3 )
  {
    TranslationTypeFromPolicy = 1;
  }
  else
  {
    TranslationTypeFromPolicy = IommupGetTranslationTypeFromPolicy(v6);
    if ( TranslationTypeFromPolicy != 1 )
      goto LABEL_9;
  }
  LODWORD(v8) = IvtGetBlockedDomain(a1, v8, a2 + 5);
LABEL_9:
  *((_DWORD *)a2 + 12) = (_DWORD)v8;
  result = 0LL;
  *((_DWORD *)a2 + 1) = TranslationTypeFromPolicy;
  *(_DWORD *)a2 = 1;
  return result;
}
