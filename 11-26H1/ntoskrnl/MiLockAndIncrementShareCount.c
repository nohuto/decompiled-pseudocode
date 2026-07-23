/*
 * XREFs of MiLockAndIncrementShareCount @ 0x1404CAEE8
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 *     MiMapKernelScp @ 0x1404EC740 (MiMapKernelScp.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockAndIncrementShareCount(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 48 * a1;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 - 0x220000000000LL + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(__int64 *)(v1 - 0x220000000000LL + 24) < 0 );
  }
  v2 = *(_QWORD *)(v1 - 0x220000000000LL + 24);
  v3 = v2 + 1;
  v4 = (v2 ^ (v2 + 1)) & 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v1 - 0x220000000000LL + 24) = v3 ^ v4;
  _InterlockedAnd64((volatile signed __int64 *)(v1 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
