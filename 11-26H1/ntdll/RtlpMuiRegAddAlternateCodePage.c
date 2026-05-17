/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x18012487C
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014D2C4 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpQueryValueKey @ 0x1800D9FF0 (LdrpQueryValueKey.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 */

wchar_t *__fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  int v5; // ebx
  size_t v6; // rax
  wchar_t *result; // rax
  wchar_t *v8; // rsi
  int v9; // edi
  const wchar_t *v10; // rbx
  _WORD *v11; // r14
  unsigned int v12; // r15d
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v17 = 7;
  v15 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  DestinationString.Buffer = (wchar_t *)L"AlternateCodePage";
  v5 = 0;
  v6 = 2 * wcslen(L"AlternateCodePage");
  v18 = 0;
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  DestinationString.Length = v6;
  DestinationString.MaximumLength = v6 + 2;
  result = (wchar_t *)RtlAllocateHeap_0();
  v8 = result;
  if ( result )
  {
    v9 = NtQueryValueKey(a2, &DestinationString, 2LL, result, 12, &v18);
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      v5 = *((_DWORD *)v8 + 2);
      v17 = *((_DWORD *)v8 + 1);
    }
    result = (wchar_t *)RtlFreeHeap_0();
    if ( v9 != -1073741772 )
    {
      if ( v5 )
      {
        if ( v9 == -2147483643 )
        {
          v18 = v5 + 2;
          if ( ((v5 + 5) & 0xFFFFFFFC) != 0 )
          {
            result = (wchar_t *)RtlAllocateHeap_0();
            v10 = result;
            if ( result )
            {
              if ( !(unsigned int)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v17, result, &v18)
                && (v17 == 1 || v17 == 7) )
              {
                v11 = (_WORD *)(a1 + 20);
                v12 = v18 >> 1;
                v13 = 0LL;
                while ( v2 < v12 && v10 && *v10 )
                {
                  if ( !wcsicmp(v10, L"*") )
                  {
                    *(_WORD *)(a1 + 20) = -1;
                    return (wchar_t *)RtlFreeHeap_0();
                  }
                  RtlInitUnicodeString(&DestinationString, v10);
                  if ( !(unsigned int)RtlUnicodeStringToInteger(&DestinationString.Length, 0xAu, &v15) )
                  {
                    ++v13;
                    *v11++ = v15;
                    if ( v13 >= 4 )
                      return (wchar_t *)RtlFreeHeap_0();
                  }
                  v14 = -1LL;
                  do
                    ++v14;
                  while ( v10[v14] );
                  v2 += v14 + 1;
                  v10 += (unsigned int)(v14 + 1);
                }
              }
              return (wchar_t *)RtlFreeHeap_0();
            }
          }
        }
      }
    }
  }
  return result;
}
