/*
 * XREFs of LdrpInitializeTeb @ 0x1800CCA40
 * Callers:
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeTRng @ 0x1800CC070 (RtlInitializeTRng.c)
 */

struct _TEB *__fastcall LdrpInitializeTeb(__int64 a1)
{
  unsigned __int64 v1; // rdx
  struct _TEB *result; // rax
  struct _TEB *v3; // r10
  unsigned int v4; // r9d
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = a1 ^ (unsigned __int64)&LdrSystemDllInitBlock ^ LdrSystemDllInitBlock.RngData;
  v1 = (unsigned __int64)&v9 ^ v9 ^ ((((unsigned __int64)MEMORY[0x7FFE0004] << 32)
                                    * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64);
  if ( !v1 )
    v1 = 1LL;
  result = (struct _TEB *)RtlInitializeTRng((unsigned __int64 *)(a1 + 608), v1);
  v3 = NtCurrentTeb();
  v4 = RtlpHpPgSamplingRateMask;
  if ( RtlpHpPgSamplingRateMask == -1 )
  {
    v3->HeapPgSamplingCount = 0LL;
  }
  else
  {
    v5 = v3->RngState[0];
    v6 = v3->RngState[1];
    v7 = v6 + v5;
    v8 = v5 ^ v6;
    v3->RngState[0] = v8 ^ __ROL8__(v5, 24) ^ (v8 << 16);
    v3->RngState[1] = __ROL8__(v8, 37);
    result = NtCurrentTeb();
    result->HeapPgSamplingCount = (v4 & HIDWORD(v7)) + 1;
  }
  return result;
}
