/*
 * XREFs of PfFbBufferListInsertInFree @ 0x1404AC4DC
 * Callers:
 *     PfTFullEventListAdd @ 0x1404AC31C (PfTFullEventListAdd.c)
 *     PfFbBufferListFlushStandby @ 0x1404AC388 (PfFbBufferListFlushStandby.c)
 *     PfFbBufferListAllocateTemporary @ 0x1404AC464 (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListAllocate @ 0x1406003BC (PfFbBufferListAllocate.c)
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 *     PfpFlushEventBuffers @ 0x140A05AD0 (PfpFlushEventBuffers.c)
 *     PfpRepurposeNameLoggingTrace @ 0x140B26E10 (PfpRepurposeNameLoggingTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, struct _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  char *v7; // rcx

  if ( (a4 & 1) != 0 && LOWORD(RunRef[1].Next) + (unsigned int)LOWORD(RunRef[2].Next) >= (int)KeNumberProcessors_0 + 1 )
  {
    _InterlockedAdd((volatile signed __int32 *)&RunRef[7], -a3);
    ExFreePoolWithTag(P, HIDWORD(RunRef[4].Next));
  }
  else
  {
    P[1].Next = RunRef;
    P[2].Next = (struct _SLIST_ENTRY *)((char *)P + a3);
    v7 = (char *)P + LODWORD(RunRef[5].Next);
    *((_DWORD *)&P[2].Next + 2) = 0;
    *((_QWORD *)&P[1].Next + 1) = v7;
    *((_DWORD *)&P[2].Next + 3) = a4;
    memset_0(v7, 0, (size_t)P + a3 - (_QWORD)v7);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[1], P);
  }
  if ( a5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
}
