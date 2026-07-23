/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x1801245EC
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014D174 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     LdrpQueryValueKey @ 0x1800D6FB0 (LdrpQueryValueKey.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 */

int __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  ULONG v2; // r12d
  int v5; // ebx
  size_t v6; // rax
  _DWORD *Heap_0; // rax
  _DWORD *v8; // rsi
  NTSTATUS v9; // edi
  unsigned int v10; // ebx
  const wchar_t *v11; // rbx
  wchar_t *v12; // rdi
  _WORD *v13; // r14
  ULONG v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+A0h] [rbp+50h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v20 = 7;
  Value = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = (wchar_t *)L"AlternateCodePage";
  v5 = 0;
  v6 = 2 * wcslen(L"AlternateCodePage");
  ResultLength = 0;
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  ValueName.Length = v6;
  ValueName.MaximumLength = v6 + 2;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
  v8 = Heap_0;
  if ( Heap_0 )
  {
    v9 = NtQueryValueKey(a2, &ValueName, KeyValuePartialInformation, Heap_0, 0xCu, &ResultLength);
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      v5 = v8[2];
      v20 = v8[1];
    }
    LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( v9 != -1073741772 )
    {
      if ( v5 )
      {
        if ( v9 == -2147483643 )
        {
          ResultLength = v5 + 2;
          v10 = (v5 + 5) & 0xFFFFFFFC;
          if ( v10 )
          {
            Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v10);
            v11 = (const wchar_t *)Heap_0;
            if ( Heap_0 )
            {
              v12 = (wchar_t *)Heap_0;
              if ( !(unsigned int)LdrpQueryValueKey(a2, &ValueName, &v20, Heap_0, &ResultLength)
                && (v20 == 1 || v20 == 7) )
              {
                v13 = (_WORD *)(a1 + 20);
                v14 = ResultLength >> 1;
                v12 = (wchar_t *)v11;
                v15 = 0LL;
                while ( v2 < v14 && v11 && *v11 )
                {
                  if ( !wcsicmp(v11, L"*") )
                  {
                    *(_WORD *)(a1 + 20) = -1;
                    break;
                  }
                  RtlInitUnicodeString(&ValueName, v11);
                  if ( !RtlUnicodeStringToInteger(&ValueName, 0xAu, &Value) )
                  {
                    ++v15;
                    *v13++ = Value;
                    if ( v15 >= 4 )
                      break;
                  }
                  v16 = -1LL;
                  do
                    ++v16;
                  while ( v11[v16] );
                  v2 += v16 + 1;
                  v11 += (unsigned int)(v16 + 1);
                }
              }
              LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v12);
            }
          }
        }
      }
    }
  }
  return (int)Heap_0;
}
