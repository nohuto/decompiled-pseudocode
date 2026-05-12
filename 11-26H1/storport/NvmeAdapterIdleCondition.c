/*
 * XREFs of NvmeAdapterIdleCondition @ 0x14003B7F0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14003B978 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterReleasePoFx @ 0x14003BAD0 (NvmeAdapterReleasePoFx.c)
 *     NvmeControllerUpdateResumeLatencyTolerance @ 0x14003BCE8 (NvmeControllerUpdateResumeLatencyTolerance.c)
 *     NvmeControllerSetFStateIdleTimer @ 0x14003BD70 (NvmeControllerSetFStateIdleTimer.c)
 */

__int64 __fastcall NvmeAdapterIdleCondition(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r10
  _QWORD *i; // rdi

  result = NvmeAdapterCheckAndAcquirePoFx();
  if ( (_BYTE)result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 1152);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 1288) + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(v5 + 1288) + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(v5 + 1288) + 40LL) + 64LL));
        _InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 1288) + 40LL) + 192LL),
          0,
          1);
      }
    }
    else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
      for ( i = *(_QWORD **)(a1 + 1304); i != (_QWORD *)(a1 + 1304); i = (_QWORD *)*i )
      {
        if ( *(_DWORD *)(*(_QWORD *)(i[147] + 40LL) + 192LL) )
        {
          KeCancelTimer((PKTIMER)(*(_QWORD *)(i[147] + 40LL) + 128LL));
          KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(i[147] + 40LL) + 64LL));
          _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(i[147] + 40LL) + 192LL), 0, 1);
        }
      }
      ExReleaseResourceLite((PERESOURCE)(a1 + 1192));
      KeLeaveCriticalRegion();
    }
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 64LL) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1152) + 128LL) + 160LL) + 8LL) + 16LL) > 1u )
    {
      NvmeControllerUpdateResumeLatencyTolerance(*(_QWORD *)(a1 + 1152));
      NvmeControllerSetFStateIdleTimer(v6);
    }
    PoFxCompleteIdleCondition(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL), a2);
    return NvmeAdapterReleasePoFx(a1);
  }
  return result;
}
