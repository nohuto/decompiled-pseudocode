/*
 * XREFs of HvpLogEntryCheckDataChecksum @ 0x140B55D88
 * Callers:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140ADDB38 (HvpIncrementalLogFileEnumeratorAdvance.c)
 * Callees:
 *     SymCryptMarvin32 @ 0x140558268 (SymCryptMarvin32.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckDataChecksum(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)(a1 + 40), (unsigned int)(a2 - 40), &v5);
  return *(_QWORD *)(a3 + 24) == v5;
}
