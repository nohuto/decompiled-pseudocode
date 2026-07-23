/*
 * XREFs of RtlIpv4AddressToStringExW @ 0x1800D9E20
 * Callers:
 *     <none>
 * Callees:
 *     swprintf_s @ 0x180133F00 (swprintf_s.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

LONG __stdcall RtlIpv4AddressToStringExW(
        const struct in_addr *Address,
        USHORT Port,
        PWSTR AddressString,
        PULONG AddressStringLength)
{
  int v7; // eax
  wchar_t *v8; // rbx
  ULONG v9; // ebx
  LONG result; // eax
  wchar_t Buffer[22]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v12[4]; // [rsp+6Ch] [rbp-3Ch] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v7 = swprintf_s(
         Buffer,
         0x10uLL,
         L"%u.%u.%u.%u",
         *(unsigned __int8 *)Address,
         *((unsigned __int8 *)Address + 1),
         *((unsigned __int8 *)Address + 2),
         *((unsigned __int8 *)Address + 3));
  v8 = &Buffer[v7];
  if ( Port )
    v8 += swprintf_s(&Buffer[v7], (v12 - (_BYTE *)v8) >> 1, L":%u", (unsigned __int16)__ROR2__(Port, 8));
  v9 = v8 - Buffer + 1;
  if ( *AddressStringLength < v9 )
  {
    *AddressStringLength = v9;
    return -1073741811;
  }
  else
  {
    memmove(AddressString, Buffer, 2LL * v9);
    result = 0;
    *AddressStringLength = v9;
  }
  return result;
}
