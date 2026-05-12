/*
 * XREFs of sub_1401282DC @ 0x1401282DC
 * Callers:
 *     sub_14012A868 @ 0x14012A868 (sub_14012A868.c)
 * Callees:
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 *     sub_1400D1760 @ 0x1400D1760 (sub_1400D1760.c)
 *     sub_1400D18F0 @ 0x1400D18F0 (sub_1400D18F0.c)
 *     sub_14012AED0 @ 0x14012AED0 (sub_14012AED0.c)
 */

__int64 __fastcall sub_1401282DC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  _QWORD *i; // rdi
  __int64 v6; // rcx

  sub_1400CA35C(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 1136);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 1272) + 40LL) + 192LL) )
    {
      KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(v4 + 1272) + 40LL) + 128LL));
      KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(v4 + 1272) + 40LL) + 64LL));
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 1272) + 40LL) + 192LL), 0, 1);
    }
  }
  else if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
    for ( i = *(_QWORD **)(a1 + 1288); i != (_QWORD *)(a1 + 1288); i = (_QWORD *)*i )
    {
      if ( *(_DWORD *)(*(_QWORD *)(i[145] + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(i[145] + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(i[145] + 40LL) + 64LL));
        _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(i[145] + 40LL) + 192LL), 0, 1);
      }
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 1176));
    KeLeaveCriticalRegion();
  }
  sub_1400D18F0(a1);
  *(_BYTE *)(a2[23] + 3LL) |= 1u;
  if ( sub_1400D1760(a1) )
  {
    v6 = *(_QWORD *)(a1 + 160);
    if ( v6 && *(_QWORD *)(v6 + 56) )
    {
      _InterlockedExchange64((volatile __int64 *)(v6 + 128), (__int64)sub_14012AED0);
      IoQueueWorkItem(
        *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 160) + 56LL),
        (PIO_WORKITEM_ROUTINE)sub_1400D8C60,
        DelayedWorkQueue,
        a2);
    }
  }
  else
  {
    sub_14012AED0(*(_QWORD *)(a1 + 8), a2, 0LL);
  }
  return 259LL;
}
