/*
 * XREFs of RtlStringCbCopyW @ 0x14000E174
 * Callers:
 *     SmpCreateVolumeDescriptors @ 0x140010258 (SmpCreateVolumeDescriptors.c)
 *     SmpSavePageFile @ 0x140012AB8 (SmpSavePageFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  signed __int64 v4; // r10
  size_t v5; // r9
  wchar_t v6; // ax
  NTSTRSAFE_PWSTR v7; // rax
  NTSTATUS result; // eax

  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v4 = (char *)pszSrc - (char *)pszDest;
    v5 = 2147483646 - v3;
    do
    {
      if ( !(v5 + v3) )
        break;
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v4);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --v3;
    }
    while ( v3 );
    v7 = pszDest - 1;
    if ( v3 )
      v7 = pszDest;
    *v7 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  else
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  return result;
}
