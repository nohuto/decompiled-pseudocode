/*
 * XREFs of NvmeAdapterStop @ 0x1400DEC40
 * Callers:
 *     NvmeAdapterDevicePowerStopAdapter @ 0x140123208 (NvmeAdapterDevicePowerStopAdapter.c)
 *     NvmeAdapterReleaseResources @ 0x14019DE88 (NvmeAdapterReleaseResources.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019F188 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     NvmeIsAdapterControlSupported @ 0x1400787E0 (NvmeIsAdapterControlSupported.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400D4F2C (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterStopAdapter @ 0x1400DF15C (NvmeAdapterStopAdapter.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400E0BE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400FAC28 (NvmeControllerSetStorMQProperty.c)
 *     NvmeControllerStop @ 0x1400FADAC (NvmeControllerStop.c)
 *     NvmeControllerTerminateCommandTimeoutDetectThread @ 0x1400FB6CC (NvmeControllerTerminateCommandTimeoutDetectThread.c)
 */

__int64 __fastcall NvmeAdapterStop(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  char v10; // r13
  _QWORD *v11; // r15
  _QWORD *v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 **v16; // rcx
  __int64 **v17; // rbx
  __int64 *v18; // r13
  __int64 *i; // r12
  __int64 *v20; // r15
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 **v23; // rax

  v4 = *(_QWORD *)(a1 + 400);
  v5 = 0;
  v6 = 0;
  if ( !v4 || !*(_QWORD *)(a1 + 408) )
    return (unsigned int)v5;
  if ( (*(_DWORD *)(v4 + 184) & 0x40000000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 1152);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1288) + 40LL) + 192LL) )
    {
      KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(v7 + 1288) + 40LL) + 128LL));
      KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(v7 + 1288) + 40LL) + 64LL));
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v7 + 1288) + 40LL) + 192LL), 0, 1);
    }
    if ( a2 != 2 )
      NvmeControllerTerminateCommandTimeoutDetectThread(*(_QWORD *)(a1 + 1152));
    v8 = *(_DWORD *)(a1 + 84);
    if ( v8 == 5 || v8 == 6 )
    {
      v9 = NvmeControllerRemove(*(_QWORD *)(a1 + 1152));
    }
    else
    {
      if ( v8 != 8 )
        goto LABEL_54;
      v9 = NvmeControllerStop(*(_QWORD *)(a1 + 1152));
    }
    v5 = v9;
    if ( v9 >= 0 )
      goto LABEL_54;
    return (unsigned int)v5;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 608);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v15 + 24), 1u);
    v16 = *(__int64 ***)(a1 + 608);
    v17 = (__int64 **)*v16;
    while ( v17 != v16 )
    {
      v5 = NvmeAdapterHostGatewayAcquireRundown((__int64)(v17 - 3));
      if ( v5 >= 0 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(v17 + 45), 1u);
        v18 = (__int64 *)(v17 + 42);
        for ( i = v17[42]; i != v18; i = (__int64 *)*i )
        {
          v5 = NvmeAdapterSubsystemPortAcquireRundown(i - 1);
          if ( v5 >= 0 )
          {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)i + 6, 1u);
            v20 = (__int64 *)i[75];
            if ( v20 != i + 75 )
            {
              do
              {
                if ( *(_DWORD *)(*(_QWORD *)(v20[153] + 40) + 192LL) )
                {
                  KeCancelTimer((PKTIMER)(*(_QWORD *)(v20[153] + 40) + 128LL));
                  KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(v20[153] + 40) + 64LL));
                  _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v20[153] + 40) + 192LL), 0, 1);
                }
                v21 = v20[9];
                *((_DWORD *)v20 + 126) = 3;
                if ( (v21 & 1) == 0 )
                {
                  v20[9] = v21 | 8;
                  v22 = (__int64 *)*v20;
                  if ( *(__int64 **)(*v20 + 8) != v20 || (v23 = (__int64 **)v20[1], *v23 != v20) )
                    __fastfail(3u);
                  *v23 = v22;
                  v22[1] = (__int64)v23;
                  --*((_DWORD *)i + 154);
                }
                NvmeAdapterDisconnectControllerInternal(a1, (__int64)(v20 - 8), (const char *)i + 52, (v20[9] & 1) == 0);
                v20 = (__int64 *)*v20;
              }
              while ( v20 != i + 75 );
              v18 = (__int64 *)(v17 + 42);
            }
            ExReleaseResourceLite((PERESOURCE)i + 6);
            KeLeaveCriticalRegion();
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[4]);
          }
        }
        ExReleaseResourceLite((PERESOURCE)(v17 + 45));
        KeLeaveCriticalRegion();
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v17[4]);
      }
      v17 = (__int64 **)*v17;
      v16 = *(__int64 ***)(a1 + 608);
    }
    ExReleaseResourceLite((PERESOURCE)(v16 + 3));
    KeLeaveCriticalRegion();
    goto LABEL_54;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
  v10 = 0;
  v11 = *(_QWORD **)(a1 + 1304);
  while ( v11 != (_QWORD *)(a1 + 1304) )
  {
    v12 = v11 - 14;
    if ( *(_DWORD *)(*(_QWORD *)(v11[147] + 40LL) + 192LL) )
    {
      KeCancelTimer((PKTIMER)(*(_QWORD *)(v12[161] + 40LL) + 128LL));
      KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(v12[161] + 40LL) + 64LL));
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v12[161] + 40LL) + 192LL), 0, 1);
    }
    NvmeControllerTerminateCommandTimeoutDetectThread(v11 - 14);
    v13 = *(_DWORD *)(a1 + 84);
    if ( v13 == 5 || v13 == 6 )
    {
      NvmeControllerSetStorMQProperty(v11 - 14, 2147483657LL, 4LL);
      v5 = NvmeControllerRemove((int)v11 - 112);
      if ( v5 >= 0 )
        goto LABEL_28;
      *((_DWORD *)v12 + 298) = 48;
    }
    else if ( v13 == 8 )
    {
      v5 = NvmeControllerStop((int)v11 - 112);
      if ( v5 >= 0 )
        goto LABEL_28;
      *((_DWORD *)v12 + 298) = 47;
    }
    else if ( v5 >= 0 )
    {
      goto LABEL_28;
    }
    v10 = 1;
LABEL_28:
    v11 = (_QWORD *)*v11;
    v14 = v5;
    if ( v5 >= 0 )
      v14 = v6;
    v6 = v14;
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 1192));
  KeLeaveCriticalRegion();
  if ( v10 )
    return v6;
LABEL_54:
  if ( NvmeIsAdapterControlSupported(a1 + 168, 1) )
    return (unsigned int)NvmeAdapterStopAdapter(a1);
  return (unsigned int)v5;
}
