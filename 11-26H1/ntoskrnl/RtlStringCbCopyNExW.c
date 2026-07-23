/*
 * XREFs of RtlStringCbCopyNExW @ 0x1404AF9AC
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x140956E10 (_CmGetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cbToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  size_t v8; // r10
  size_t v9; // r9
  signed __int64 v10; // r8
  NTSTRSAFE_PWSTR v11; // rdx
  wchar_t v12; // ax
  NTSTRSAFE_PWSTR v13; // rax
  __int64 v14; // r10
  NTSTATUS result; // eax

  v8 = cbDest >> 1;
  if ( !(cbDest >> 1) || v8 > 0x7FFFFFFF )
    return -1073741811;
  v9 = cbToCopy >> 1;
  if ( v9 >= 0x7FFFFFFF )
  {
    result = -1073741811;
    *pszDest = 0;
LABEL_13:
    if ( cbDest )
      *pszDest = 0;
    return result;
  }
  v10 = (char *)pszSrc - (char *)pszDest;
  v11 = pszDest;
  do
  {
    if ( !v9 )
      break;
    v12 = *(NTSTRSAFE_PWSTR)((char *)v11 + v10);
    if ( !v12 )
      break;
    *v11 = v12;
    --v9;
    ++v11;
    --v8;
  }
  while ( v8 );
  v13 = v11 - 1;
  if ( v8 )
    v13 = v11;
  v14 = -(__int64)v8;
  *v13 = 0;
  result = v14 == 0 ? 0x80000005 : 0;
  if ( !v14 )
    goto LABEL_13;
  return result;
}
