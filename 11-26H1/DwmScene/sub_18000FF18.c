/*
 * XREFs of sub_18000FF18 @ 0x18000FF18
 * Callers:
 *     sub_18000FD08 @ 0x18000FD08 (sub_18000FD08.c)
 *     sub_180010390 @ 0x180010390 (sub_180010390.c)
 *     sub_180010770 @ 0x180010770 (sub_180010770.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

LPVOID __fastcall sub_18000FF18(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rsi
  LPVOID v5; // rbx
  FARPROC RtlDisownModuleHeapAllocation; // rax
  HMODULE ModuleHandleW; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  RtlDisownModuleHeapAllocation = (FARPROC)qword_1801C84D0;
  if ( qword_1801C84D0
    || !byte_1801C8462
    && ((ModuleHandleW = GetModuleHandleW(L"ntdll.dll")) == 0LL
      ? (RtlDisownModuleHeapAllocation = (FARPROC)qword_1801C84D0)
      : (FARPROC)(RtlDisownModuleHeapAllocation = GetProcAddress(ModuleHandleW, "RtlDisownModuleHeapAllocation"),
                  qword_1801C84D0 = (__int64)RtlDisownModuleHeapAllocation),
        byte_1801C8462 = 1,
        RtlDisownModuleHeapAllocation) )
  {
    ((void (__fastcall *)(HANDLE, LPVOID))RtlDisownModuleHeapAllocation)(ProcessHeap, v5);
  }
  return v5;
}
