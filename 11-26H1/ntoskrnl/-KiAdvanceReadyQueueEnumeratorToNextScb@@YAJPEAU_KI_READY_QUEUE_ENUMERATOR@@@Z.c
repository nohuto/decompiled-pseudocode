/*
 * XREFs of ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403AB2B0
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x140307490 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403AAE40 (-KiAdvanceReadyQueueEnumeratorToNextPhase@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 * Callees:
 *     ?KiAdvanceReadyQueueEnumeratorToNextRootScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403AB3EC (-KiAdvanceReadyQueueEnumeratorToNextRootScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextScb(struct _KI_READY_QUEUE_ENUMERATOR *a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  int v9; // edx
  __int64 result; // rax
  _QWORD *v11; // rdx
  __int64 i; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // rdx

  while ( 1 )
  {
    v2 = (_QWORD *)*((_QWORD *)a1 + 2);
    v3 = 48LL * *((unsigned __int8 *)a1 + 10);
    if ( v2 != *(_QWORD **)((char *)a1 + v3 + 72) )
    {
      v4 = (unsigned __int64)(v2 + 53);
      v5 = v2[54];
      v6 = v2[53];
      if ( (v5 & 1) == 0 )
        goto LABEL_3;
      if ( v6 )
      {
        v6 ^= v4;
LABEL_3:
        if ( !v6 )
          goto LABEL_18;
        if ( (v2[54] & 1LL) != 0 )
        {
          if ( v5 == 1 )
            v7 = 0LL;
          else
            v7 = v5 ^ (v4 | 1);
        }
        else
        {
          v7 = v2[54];
        }
LABEL_7:
        v8 = v7 - 104;
        if ( v8 )
          goto LABEL_8;
        goto LABEL_23;
      }
LABEL_18:
      while ( 1 )
      {
        v13 = v2 + 55;
        if ( !v2[55] )
          break;
        v7 = v2[14];
        v11 = v2 + 13;
        if ( v7 )
        {
          v14 = *(_QWORD **)v7;
          if ( *(_QWORD *)v7 )
          {
            do
            {
              v7 = (unsigned __int64)v14;
              v14 = (_QWORD *)*v14;
            }
            while ( v14 );
          }
        }
        else
        {
          for ( i = v11[2]; ; i = *(_QWORD *)(v7 + 16) )
          {
            v7 = i & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v7 || *(_QWORD **)v7 == v11 )
              break;
            v11 = (_QWORD *)v7;
          }
        }
        if ( v7 )
          goto LABEL_7;
        v2 = (_QWORD *)*v13;
      }
    }
LABEL_23:
    result = KiAdvanceReadyQueueEnumeratorToNextRootScb(a1);
    if ( (int)result < 0 )
      return result;
    v8 = *((_QWORD *)a1 + 3);
LABEL_8:
    *((_QWORD *)a1 + 2) = v8;
    if ( v8 )
    {
      v9 = *(unsigned __int16 *)(v8 + 136);
      *((_DWORD *)a1 + 1) = v9;
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 448) + 140LL) == *(_DWORD *)((char *)a1 + v3 + 80) )
      {
        v9 &= *(_DWORD *)((char *)a1 + v3 + 84);
        *((_DWORD *)a1 + 1) = v9;
      }
      if ( v9 )
        return 0LL;
    }
  }
}
