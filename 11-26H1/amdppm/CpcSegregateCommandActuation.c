/*
 * XREFs of CpcSegregateCommandActuation @ 0x140002AEC
 * Callers:
 *     CpcCommitPerformance @ 0x140002A80 (CpcCommitPerformance.c)
 *     CpcAcquirePerformance @ 0x140002AB0 (CpcAcquirePerformance.c)
 *     CpcReadFeedback @ 0x140006410 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_140015C68 = dword_140015C48;
  qword_140015C70 = a2;
  byte_140015C78 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_140015C28);
  for ( i = (__int64 *)qword_140015C38; i != &qword_140015C38; i = (__int64 *)*i )
    a1(i, &dword_140015C68);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_140015C28);
}
