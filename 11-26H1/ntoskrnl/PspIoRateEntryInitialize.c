/*
 * XREFs of PspIoRateEntryInitialize @ 0x140A76B10
 * Callers:
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140B5A3A0 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall PspIoRateEntryInitialize(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 32));
  result = _InterlockedExchange64((volatile __int64 *)(a1 + 32), 1LL);
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
