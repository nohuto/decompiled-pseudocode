/*
 * XREFs of sub_1400496E0 @ 0x1400496E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400494AC @ 0x1400494AC (sub_1400494AC.c)
 *     sub_14004967C @ 0x14004967C (sub_14004967C.c)
 *     sub_140049F44 @ 0x140049F44 (sub_140049F44.c)
 */

__int64 sub_1400496E0()
{
  HMODULE ModuleHandleW; // rbx
  BOOL (__stdcall *SleepConditionVariableCS)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD); // rdi
  void (__stdcall *WakeAllConditionVariable)(PCONDITION_VARIABLE); // rax

  InitializeCriticalSectionAndSpinCount(&stru_1400E7CE8, 0xFA0u);
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
    qword_1400E7D10 = (__int64)SleepConditionVariableCS;
    qword_1400E7D18 = (__int64)WakeAllConditionVariable;
    goto LABEL_7;
  }
  hEvent = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEvent )
  {
LABEL_9:
    sub_140049F44(7LL);
    JUMPOUT(0x1400497AFLL);
  }
LABEL_7:
  if ( !sub_1400494AC(0) )
    goto LABEL_9;
  sub_14004967C((__int64)sub_1400497C0);
  return 0LL;
}
