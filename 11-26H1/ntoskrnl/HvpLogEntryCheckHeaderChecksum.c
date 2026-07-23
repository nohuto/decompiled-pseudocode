/*
 * XREFs of HvpLogEntryCheckHeaderChecksum @ 0x140B4E490
 * Callers:
 *     HvpIsLogEntryHeaderCoherent @ 0x140ADDC80 (HvpIsLogEntryHeaderCoherent.c)
 * Callees:
 *     SymCryptMarvin32 @ 0x140558268 (SymCryptMarvin32.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckHeaderChecksum(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 1162638920 )
    return 0LL;
  SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)a1, 0x20uLL, &v3);
  return *(_QWORD *)(a1 + 32) == v3;
}
