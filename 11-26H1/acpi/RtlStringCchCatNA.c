/*
 * XREFs of RtlStringCchCatNA @ 0x140030920
 * Callers:
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400B6F30 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToAppend)
{
  size_t v6; // rax
  NTSTATUS v7; // ebx
  NTSTRSAFE_PSTR v8; // r10
  NTSTATUS v9; // edi
  size_t v10; // rdx
  char *v11; // rcx
  size_t v12; // rdx
  const char *v13; // r11
  char v14; // r8
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  v6 = cchDest;
  v7 = 0;
  v8 = pszDest;
  v9 = 0;
  while ( *v8 )
  {
    ++v8;
    if ( !--v6 )
    {
      v9 = -1073741811;
      v10 = 0LL;
      v6 = cchDest;
      goto LABEL_7;
    }
  }
  v10 = cchDest - v6;
LABEL_7:
  if ( v9 < 0 )
    return v9;
  v11 = &pszDest[v10];
  if ( v6 )
  {
    v12 = cchToAppend + v6 + v10 - cchDest;
    v13 = (const char *)(pszSrc - v11);
    while ( v12 )
    {
      v14 = v11[(_QWORD)v13];
      if ( !v14 )
        break;
      *v11 = v14;
      --v12;
      ++v11;
      if ( !--v6 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    --v11;
    v7 = -2147483643;
  }
  result = v7;
  *v11 = 0;
  return result;
}
