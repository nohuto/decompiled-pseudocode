/*
 * XREFs of RtlpInitMachineFrameEntries @ 0x140CE0414
 * Callers:
 *     RtlInitKernelModeSpecialMachineFrameEntries @ 0x140CE037C (RtlInitKernelModeSpecialMachineFrameEntries.c)
 *     RtlInitializeHistoryTable @ 0x140CE0468 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 */

void __fastcall RtlpInitMachineFrameEntries(DWORD64 *a1, unsigned int a2)
{
  __int64 v3; // rdi
  PRUNTIME_FUNCTION v4; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    ImageBase = 0LL;
    v3 = a2;
    do
    {
      v4 = RtlLookupFunctionEntry(*a1, &ImageBase, 0LL);
      *a1++ = ImageBase + v4->UnwindInfoAddress;
      --v3;
    }
    while ( v3 );
  }
}
