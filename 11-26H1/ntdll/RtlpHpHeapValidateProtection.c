/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x18006ED00
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18006EA9C (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(PVOID BaseAddress, unsigned int a2, int a3, unsigned __int64 a4)
{
  NTSTATUS VirtualMemory; // eax
  _OWORD MemoryInformation[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-18h]

  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  v9 = 0LL;
  if ( a2 != 64 )
    return a2;
  if ( a3 == 5 )
    VirtualMemory = ((__int64 (__fastcall *)(unsigned __int64, __int64, PVOID, _QWORD, _OWORD *, __int64, _QWORD))(a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a4 + 24)))(
                      a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4,
                      -1LL,
                      BaseAddress,
                      0LL,
                      MemoryInformation,
                      48LL,
                      0LL);
  else
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      BaseAddress,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
  if ( VirtualMemory >= 0 && (BYTE4(v9) & 0x60) != 0 && *(PVOID *)&MemoryInformation[0] == BaseAddress )
    return a2;
  RtlpLogHeapFailure(0, (_DWORD)BaseAddress, 1, DWORD1(v9), 0LL, 0LL);
  return 4LL;
}
