/*
 * XREFs of LdrpGenSecurityCookie @ 0x180077E24
 * Callers:
 *     LdrInitSecurityCookie @ 0x180077BE0 (LdrInitSecurityCookie.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x18015F460 (NtQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall LdrpGenSecurityCookie(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 UniqueProcess_low; // r15
  __int64 UniqueThread_low; // rbp
  unsigned __int64 v6; // rdi
  LARGE_INTEGER v8; // [rsp+50h] [rbp+8h] BYREF

  v8.QuadPart = 0LL;
  v2 = MEMORY[0x7FFE0014];
  v3 = MEMORY[0x7FFE0018];
  UniqueProcess_low = LODWORD(NtCurrentTeb()->ClientId.UniqueProcess);
  UniqueThread_low = LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v6 = ((unsigned __int64)MEMORY[0x7FFE0004] * MEMORY[0x7FFE0320]) >> 24;
  NtQueryPerformanceCounter(&v8, 0LL);
  return a1 ^ v8.QuadPart ^ v6 ^ UniqueProcess_low ^ UniqueThread_low ^ (((unsigned int)v6 ^ ((unsigned __int64)v8.LowPart << 8)) << 24) ^ v3 ^ v2;
}
