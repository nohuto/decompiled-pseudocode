/*
 * XREFs of EtwpFreeLoggerContext @ 0x180067A78
 * Callers:
 *     EtwpStopUmLogger @ 0x180064E98 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x180066820 (EtwpLogger.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     EtwpFreeStreamIndexMap @ 0x180067A34 (EtwpFreeStreamIndexMap.c)
 *     RtlDeleteCriticalSection @ 0x180067D70 (RtlDeleteCriticalSection.c)
 *     EtwpShutdownCompression @ 0x18010D84C (EtwpShutdownCompression.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18015F4C0 (ZwDelayExecution.c)
 */

LOGICAL __fastcall EtwpFreeLoggerContext(unsigned int *BaseAddress)
{
  __int64 v1; // rdx
  unsigned int *v3; // rdi
  unsigned int *v4; // r8
  unsigned int *v5; // rdi
  void *v6; // r8
  void *v7; // r8
  void *v8; // r8
  void *v9; // r8
  unsigned int *v11; // rbp
  unsigned int *v12; // r14
  void *ProcessHeap; // rcx
  unsigned int *v14; // r8
  LARGE_INTEGER DelayInterval; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  v1 = 2LL * BaseAddress[5];
  DelayInterval.QuadPart = -3000000LL;
  if ( *(int *)(EtwpLoggerArray + 8 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0, &DelayInterval);
    while ( *(int *)(EtwpLoggerArray + 16LL * BaseAddress[5] + 8) > 1 );
  }
  if ( (BaseAddress[77] & 0x4000000) != 0 )
    EtwpShutdownCompression(BaseAddress);
  if ( *((_QWORD *)BaseAddress + 51) )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)BaseAddress + 51, &RegionSize, 0x8000u);
  }
  NtClose(*((HANDLE *)BaseAddress + 15));
  NtClose(*((HANDLE *)BaseAddress + 14));
  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(BaseAddress + 18));
  if ( *((_QWORD *)BaseAddress + 18) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 34));
  if ( *((_QWORD *)BaseAddress + 20) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 38));
  if ( *((_QWORD *)BaseAddress + 22) )
    RtlFreeAnsiString((PUNICODE_STRING)(BaseAddress + 42));
  v3 = (unsigned int *)*((_QWORD *)BaseAddress + 56);
  while ( v3 != BaseAddress + 112 )
  {
    v4 = v3;
    v3 = *(unsigned int **)v3;
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  v5 = (unsigned int *)*((_QWORD *)BaseAddress + 58);
  while ( v5 != BaseAddress + 116 )
  {
    v11 = v5;
    v12 = (unsigned int *)*((_QWORD *)v5 + 3);
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v12 == v5 + 6 )
        break;
      v14 = v12;
      v12 = *(unsigned int **)v12;
      RtlFreeHeap_0(ProcessHeap, 0, v14);
    }
    v5 = *(unsigned int **)v5;
    RtlFreeHeap_0(ProcessHeap, 0, v11);
  }
  v6 = (void *)*((_QWORD *)BaseAddress + 62);
  if ( v6 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = (void *)*((_QWORD *)BaseAddress + 63);
  if ( v7 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v7);
  v8 = (void *)*((_QWORD *)BaseAddress + 65);
  if ( v8 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
  v9 = (void *)*((_QWORD *)BaseAddress + 67);
  if ( v9 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
  EtwpFreeStreamIndexMap((__int64)BaseAddress);
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * BaseAddress[5]), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(16LL * BaseAddress[5] + EtwpLoggerArray + 8));
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
