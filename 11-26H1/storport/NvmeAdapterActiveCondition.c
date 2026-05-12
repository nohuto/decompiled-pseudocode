/*
 * XREFs of NvmeAdapterActiveCondition @ 0x14003B9C0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14003B978 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterReleasePoFx @ 0x14003BAD0 (NvmeAdapterReleasePoFx.c)
 *     NvmeControllerPerfStateTransition @ 0x14003BB08 (NvmeControllerPerfStateTransition.c)
 *     NvmeControllerCancelFStateIdleTimer @ 0x14003BBB4 (NvmeControllerCancelFStateIdleTimer.c)
 *     StorRestartDeviceCommandQueue @ 0x14003BC0C (StorRestartDeviceCommandQueue.c)
 */

BOOLEAN __fastcall NvmeAdapterActiveCondition(_QWORD *a1)
{
  BOOLEAN result; // al
  __int64 v3; // rbx
  __int64 v4; // rdx

  result = NvmeAdapterCheckAndAcquirePoFx((__int64)a1);
  if ( result )
  {
    *(_BYTE *)(*(_QWORD *)(a1[20] + 8LL) + 64LL) = 1;
    if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
    {
      v3 = a1[144];
      NvmeControllerCancelFStateIdleTimer(v3);
      PoFxSetComponentLatency(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v3 + 128) + 160LL) + 8LL), 0LL, 0LL);
      NvmeControllerPerfStateTransition(v3);
      v4 = a1[144];
      if ( !_InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 192LL),
              1,
              0) )
        KeSetCoalescableTimer(
          (PKTIMER)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 128LL),
          (LARGE_INTEGER)-50000000LL,
          0x7D0u,
          0x12Cu,
          (PKDPC)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 64LL));
      StorRestartDeviceCommandQueue(*(_QWORD *)(a1[144] + 1024LL));
    }
    return NvmeAdapterReleasePoFx(a1);
  }
  return result;
}
