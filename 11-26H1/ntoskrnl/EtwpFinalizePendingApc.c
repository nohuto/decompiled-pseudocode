/*
 * XREFs of EtwpFinalizePendingApc @ 0x140460F50
 * Callers:
 *     EtwpCancelPendingApcs @ 0x140460E00 (EtwpCancelPendingApcs.c)
 *     EtwpCancelApcThunk @ 0x1406CB580 (EtwpCancelApcThunk.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

int __fastcall EtwpFinalizePendingApc(unsigned int **a1, _SLIST_ENTRY *a2)
{
  __int64 v3; // r9
  signed __int64 *v4; // r8
  signed __int64 v5; // rcx
  signed __int64 v6; // rax
  unsigned __int64 v7; // rcx

  _InterlockedDecrement((volatile signed __int32 *)a1 + 44);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 2, a2 + 7);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 704LL) + 8LL * **a1);
  v4 = (signed __int64 *)(*(_QWORD *)v3 + *(_DWORD *)(v3 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v3 + 20)));
  _m_prefetchw(v4);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( (*v4 & 1) != 0 )
        break;
      v6 = _InterlockedCompareExchange64(v4, v5 - 2, v5);
      if ( v5 == v6 )
        return v6;
    }
    if ( v5 != 1 )
      break;
    v4 = *(signed __int64 **)v3;
  }
  v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v6 == 1 )
    LODWORD(v6) = KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
  return v6;
}
