/*
 * XREFs of RtlInitializeHistoryTable @ 0x140CE0468
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x140CE03A0 (RtlpFunctionAddressTableEntry.c)
 *     RtlpInitMachineFrameEntries @ 0x140CE0414 (RtlpInitMachineFrameEntries.c)
 */

void RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__cdecl __noreturn *v1)(NTSTATUS); // rax
  PRUNTIME_FUNCTION v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  ImageBase = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_141201955 = i;
    v2 = RtlLookupFunctionEntry((DWORD64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_141201958 )
      qword_141201958 = v4;
    if ( v5 > qword_141201960 )
      qword_141201960 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  RtlpInitMachineFrameEntries((DWORD64 *)RtlpSafeMachineFrameEntries, 4u);
}
