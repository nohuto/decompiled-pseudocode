/*
 * XREFs of ?ParseReserved@@YAKREBGPEBG@Z @ 0x1401C9D68
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     wcsstr @ 0x1401C7178 (wcsstr.c)
 */

__int64 __fastcall ParseReserved(const wchar_t *a1, const unsigned __int16 *a2)
{
  wchar_t *v2; // rax
  wchar_t v3; // cx
  __int16 *v4; // rdi
  __int16 v5; // bx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+4Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  DestinationString = 0LL;
  Value = 0;
  if ( a1 )
  {
    v2 = wcsstr(a1, L"hotkey.");
    if ( v2 )
    {
      v3 = v2[7];
      v4 = (__int16 *)(v2 + 7);
      while ( v3 >= 0x30u && v3 <= 0x39u )
        v3 = *++v4;
      v5 = *v4;
      *v4 = 0;
      RtlInitUnicodeString(&DestinationString, v2 + 7);
      *v4 = v5;
      RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    }
  }
  return Value;
}
