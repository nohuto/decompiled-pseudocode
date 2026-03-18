/*
 * XREFs of CleanupRimDevObjInUserModeCallback @ 0x1401A7048
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RIMSignalAllDispositionWaiters @ 0x14014F660 (RIMSignalAllDispositionWaiters.c)
 */

LONG_PTR __fastcall CleanupRimDevObjInUserModeCallback(_QWORD *Object)
{
  _BYTE *v1; // rbx

  v1 = (_BYTE *)Object[49];
  RIMLockExclusive((__int64)(v1 + 104));
  if ( v1[80] && !v1[81] )
    RIMLockExclusive((__int64)(v1 + 760));
  v1[82] = 0;
  RIMSignalAllDispositionWaiters((__int64)v1);
  if ( v1[80] && !v1[81] )
    RIMUnlockExclusive((__int64)(v1 + 760));
  RIMUnlockExclusive((__int64)(v1 + 104));
  return ObfDereferenceObject(Object);
}
