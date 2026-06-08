/*
 * XREFs of ProcLibGetEventDescriptorAndProcessorId @ 0x1400029E0
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002914 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibCpcResourcePriorityRundown @ 0x1400245EC (ProcLibCpcResourcePriorityRundown.c)
 *     ProcLibCpcRundown @ 0x1400247F0 (ProcLibCpcRundown.c)
 *     ProcLibTraceCap @ 0x140024A08 (ProcLibTraceCap.c)
 *     ProcLibTraceSummary @ 0x14003F680 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x14003F9E0 (ProcLibTraceSummary2.c)
 *     ProcLibTracePerfStatesRundown @ 0x14003FE4C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x14003FFC4 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x140040280 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x140040C58 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x14004141C (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1400416A0 (ProcLibTraceBiosCStatesRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 80);
  ProcNumber = 0;
  if ( v5 == 1 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a1 + 72);
    v10 = a5;
    *a5 = a4;
    v10[1] = 4LL;
  }
  else if ( v5 == 2 || KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), &ProcNumber) < 0 )
  {
    return 0LL;
  }
  else
  {
    a3 = a2;
    *(_WORD *)a4 = ProcNumber.Group;
    *(_BYTE *)(a4 + 2) = ProcNumber.Number;
    v9 = a5;
    *a5 = a4;
    v9[1] = 3LL;
  }
  return a3;
}
