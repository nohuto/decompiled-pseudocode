/*
 * XREFs of PfSnAltProfileFindByProcess @ 0x140ACAD6C
 * Callers:
 *     PfProcessExitNotification @ 0x140ACACC4 (PfProcessExitNotification.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByProcess @ 0x140ACADFC (PfSnAltProfileTreeCompareByProcess.c)
 */

unsigned __int64 __fastcall PfSnAltProfileFindByProcess(__int64 a1)
{
  unsigned __int64 SparePtr; // rbx
  int v3; // edi
  int v4; // eax
  unsigned __int64 v5; // rax

  SparePtr = (unsigned __int64)stru_140E67200.WaitBlock[0].SparePtr;
  if ( (stru_140E67200.WaitBlockFill5[48] & 1) != 0 && stru_140E67200.WaitBlock[0].SparePtr )
    SparePtr = (unsigned __int64)&stru_140E67200.WaitBlock[0].SparePtr ^ (unsigned __int64)stru_140E67200.WaitBlock[0].SparePtr;
  v3 = stru_140E67200.WaitBlockFill5[48] & 1;
  if ( !SparePtr )
    return 0LL;
  do
  {
    v4 = PfSnAltProfileTreeCompareByProcess(a1, SparePtr);
    if ( v4 < 0 )
    {
      v5 = *(_QWORD *)SparePtr;
    }
    else
    {
      if ( v4 <= 0 )
        return SparePtr;
      v5 = *(_QWORD *)(SparePtr + 8);
    }
    if ( v3 && v5 )
      SparePtr ^= v5;
    else
      SparePtr = v5;
  }
  while ( SparePtr );
  return SparePtr;
}
