/*
 * XREFs of PspHardDereferenceSiloWorker @ 0x1403DEE90
 * Callers:
 *     PsReleaseSiloHardReference @ 0x1403DEE00 (PsReleaseSiloHardReference.c)
 *     IopCloseFileObjectExtension @ 0x1403DEE30 (IopCloseFileObjectExtension.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1409FF3F0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspJobClose @ 0x140A06ED0 (PspJobClose.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PspHardDereferenceSiloWorker(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  if ( !a1 )
    NT_ASSERT("!PsIsHostSilo(Silo)");
  if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) == 0 )
    NT_ASSERT("PspJobIsSilo(Silo)");
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1752), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    *(_QWORD *)(a1 + 1784) = a1;
    *(_QWORD *)(a1 + 1776) = PspCompleteHardDereferenceSiloDeferred;
    *(_QWORD *)(a1 + 1760) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1760), DelayedWorkQueue);
  }
}
