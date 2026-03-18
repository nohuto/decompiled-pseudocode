/*
 * XREFs of HashpFinalizeHash @ 0x1408AC1B4
 * Callers:
 *     HashpHashMemory @ 0x1408ABB4C (HashpHashMemory.c)
 * Callees:
 *     SymCryptSha256Result @ 0x140554D70 (SymCryptSha256Result.c)
 *     SymCryptSha384Result @ 0x14055EE64 (SymCryptSha384Result.c)
 *     SymCryptSha512Result @ 0x1405605A4 (SymCryptSha512Result.c)
 *     SymCryptSha1Result @ 0x140561950 (SymCryptSha1Result.c)
 *     SymCryptMd5Result @ 0x140562390 (SymCryptMd5Result.c)
 */

__int64 __fastcall HashpFinalizeHash(_DWORD *a1, char *a2)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0x8003:
      return SymCryptMd5Result((__int64)(a1 + 4), a2);
    case 0x8004:
      return SymCryptSha1Result(a1 + 4, a2);
    case 0x800C:
      return SymCryptSha256Result(a1 + 4, a2);
    case 0x800D:
      return SymCryptSha384Result((__int64)(a1 + 4), a2);
    case 0x800E:
      return SymCryptSha512Result((_QWORD *)a1 + 2, a2);
  }
  return result;
}
