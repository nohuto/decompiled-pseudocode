/*
 * XREFs of sub_1401276A0 @ 0x1401276A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140126F38 @ 0x140126F38 (sub_140126F38.c)
 *     sub_14012A294 @ 0x14012A294 (sub_14012A294.c)
 *     sub_14012B468 @ 0x14012B468 (sub_14012B468.c)
 */

BOOLEAN __fastcall sub_1401276A0(__int64 a1, unsigned int a2)
{
  BOOLEAN result; // al
  __int64 v5; // rdi
  _QWORD *i; // rdi

  result = sub_140126F38(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 1136);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 1272) + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(v5 + 1272) + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(v5 + 1272) + 40LL) + 64LL));
        _InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 1272) + 40LL) + 192LL),
          0,
          1);
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
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 64LL) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
      sub_14012B468(*(_QWORD *)(a1 + 1136), 0LL);
    PoFxCompleteIdleCondition(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL), a2);
    return sub_14012A294(a1);
  }
  return result;
}
