/*
 * XREFs of RtlStringCchCatA @ 0x140031110
 * Callers:
 *     CatError @ 0x14006E870 (CatError.c)
 *     Debugger @ 0x14006F69C (Debugger.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400B6F30 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  NTSTRSAFE_PSTR v4; // rax
  char *v5; // rcx
  size_t v6; // rdx
  __int64 v7; // rax
  const char *v8; // r10
  char v9; // r8
  char *v10; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  v3 = cchDest;
  v4 = pszDest;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
    return -1073741811;
  v5 = &pszDest[cchDest - v3];
  v6 = v3;
  v7 = 2147483646LL;
  v8 = (const char *)(pszSrc - v5);
  do
  {
    if ( !v7 )
      break;
    v9 = v5[(_QWORD)v8];
    if ( !v9 )
      break;
    *v5 = v9;
    --v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  v10 = v5 - 1;
  if ( v6 )
    v10 = v5;
  *v10 = 0;
  result = -2147483643;
  if ( v6 )
    return 0;
  return result;
}
