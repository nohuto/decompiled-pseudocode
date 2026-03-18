/*
 * XREFs of PopNetEvaluateStateMask @ 0x140B455B0
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404EA630 (PopNetEvaluationWorkerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopNetEvaluateStateMask(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = HIDWORD(stru_140F0C428.Header.WaitListHead.Blink);
  if ( (BYTE4(stru_140F0C428.Header.WaitListHead.Blink) & 4) != 0 )
  {
    *a1 = 2;
    *a2 = 2;
    return result;
  }
  if ( (BYTE4(stru_140F0C428.Header.WaitListHead.Blink) & 8) != 0 )
  {
    *a1 = 2;
    *a2 = 3;
    return result;
  }
  if ( (BYTE4(stru_140F0C428.Header.WaitListHead.Blink) & 0x40) != 0 )
  {
    *a1 = 2;
    *a2 = 6;
    return result;
  }
  if ( !BYTE4(stru_140F0C428.Header.WaitListHead.Flink) )
    goto LABEL_12;
  if ( (BYTE4(stru_140F0C428.Header.WaitListHead.Blink) & 2) != 0 )
  {
    *a1 = 2;
    *a2 = 1;
    return result;
  }
  if ( SBYTE4(stru_140F0C428.Header.WaitListHead.Blink) < 0 )
  {
    *a1 = 2;
    *a2 = 7;
  }
  else
  {
LABEL_12:
    *a1 = 0;
    *a2 = 0;
  }
  return result;
}
