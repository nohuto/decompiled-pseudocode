/*
 * XREFs of TpInitializePackage @ 0x1800C8914
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x1800C89F0 (RtlCreateTagHeap.c)
 *     TppQueryMaximumGroupCount @ 0x1800C8C88 (TppQueryMaximumGroupCount.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS TpInitializePackage()
{
  NTSTATUS result; // eax
  unsigned __int16 MaximumGroupCount; // ax
  struct _PEB *v2; // rax
  _DWORD SystemInformation[262]; // [rsp+20h] [rbp-418h] BYREF
  ULONG ReturnLength; // [rsp+440h] [rbp+8h] BYREF

  memset_thunk_772440563353939046(SystemInformation, 0, 0x408uLL);
  TppHeapTag = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap, 0, (PWSTR)L"Threadpool!", (PWSTR)L"Cleanup Group");
  ReturnLength = 0;
  result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( ReturnLength >= 4
      && (TppNumberNodes = SystemInformation[0] + 1,
          MaximumGroupCount = TppQueryMaximumGroupCount(),
          (TppMaximumGroups = MaximumGroupCount) != 0) )
    {
      v2 = NtCurrentPeb();
      v2->TppWorkerpListLock = 0LL;
      v2 = (struct _PEB *)((char *)v2 + 912);
      v2->Mutant = v2;
      *(_QWORD *)&v2->InheritedAddressSpace = v2;
      return 0;
    }
    else
    {
      return -1073741595;
    }
  }
  return result;
}
