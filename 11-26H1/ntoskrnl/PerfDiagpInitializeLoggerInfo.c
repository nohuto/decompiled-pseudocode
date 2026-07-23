/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x140824F9C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140825080 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14082538C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset_0((void *)&stru_140F042A0.StackLimit, 0, 0xB0uLL);
  *((_DWORD *)&stru_140F042A0.0 + 1) = -2130771792;
  HIDWORD(stru_140F042A0.KernelStack) = 0x20000;
  *(LIST_ENTRY *)((char *)&stru_140F042A0.Header.WaitListHead + 4) = *(LIST_ENTRY *)L"PerfDiag Logger";
  *(_OWORD *)((char *)&stru_140F042A0.SListFaultAddress + 4) = *(_OWORD *)L" Logger";
  RtlInitUnicodeString(
    (PUNICODE_STRING)&stru_140F042A0.ApcStateFill[40],
    (PCWSTR)&stru_140F042A0.Header.WaitListHead.Flink + 2);
  LODWORD(stru_140F042A0.StackLimit) = 180;
  *((_DWORD *)&stru_140F042A0.SwapListEntry + 2) = 1;
  if ( a1 )
  {
    *((_WORD *)&stru_140F042A0.SwapListEntry + 7) = 1;
    *((_WORD *)&stru_140F042A0.SwapListEntry + 6) = a2 + 1;
    *((_WORD *)&stru_140F042A0.SwapListEntry + 5) = 1;
    *((_WORD *)&stru_140F042A0.SwapListEntry + 4) = a2 + 2;
    LODWORD(stru_140F042A0.StackLimit) = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
