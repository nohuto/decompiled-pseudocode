/*
 * XREFs of ProcLibGetEventDescriptorAndProcessorId @ 0x1400030C0
 * Callers:
 *     ProcLibCpcResourcePriorityRundown @ 0x14002BE44 (ProcLibCpcResourcePriorityRundown.c)
 *     ProcLibCpcRundown @ 0x14002C048 (ProcLibCpcRundown.c)
 *     ProcLibTraceSummary @ 0x140043A98 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x140043EAC (ProcLibTraceSummary2.c)
 *     ProcLibTraceProcessorRundown @ 0x140044780 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceCap @ 0x140044B90 (ProcLibTraceCap.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x140044DC8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x14004507C (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x1400452F8 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x140045470 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x140045838 (ProcLibTraceProcessorLpiRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // eax
  _QWORD *v8; // rax
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
    v8 = a5;
    *a5 = a4;
    v8[1] = 3LL;
  }
  return a3;
}
