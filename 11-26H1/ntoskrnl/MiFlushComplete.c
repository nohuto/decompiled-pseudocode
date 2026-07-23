/*
 * XREFs of MiFlushComplete @ 0x1403CB1D0
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1403CB874 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiUnlockFlushMdl @ 0x1403CB7C4 (MiUnlockFlushMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x1403CBAA8 (MiFreeOverlappedFlushEntry.c)
 *     MiRetardMdl @ 0x1404FDE4C (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2)
{
  struct _MDL *v2; // rdi
  LONG result; // eax
  __int64 v6; // rcx

  v2 = *(struct _MDL **)(a1 + 72);
  if ( _bittest16(&v2->MdlFlags, 9u) )
    MiRetardMdl(v2);
  MiUnlockFlushMdl(v2);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  if ( v2 != (struct _MDL *)(a1 + 80) )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v6 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v6);
  }
  return result;
}
