/*
 * XREFs of EtwpQueueApc @ 0x14020AAF0
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x14020A480 (EtwpStackTraceDispatcher.c)
 *     EtwpQueueStackWalkApc @ 0x14020AA10 (EtwpQueueStackWalkApc.c)
 *     EtwpApcPoolDpc @ 0x1402594D0 (EtwpApcPoolDpc.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x140501688 (EtwpContextRegisterTracingDispatcher.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeTryToInsertQueueApc @ 0x1403F0DB8 (KeTryToInsertQueueApc.c)
 *     KeRemoveQueueApc @ 0x140460EE0 (KeRemoveQueueApc.c)
 *     EtwpQueueApcPoolDpc @ 0x140503254 (EtwpQueueApcPoolDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueueApc(
        unsigned int **a1,
        struct _KTHREAD *a2,
        unsigned __int8 a3,
        __int64 a4,
        _SLIST_ENTRY *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // edi
  int MiscFlags; // eax
  __int64 v14; // rcx
  signed __int64 *v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  PSLIST_ENTRY v18; // rbp
  PSLIST_ENTRY v19; // rcx
  char inserted; // al
  __int32 v21; // ecx
  __int64 v23; // r9
  signed __int64 *v24; // r8
  signed __int64 v25; // rdx
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v27; // rbp
  unsigned __int64 v28; // rdx
  int v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v12 = -1073741823;
  if ( a2 != KeGetCurrentThread()
    || a2->Process->FreezeCount + ((*(_DWORD *)&a2->Process->0 >> 3) & 1)
    || a2->SuspendCount )
  {
    return 3221225473LL;
  }
  if ( a2 == KeGetCurrentPrcb()->IdleThread )
    return 3221225485LL;
  MiscFlags = a2->MiscFlags;
  if ( (MiscFlags & 0x400) != 0 )
    return 3221225485LL;
  if ( (MiscFlags & 0x4000) == 0 )
    return 3221225473LL;
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 704LL) + 8LL * **a1);
  v15 = (signed __int64 *)(*(_QWORD *)v14 + *(_DWORD *)(v14 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v14 + 20)));
  _m_prefetchw(v15);
  v16 = *v15;
  do
  {
    if ( (v16 & 1) != 0 )
      return v12;
    v17 = v16;
    v16 = _InterlockedCompareExchange64(v15, v16 + 2, v16);
  }
  while ( v17 != v16 );
  v18 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 2);
  if ( v18 )
    goto LABEL_11;
  if ( a3 <= 2u )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)a1 + 41) <= *((_DWORD *)a1 + 43) )
    {
      Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x48uLL);
      v27 = Pool2;
      if ( Pool2 )
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 1, Pool2 + 6);
        v27[8].Next = (_SLIST_ENTRY *)a1;
        v18 = v27 + 7;
LABEL_11:
        if ( v18 )
        {
          if ( (*a1)[80] )
          {
            *((_QWORD *)&v18[1].Next + 1) = a4;
            v18[2].Next = a5;
            *((_QWORD *)&v18[-5].Next + 1) = EtwpCancelApcThunk;
            v18[-5].Next = (_SLIST_ENTRY *)EtwpApcPoolThunk;
            v18[-4].Next = (_SLIST_ENTRY *)EtwpApcPoolThunk;
            v19 = v18 - 7;
            LOWORD(v18[-7].Next) = 18;
            BYTE2(v18[-7].Next) = 88;
            LOWORD(v18[-2].Next) = 0;
            *((_QWORD *)&v18[-7].Next + 1) = a2;
            *((_QWORD *)&v18[-4].Next + 1) = a6;
            BYTE2(v18[-2].Next) = 0;
            if ( a3 > 2u )
              inserted = KeTryToInsertQueueApc(v19, a7, a8);
            else
              inserted = KeInsertQueueApc(v19, a7, a8, 0LL);
            if ( (*a1)[80] )
            {
              if ( inserted )
              {
                _InterlockedIncrement((volatile signed __int32 *)a1 + 44);
                v21 = *((_DWORD *)a1 + 44);
                if ( v21 > *((_DWORD *)a1 + 45) )
                  _InterlockedExchange((volatile __int32 *)a1 + 45, v21);
                return 0LL;
              }
              if ( a3 > 2u )
                v12 = EtwpQueueApcPoolDpc((_DWORD)a1, (_DWORD)a2, v30, (_DWORD)a5, a6, a7, a8);
            }
            else if ( inserted && !(unsigned __int8)KeRemoveQueueApc(&v18[-7]) )
            {
              return 0LL;
            }
          }
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 2, v18);
        }
        goto LABEL_22;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)a1 + 41);
  }
LABEL_22:
  v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 704LL) + 8LL * **a1);
  v24 = (signed __int64 *)(*(_QWORD *)v23 + *(_DWORD *)(v23 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v23 + 20)));
  _m_prefetchw(v24);
  while ( 1 )
  {
    while ( 1 )
    {
      v25 = *v24;
      if ( (*v24 & 1) != 0 )
        break;
      if ( v25 == _InterlockedCompareExchange64(v24, v25 - 2, v25) )
        return v12;
    }
    if ( v25 != 1 )
      break;
    v24 = *(signed __int64 **)v23;
  }
  v28 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    KeSetEvent((PRKEVENT)(v28 + 8), 0, 0);
  return v12;
}
