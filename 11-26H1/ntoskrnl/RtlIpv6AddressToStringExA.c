/*
 * XREFs of RtlIpv6AddressToStringExA @ 0x14048B780
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6AddressToStringA @ 0x14048B8A0 (RtlIpv6AddressToStringA.c)
 *     sprintf_s @ 0x14053E940 (sprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

NTSTATUS __stdcall RtlIpv6AddressToStringExA(
        const struct in6_addr *Address,
        ULONG ScopeId,
        USHORT Port,
        PSTR AddressString,
        PULONG AddressStringLength)
{
  char *p_Src; // rdx
  char *v9; // rax
  char *v10; // rbx
  int v11; // esp
  ULONG v12; // eax
  ULONG v13; // ebx
  char Src; // [rsp+20h] [rbp-98h] BYREF
  CHAR S; // [rsp+21h] [rbp-97h] BYREF
  _BYTE v17[15]; // [rsp+61h] [rbp-57h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  if ( Port )
    Src = 91;
  p_Src = &Src;
  if ( Port )
    p_Src = &S;
  v9 = RtlIpv6AddressToStringA(Address, p_Src);
  v10 = v9;
  if ( ScopeId )
    v10 = &v9[sprintf_s(v9, v17 - v9, "%%%u", ScopeId)];
  if ( Port )
    LODWORD(v10) = sprintf_s(v10, v17 - v10, "]:%u", (unsigned __int16)__ROR2__(Port, 8)) + (_DWORD)v10;
  v12 = *AddressStringLength;
  v13 = (_DWORD)v10 - (v11 + 32) + 1;
  *AddressStringLength = v13;
  if ( v12 < v13 )
    return -1073741811;
  memmove(AddressString, &Src, v13);
  return 0;
}
