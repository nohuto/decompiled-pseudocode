/*
 * XREFs of _anonymous_namespace_::GetSidFromCurrentProcessToken @ 0x180111EC0
 * Callers:
 *     ?InitializeForCurrentProcess@SipcPrivateNamespaceAttributes@@QEAAJXZ @ 0x180112078 (-InitializeForCurrentProcess@SipcPrivateNamespaceAttributes@@QEAAJXZ.c)
 * Callees:
 *     SipcFailFast @ 0x18011347C (SipcFailFast.c)
 */

signed int __fastcall anonymous_namespace_::GetSidFromCurrentProcessToken(
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        _QWORD *a2,
        DWORD a3,
        void *a4,
        __int64 a5)
{
  BOOL TokenInformation; // edi
  signed int result; // eax
  unsigned int v8; // ecx
  DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  TokenInformation = GetTokenInformation((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenInformationClass, a4, a3, v9);
  if ( TokenInformation )
  {
    if ( *a2 == a5 )
      return 0;
    if ( *a2 )
    {
      SipcFailFast(2147549183LL);
      __debugbreak();
    }
  }
  result = GetLastError();
  if ( result > 0 )
    v8 = (unsigned __int16)result | 0xC0070000;
  else
    v8 = result;
  if ( TokenInformation || v8 == -1073741700 )
  {
    *(_QWORD *)a5 = 257LL;
    *(_DWORD *)(a5 + 8) = 0;
    return 1;
  }
  else if ( result > 0 )
  {
    return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
