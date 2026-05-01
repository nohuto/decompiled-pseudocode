/*
 * XREFs of ?HampClientValidateTokens@@YAJPEAX0@Z @ 0x18007E6A4
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x1800139F4 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampClientValidateTokens(HANDLE TokenHandle, HANDLE a2)
{
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-E8h] BYREF
  PSID TokenInformation; // [rsp+40h] [rbp-D8h] BYREF
  int v7; // [rsp+48h] [rbp-D0h]
  PSID Sid2; // [rsp+A0h] [rbp-78h] BYREF
  int v9; // [rsp+A8h] [rbp-70h]

  ReturnLength[0] = 0;
  memset_0(&TokenInformation, 0, 0x58uLL);
  memset_0(&Sid2, 0, 0x58uLL);
  NtQueryInformationToken(TokenHandle, TokenIntegrityLevel, &TokenInformation, 0x58u, ReturnLength);
  NtQueryInformationToken(a2, TokenIntegrityLevel, &Sid2, 0x58u, ReturnLength);
  if ( RtlEqualSid(TokenInformation, Sid2) )
    return v9 != v7 ? 0xC00002A0 : 0;
  else
    return 3221226144LL;
}
