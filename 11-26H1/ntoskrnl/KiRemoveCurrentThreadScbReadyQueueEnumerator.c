/*
 * XREFs of KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x140232078
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiDetermineNextScbForScbReadyQueueEnumerator @ 0x140231EE8 (KiDetermineNextScbForScbReadyQueueEnumerator.c)
 *     KiRemoveThreadFromScbQueue @ 0x140307964 (KiRemoveThreadFromScbQueue.c)
 */

unsigned int __fastcall KiRemoveCurrentThreadScbReadyQueueEnumerator(__int64 a1)
{
  __int64 ScbForScbReadyQueueEnumerator; // rdi
  unsigned int result; // eax

  *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  ScbForScbReadyQueueEnumerator = KiDetermineNextScbForScbReadyQueueEnumerator(*(_QWORD **)(a1 + 8));
  result = KiRemoveThreadFromScbQueue(*(struct _KPRCB **)a1);
  if ( (_BYTE)result )
  {
    if ( ScbForScbReadyQueueEnumerator )
    {
      result = *(unsigned __int16 *)(ScbForScbReadyQueueEnumerator + 136);
      *(_DWORD *)(a1 + 16) = result;
      *(_QWORD *)(a1 + 32) = ScbForScbReadyQueueEnumerator + 160;
      if ( result )
      {
        _BitScanReverse(&result, result);
        *(_BYTE *)(a1 + 20) = result;
        *(_QWORD *)(a1 + 24) = ScbForScbReadyQueueEnumerator + 160 + 16LL * result;
      }
      else
      {
        *(_BYTE *)(a1 + 20) = 32;
        *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
    *(_QWORD *)(a1 + 8) = ScbForScbReadyQueueEnumerator;
  }
  return result;
}
