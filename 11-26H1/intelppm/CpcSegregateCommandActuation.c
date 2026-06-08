/*
 * XREFs of CpcSegregateCommandActuation @ 0x140003EBC
 * Callers:
 *     CpcCommitPerformance @ 0x140003E50 (CpcCommitPerformance.c)
 *     CpcAcquirePerformance @ 0x140003E80 (CpcAcquirePerformance.c)
 *     CpcReadFeedback @ 0x1400089F0 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_140019838 = dword_140019818;
  qword_140019840 = a2;
  byte_140019848 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1400197F8);
  for ( i = (__int64 *)qword_140019808; i != &qword_140019808; i = (__int64 *)*i )
    a1(i, &dword_140019838);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1400197F8);
}
