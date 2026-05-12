/*
 * XREFs of RaidAdapterFindUnit @ 0x140028FF0
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorpTelemetryMiniportEvent @ 0x140027DA8 (StorpTelemetryMiniportEvent.c)
 *     StorPortDeviceBusy @ 0x140027E70 (StorPortDeviceBusy.c)
 *     StorPortResumeDevice @ 0x140028690 (StorPortResumeDevice.c)
 *     RaidAdapterResumeUnit @ 0x140028A9C (RaidAdapterResumeUnit.c)
 *     RaidAdapterPauseUnit @ 0x140028B48 (RaidAdapterPauseUnit.c)
 *     StorPortPauseDevice @ 0x140028C40 (StorPortPauseDevice.c)
 *     StorPortGetLogicalUnit @ 0x140028F80 (StorPortGetLogicalUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x14003E924 (StorpTelemetryMiniportEventWStr.c)
 *     StorEtwRaidMiniportEvent @ 0x140042204 (StorEtwRaidMiniportEvent.c)
 *     StorEtwMiniportLogError @ 0x140052C80 (StorEtwMiniportLogError.c)
 *     StorpLogSystemEvent @ 0x140058584 (StorpLogSystemEvent.c)
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     StorPortpInvokeAcpiMethod @ 0x14005B718 (StorPortpInvokeAcpiMethod.c)
 *     StorpSetUnitAttributes @ 0x14005C7AC (StorpSetUnitAttributes.c)
 *     RaidAdapterDeviceBusy @ 0x140060A68 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x140060B5C (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x140069ADC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x14006C160 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x14007B250 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x14007B410 (StorPortDeviceReady.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x140092480 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1400A8A68 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwMiniportLogByteStream @ 0x1400B1628 (StorEtwMiniportLogByteStream.c)
 *     RaidAdapterPassThrough @ 0x1401B3090 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140009C04 (RaidAdapterFindUnitAtDirql.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall RaidAdapterFindUnit(__int64 a1, int a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r14
  __int64 *v6; // rbp
  __int64 v7; // rsi
  __int64 *k; // rdi
  KIRQL v10; // r15
  __int64 v11; // rsi
  unsigned int i; // ebp
  struct _KINTERRUPT **v13; // r12
  int v14; // ecx
  _QWORD *v15; // rbp
  unsigned int v16; // ebx
  int v17; // esi
  _QWORD **v18; // r13
  _QWORD *j; // rbx
  __int64 v20; // rax
  int v21; // eax
  _QWORD *v22; // rbp
  __int64 v23; // rsi
  unsigned int v24; // ebx
  struct _KINTERRUPT *v25; // rcx
  KIRQL v26; // dl
  PKINTERRUPT *v27; // rdi
  struct _KINTERRUPT *v28; // rcx
  __int64 (__fastcall *v29)(__int64, unsigned __int64); // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  __int64 (__fastcall *v32)(_QWORD *); // [rsp+90h] [rbp+18h]
  unsigned __int64 v33; // [rsp+98h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    if ( (unsigned int)CurrentIrql >= *(_DWORD *)(a1 + 872) )
      return RaidAdapterFindUnitAtDirql(a1, a2);
    v10 = 0;
    if ( *(_BYTE *)(a1 + 4433) )
    {
      v11 = *(_QWORD *)(a1 + 4416);
      v10 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v11 + 24));
      if ( *(_DWORD *)(a1 + 4400) == 2 )
      {
        for ( i = 1; i < *(_DWORD *)(v11 + 4); ++i )
          KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v11 + 48LL * i + 24));
      }
      v13 = (struct _KINTERRUPT **)(a1 + 864);
    }
    else
    {
      v13 = (struct _KINTERRUPT **)(a1 + 864);
      v28 = *(struct _KINTERRUPT **)(a1 + 864);
      if ( v28 )
        v10 = KeAcquireInterruptSpinLock(v28);
    }
    v14 = (unsigned __int8)a2;
    v15 = 0LL;
    v16 = *(_DWORD *)(a1 + 172);
    v32 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 192);
    v29 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 200);
    v33 = BYTE2(a2) | (unsigned __int64)((BYTE1(a2) | (unsigned int)(v14 << 8)) << 8);
    v17 = -1073741275;
    v18 = (_QWORD **)(16LL * ((*(unsigned int (**)(void))(a1 + 208))() % v16) + *(_QWORD *)(a1 + 184));
    for ( j = *v18; j != v18; j = (_QWORD *)*j )
    {
      v20 = v32(j);
      v21 = v29(v20, v33);
      if ( !v21 )
      {
        v17 = 0;
        v15 = j;
        break;
      }
      if ( v21 < 0 )
        break;
    }
    v22 = v15 - 10;
    if ( v17 < 0 )
      v22 = 0LL;
    if ( *(_BYTE *)(a1 + 4433) )
    {
      v23 = *(_QWORD *)(a1 + 4416);
      if ( *(_DWORD *)(a1 + 4400) == 2 )
      {
        v24 = *(_DWORD *)(v23 + 4) - 1;
        if ( *(_DWORD *)(v23 + 4) != 1 )
        {
          v27 = (PKINTERRUPT *)(v23 + 48LL * v24 + 24);
          do
          {
            KeReleaseInterruptSpinLock(*v27, *(_BYTE *)v23);
            v27 -= 6;
            --v24;
          }
          while ( v24 );
        }
      }
      v25 = *(struct _KINTERRUPT **)(v23 + 24);
      v26 = v10;
    }
    else
    {
      v25 = *v13;
      if ( !*v13 )
        return v22;
      v26 = v10;
    }
    KeReleaseInterruptSpinLock(v25, v26);
    return v22;
  }
  v5 = 0LL;
  v6 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v7 = a1 + 144;
  for ( k = *(__int64 **)(a1 + 144); k != (__int64 *)v7; k = (__int64 *)*k )
  {
    v6 = k - 8;
    if ( ((unsigned __int8)BYTE2(*((_DWORD *)k + 10)) | ((((unsigned __int8)*((_DWORD *)k + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)k + 10))) << 8)) == (BYTE2(a2) | ((BYTE1(a2) | ((unsigned __int8)a2 << 8)) << 8)) )
      break;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( k != (__int64 *)v7 )
    return v6;
  return (__int64 *)v5;
}
