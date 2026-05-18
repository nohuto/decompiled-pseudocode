/*
 * XREFs of sub_18000D380 @ 0x18000D380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C254 @ 0x18000C254 (sub_18000C254.c)
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 */

__int64 sub_18000D380()
{
  HMODULE ModuleHandleW; // rbx
  BOOL (__stdcall *SleepConditionVariableCS)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD); // rdi
  void (__stdcall *WakeAllConditionVariable)(PCONDITION_VARIABLE); // rax

  InitializeCriticalSectionAndSpinCount(&CriticalSection, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
      goto LABEL_9;
  }
  SleepConditionVariableCS = (BOOL (__stdcall *)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD))GetProcAddress(
                                                                                                  ModuleHandleW,
                                                                                                  "SleepConditionVariableCS");
  WakeAllConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                        ModuleHandleW,
                                                                        "WakeAllConditionVariable");
  if ( SleepConditionVariableCS && WakeAllConditionVariable )
  {
    qword_1801C8390 = (__int64)SleepConditionVariableCS;
    qword_1801C8398 = (__int64)WakeAllConditionVariable;
    goto LABEL_7;
  }
  hHandle = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hHandle )
  {
LABEL_9:
    sub_18000C8D4(7u);
    JUMPOUT(0x18000D44FLL);
  }
LABEL_7:
  if ( !sub_18000C254(0) )
    goto LABEL_9;
  atexit(sub_18000D460);
  return 0LL;
}
