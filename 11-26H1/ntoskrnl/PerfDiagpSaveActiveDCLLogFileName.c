/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x14091851C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140825080 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     RtlpGetRegistryHandle @ 0x140A10B38 (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x140B480A0 (RtlDeleteRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _KPROCESS *Pool2; // rbx
  __int64 v1; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+10h] BYREF

  ReturnLength = 0;
  Pool2 = (_KPROCESS *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    memset_0((void *)&stru_140F042A0.StackLimit, 0, 0xB0uLL);
    HIDWORD(stru_140F042A0.KernelStack) = 0x20000;
    *(LIST_ENTRY *)((char *)&stru_140F042A0.Header.WaitListHead + 4) = *(LIST_ENTRY *)L"WdiContextLog";
    HIDWORD(stru_140F042A0.QuantumTarget) = *(_DWORD *)L"g";
    *(void **)((char *)&stru_140F042A0.SListFaultAddress + 4) = *(void **)L"xtLog";
    RtlInitUnicodeString(
      (PUNICODE_STRING)&stru_140F042A0.ApcStateFill[40],
      (PCWSTR)&stru_140F042A0.Header.WaitListHead.Flink + 2);
    stru_140F042A0.ApcState.Process = Pool2;
    *(_WORD *)&stru_140F042A0.ApcStateFill[26] = 520;
    LODWORD(stru_140F042A0.StackLimit) = 176;
    if ( NtTraceControl(
           EtwQueryLoggerCode,
           (PVOID)&stru_140F042A0.StackLimit,
           0xB0u,
           (PVOID)&stru_140F042A0.StackLimit,
           0xB0u,
           &ReturnLength) < 0
      || *(_WORD *)&stru_140F042A0.ApcStateFill[24] < 2u )
    {
      KeyHandle = 0LL;
      DestinationString = 0LL;
      if ( (int)RtlpGetRegistryHandle(2LL, L"Diagnostics\\Performance", 1LL, &KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"ActiveShutdownDCL");
        ZwDeleteValueKey(KeyHandle, &DestinationString);
        ZwClose(KeyHandle);
      }
    }
    else
    {
      v1 = *(_WORD *)&stru_140F042A0.ApcStateFill[24] >> 1;
      *((_WORD *)&Pool2->Header.Lock + v1) = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        Pool2,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
