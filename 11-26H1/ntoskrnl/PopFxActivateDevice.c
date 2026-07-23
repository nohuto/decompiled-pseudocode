/*
 * XREFs of PopFxActivateDevice @ 0x1404CEB00
 * Callers:
 *     PopFxActivateDevicesForSx @ 0x1404CE9D4 (PopFxActivateDevicesForSx.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1404CEAC8 (PoFxActivateDeviceForSystemTransition.c)
 *     PoFxActivateDevice @ 0x1404CEAE4 (PoFxActivateDevice.c)
 *     PopFxClearDeviceConstraints @ 0x1404DB710 (PopFxClearDeviceConstraints.c)
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 *     PoFxAddDeviceRelation @ 0x140606D00 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140607360 (PoFxRemoveDeviceRelation.c)
 *     PopPepPlatformStateRegistered @ 0x1406146A4 (PopPepPlatformStateRegistered.c)
 *     PopPlActivateDeviceIterator @ 0x140615320 (PopPlActivateDeviceIterator.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PoFxActivateComponent @ 0x14037C860 (PoFxActivateComponent.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x140603CFC (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall PopFxActivateDevice(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rsi
  KIRQL v7; // al
  int v8; // edx
  KIRQL v9; // bp
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  ULONG_PTR v12; // rbx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  unsigned int i; // edi
  __int64 j; // rsi
  ULONG_PTR v17; // rdi

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v8 = *(_DWORD *)(v5 + 120);
  v9 = v7;
  _m_prefetchw((const void *)(v5 + 296));
  v10 = *(_DWORD *)(v5 + 296);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v10, v10);
  }
  while ( v11 != v10 );
  if ( (v10 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 864LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88), v9);
  }
  else
  {
    v12 = 0LL;
    *(_DWORD *)(v5 + 120) = v8 + 1;
    _m_prefetchw((const void *)(v5 + 296));
    v13 = *(_DWORD *)(v5 + 296);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v13, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 4) != 0 )
    {
      v12 = *(_QWORD *)(v5 + 80);
      PopFxReferenceDevice(v12, 7);
      for ( i = 0; i < *(_DWORD *)(v12 + 868); ++i )
        PoFxActivateComponent(v12, i, 2);
    }
    ExReleaseSpinLockExclusive(v6, v9);
    if ( v12 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + 868); j = (unsigned int)(j + 1) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v12 + 872) + 8 * j);
        if ( (*(_DWORD *)(v17 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v12 + 872) + 8 * j), v17 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v17 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v17 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v17, v17 + 88, 0LL);
        if ( a2 )
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x4001u);
        if ( !(unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline()
          && (*(_DWORD *)(v12 + 864) & 0x80u) != 0 )
        {
          if ( a3 )
            _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x800u);
        }
      }
      KeWaitForSingleObject((PVOID)(v12 + 608), Executive, 0, 0, 0LL);
      PopFxDereferenceDevice(v12, 7);
    }
  }
}
