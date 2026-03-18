/*
 * XREFs of PspDereferenceSyscallProvider @ 0x140614630
 * Callers:
 *     PsUnregisterSyscallProvider @ 0x1407ED5B0 (PsUnregisterSyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x1407ED8CC (PspInsertSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x1407EDA50 (PspSyscallProviderOptIn.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x1407ED6D8 (PspDestroySyscallProvider.c)
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
