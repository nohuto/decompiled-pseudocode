/*
 * XREFs of ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x140307490
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140338300 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 * Callees:
 *     ?KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403AAE40 (-KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403AB2B0 (-KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextProcessor@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x140474554 (-KiAdvanceReadyQueueEnumeratorToNextProcessor@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextList(struct _KI_READY_QUEUE_ENUMERATOR *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rax
  int v13; // edx
  bool v14; // zf
  unsigned int v15; // ecx

  v2 = *((unsigned __int8 *)a1 + 13);
  if ( !v2 )
    goto LABEL_7;
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      v13 = ~(1 << *((_BYTE *)a1 + 8));
      v14 = (v13 & *((_DWORD *)a1 + 1)) == 0;
      *((_DWORD *)a1 + 1) &= v13;
      if ( v14 && (int)KiAdvanceReadyQueueEnumeratorToNextScb(a1) < 0 )
        goto LABEL_7;
      _BitScanReverse(&v15, *((_DWORD *)a1 + 1));
      *((_BYTE *)a1 + 8) = v15;
      v12 = *((_QWORD *)a1 + 2) + 16 * ((unsigned __int8)v15 + 10LL);
      goto LABEL_14;
    }
    if ( v4 != 1 )
      return 2147483674LL;
  }
  v5 = *((unsigned __int8 *)a1 + 11) & ~(1 << *((_BYTE *)a1 + 12));
  *((_BYTE *)a1 + 11) = v5;
  if ( !(_BYTE)v5 && (int)KiAdvanceReadyQueueEnumeratorToNextProcessor(a1) < 0 )
    goto LABEL_7;
  v7 = *((unsigned __int8 *)a1 + 8);
  v8 = *((_QWORD *)a1 + 6 * *((unsigned __int8 *)a1 + 10) + 6);
  v9 = *((_QWORD *)a1 + 6 * *((unsigned __int8 *)a1 + 10) + 7);
  v10 = *((unsigned __int8 *)a1 + 11);
  if ( ((v10 - 1) & v10) != 0 )
    LOBYTE(v11) = !_bittest((const signed __int32 *)(v8 + 33756), v7);
  else
    _BitScanForward((unsigned int *)&v11, v10);
  *((_BYTE *)a1 + 12) = v11;
  if ( (_BYTE)v11 )
  {
    if ( (unsigned __int8)v11 != 1 )
      goto LABEL_7;
    v12 = v9 + 16 * (v7 + 4);
  }
  else
  {
    v12 = v8 + 16 * (v7 + 2116);
  }
LABEL_14:
  if ( v12 )
  {
    *((_QWORD *)a1 + 4) = v12;
    *((_QWORD *)a1 + 5) = v12;
    return 0LL;
  }
LABEL_7:
  result = KiAdvanceReadyQueueEnumeratorToNextPhase(a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
