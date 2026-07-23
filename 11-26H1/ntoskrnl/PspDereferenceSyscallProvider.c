/*
 * XREFs of PspDereferenceSyscallProvider @ 0x140617470
 * Callers:
 *     PsUnregisterSyscallProvider @ 0x1407F3110 (PsUnregisterSyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x1407F342C (PspInsertSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x1407F35B0 (PspSyscallProviderOptIn.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x1407F3238 (PspDestroySyscallProvider.c)
 */

__int64 __fastcall PspDereferenceSyscallProvider(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return PspDestroySyscallProvider((PVOID)a1);
  }
  return result;
}
