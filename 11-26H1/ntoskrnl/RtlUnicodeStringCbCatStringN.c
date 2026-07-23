/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x140719A68
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x140890DFC (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x140472260 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  NTSTRSAFE_PCWSTR v3; // rbx
  NTSTATUS result; // eax
  unsigned __int16 *v5; // rcx
  _WORD *v6; // r10
  unsigned __int64 v7; // r11
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r11
  __int16 v12; // cx
  unsigned __int64 v13; // r8
  __int64 v14; // r9

  v3 = pszSrc;
  result = RtlUnicodeStringValidateWorker_0(DestinationString, (const size_t)pszSrc, cbToAppend);
  if ( result >= 0 && v5 )
  {
    v8 = *((_QWORD *)v5 + 1);
    v9 = (unsigned __int64)v5[1] >> 1;
    v10 = (unsigned __int64)*v5 >> 1;
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    if ( result < 0 )
      return result;
  }
  v11 = v7 >> 1;
  if ( v11 > 0x7FFF )
    return -1073741811;
  result = 0;
  v12 = 0;
  v13 = v9 - v10;
  if ( v13 )
  {
    v14 = v8 + 2 * v10 - (_QWORD)v3;
    while ( v11 )
    {
      if ( *v3 )
      {
        *(NTSTRSAFE_PCWSTR)((char *)v3 + v14) = *v3;
        --v11;
        ++v3;
        ++v12;
        if ( --v13 )
          continue;
      }
      if ( v13 )
        break;
      goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( v11 )
    {
      if ( *v3 )
        result = -2147483643;
    }
  }
  *v6 = 2 * (v10 + v12);
  return result;
}
