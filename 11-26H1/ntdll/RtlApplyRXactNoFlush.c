/*
 * XREFs of RtlApplyRXactNoFlush @ 0x1800FCF40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAbortRXact @ 0x1800FCF70 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x1800FCFB8 (RXactpCommit.c)
 */

__int64 __fastcall RtlApplyRXactNoFlush(__int64 a1)
{
  __int64 result; // rax

  result = RXactpCommit(a1);
  if ( (int)result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}
