/*
 * XREFs of HamQueryCallerTerminateReason @ 0x18000C7B0
 * Callers:
 *     <none>
 * Callees:
 *     CempGetTokenHostInfo @ 0x18000C8A0 (CempGetTokenHostInfo.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000CB14 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall HamQueryCallerTerminateReason(enum _HAM_TERMINATE_REASON *a1)
{
  NTSTATUS TokenHostInfo; // ebx
  void *TokenHandle; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int16 v5[232]; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v6[96]; // [rsp+200h] [rbp-78h] BYREF

  memset_0(v5, 0, 0x228uLL);
  TokenHandle = 0LL;
  TokenHostInfo = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( TokenHostInfo >= 0 )
  {
    if ( (unsigned __int8)PsmIsDynamicKey(v5) )
    {
      *(_DWORD *)a1 = 0;
      return 0;
    }
    else
    {
      TokenHostInfo = HampUtilQueryRegistryTerminateReason(v5, v6, a1);
      if ( TokenHostInfo >= 0 )
        return 0;
    }
  }
  return (unsigned int)TokenHostInfo;
}
