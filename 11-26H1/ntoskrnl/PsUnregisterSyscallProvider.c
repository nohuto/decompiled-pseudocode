/*
 * XREFs of PsUnregisterSyscallProvider @ 0x1407F3110
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     PspDereferenceSyscallProvider @ 0x140617470 (PspDereferenceSyscallProvider.c)
 */

__int64 __fastcall PsUnregisterSyscallProvider(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1 + 7);
  _InterlockedExchange64((volatile __int64 *)&a1[7], 1LL);
  return PspDereferenceSyscallProvider((volatile signed __int64 *)a1);
}
