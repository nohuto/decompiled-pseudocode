/*
 * XREFs of LdrpResValidateFileHandle @ 0x1800AB978
 * Callers:
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 * Callees:
 *     NtQueryInformationFile @ 0x18015F160 (NtQueryInformationFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResValidateFileHandle(__int64 a1)
{
  __int128 v2; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  v2 = 0LL;
  memset(v3, 0, sizeof(v3));
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return NtQueryInformationFile(a1, &v2, v3, 40LL, 4);
}
