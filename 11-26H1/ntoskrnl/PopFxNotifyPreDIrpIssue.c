/*
 * XREFs of PopFxNotifyPreDIrpIssue @ 0x1405123F4
 * Callers:
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     PopFxNextParentRelationSafe @ 0x14046A9F0 (PopFxNextParentRelationSafe.c)
 *     PopDiagTraceFxDeviceInvalidTransition @ 0x14060B798 (PopDiagTraceFxDeviceInvalidTransition.c)
 */

bool __fastcall PopFxNotifyPreDIrpIssue(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  KIRQL v7; // r12
  __int64 i; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  int v11; // ecx
  KIRQL v12; // al
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a2 + 72LL * *(char *)(a2 + 66) + 200);
  if ( *(_DWORD *)(v4 + 192) == 1 )
    goto LABEL_7;
  _m_prefetchw((const void *)(a1 + 32));
  v5 = *(_DWORD *)(a1 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 0x4000) == 0 )
    PopDiagTraceFxDeviceInvalidTransition(a1);
  if ( *(_DWORD *)(v4 + 192) == 1 )
  {
LABEL_7:
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1280));
    v14 = 0LL;
    for ( i = 0LL; PopFxNextParentRelationSafe((_QWORD **)(a1 + 1304), i, &v14); i = v9 )
    {
      v9 = v14;
      if ( (*(_DWORD *)(v14 + 16) & 2) == 0 )
      {
        v10 = *(_QWORD *)(v14 + 24);
        PopFxActivateComponent(*(_QWORD *)(v10 + 80), v10, 10, 0);
        v11 = *(_DWORD *)(v9 + 16);
        if ( *(int *)(v10 + 88) < 0 )
        {
          *(_DWORD *)(v9 + 16) = v11 | 2;
        }
        else
        {
          *(_DWORD *)(v9 + 16) = v11 | 1;
          ++*(_DWORD *)(a1 + 1288);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 1288) )
    {
      *(_QWORD *)(a1 + 1296) = v2;
      v2 = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1280), v7);
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 864), 0, 0) & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 0x2000) != 0 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1192));
      *(_DWORD *)(a1 + 1220) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1200));
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1192), v12);
    }
  }
  return v2 != 0;
}
