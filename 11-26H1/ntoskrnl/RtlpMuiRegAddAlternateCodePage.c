/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x1404F1678
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x140B2FCBC (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     LdrpQueryValueKey @ 0x140B3E948 (LdrpQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  size_t v4; // rax
  int v5; // eax
  int v6; // ecx
  __int64 Pool2; // rax
  const wchar_t *v8; // rbx
  void *v9; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  __int64 v12; // rsi
  _WORD *v13; // r14
  __int64 v14; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h]

  v18 = 7;
  LODWORD(v17) = 0;
  Value = 0;
  DestinationString.Buffer = (wchar_t *)L"AlternateCodePage";
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v4 = 2 * wcslen(L"AlternateCodePage");
  if ( v4 >= 0xFFFE )
    LOWORD(v4) = -4;
  DestinationString.Length = v4;
  DestinationString.MaximumLength = v4 + 2;
  v5 = LdrpQueryValueKey(a2, &DestinationString, (__int64)&v17);
  if ( v5 != -1073741772 )
  {
    v6 = v17;
    if ( (_DWORD)v17 )
    {
      if ( v5 == -2147483643 )
      {
        LODWORD(v17) = v17 + 2;
        if ( ((v6 + 5) & 0xFFFFFFFC) != 0 )
        {
          Pool2 = ExAllocatePool2(0x100uLL);
          v8 = (const wchar_t *)Pool2;
          if ( Pool2 )
          {
            v9 = (void *)Pool2;
            if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v17) && (v18 == 1 || v18 == 7) )
            {
              v10 = 0;
              v11 = (unsigned int)v17 >> 1;
              v12 = 0LL;
              v13 = (_WORD *)(a1 + 20);
              v9 = (void *)v8;
              while ( v10 < v11 && v8 && *v8 )
              {
                if ( !wcsicmp(v8, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  break;
                }
                RtlInitUnicodeString(&DestinationString, v8);
                if ( !RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) )
                {
                  ++v12;
                  *v13++ = Value;
                  if ( v12 >= 4 )
                    break;
                }
                v14 = -1LL;
                do
                  ++v14;
                while ( v8[v14] );
                v10 += v14 + 1;
                v8 += (unsigned int)(v14 + 1);
              }
            }
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
    }
  }
}
