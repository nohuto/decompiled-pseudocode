/*
 * XREFs of LdrpDeleteEnclave @ 0x180139424
 * Callers:
 *     LdrDeleteEnclave @ 0x180126340 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceEnclave @ 0x1800911E4 (LdrpDereferenceEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800C4AE4 (LdrpCleanupEnclaveLoadState.c)
 *     NtTerminateEnclave @ 0x180162870 (NtTerminateEnclave.c)
 */

NTSTATUS __fastcall LdrpDeleteEnclave(PVOID *BaseAddress)
{
  NTSTATUS result; // eax
  PVOID v3; // rdx
  PVOID *v4; // rax

  result = NtTerminateEnclave(BaseAddress[9], 4u);
  if ( result >= 0 )
  {
    BaseAddress[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)BaseAddress, -1073741823);
    BaseAddress[9] = 0LL;
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v3 = *BaseAddress;
    if ( *((PVOID **)*BaseAddress + 1) != BaseAddress || (v4 = (PVOID *)BaseAddress[1], *v4 != BaseAddress) )
      __fastfail(3u);
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    LdrpDereferenceEnclave(BaseAddress);
    return 0;
  }
  return result;
}
