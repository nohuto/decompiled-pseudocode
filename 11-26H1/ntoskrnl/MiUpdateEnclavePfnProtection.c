/*
 * XREFs of MiUpdateEnclavePfnProtection @ 0x140704F70
 * Callers:
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiUpdateEnclavePfnProtection(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) = (32 * v2) ^ (*(_QWORD *)(a1 + 16) ^ (32 * v2)) & 0xFFFFFFFFFFFFFC1FuLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
