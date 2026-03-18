/*
 * XREFs of RtlInitializeHistoryTable @ 0x140CDA0E8
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402E92C0 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x140CDA020 (RtlpFunctionAddressTableEntry.c)
 *     RtlpInitMachineFrameEntries @ 0x140CDA094 (RtlpInitMachineFrameEntries.c)
 */

void RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__fastcall __noreturn *v1)(int); // rax
  unsigned int *v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_141201955 = i;
    v2 = RtlLookupFunctionEntry((unsigned __int64)v1, &v6, 0LL);
    v3 = 2LL * i;
    v4 = v6 + *v2;
    v5 = v6 + v2[1];
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = v6;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_141201958 )
      qword_141201958 = v4;
    if ( v5 > qword_141201960 )
      qword_141201960 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  RtlpInitMachineFrameEntries((unsigned __int64 *)RtlpSafeMachineFrameEntries, 4u);
}
