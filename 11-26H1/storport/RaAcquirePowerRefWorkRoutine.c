/*
 * XREFs of RaAcquirePowerRefWorkRoutine @ 0x14004CC60
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 *     RaidUnitPoFxActivateComponent @ 0x14002A810 (RaidUnitPoFxActivateComponent.c)
 *     RaUnitRequestPowerUp @ 0x140034934 (RaUnitRequestPowerUp.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x140078484 (RaidUnitIsRegisteredForIdleDetection.c)
 */

void __fastcall RaAcquirePowerRefWorkRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char *DeviceExtension; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  KIRQL v5; // al
  KIRQL v6; // di
  unsigned int LockArray_high; // r9d
  int v8; // r8d
  __int64 v9; // rcx
  __int64 **v10; // rax
  __int64 ***v11; // rdx
  __int64 **v12; // rcx
  _QWORD *v13; // rax
  ULONG MaximumProcessorCount; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v22; // [rsp+38h] [rbp-8h]
  unsigned __int8 v23; // [rsp+50h] [rbp+10h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v23 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) & 0x10) == 0 )
  {
    if ( DeviceExtension[504] < 0 || (v3 = 1LL, (DeviceExtension[505] & 1) != 0) )
      v3 = 2LL;
    RaidUnitPoFxActivateComponent((__int64)DeviceExtension, 0, v3, &v23);
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) = *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) & 0xFFFFFFFD | (2 * (v23 & 1));
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) = *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) & 0xFFFFFFFB | (4 * ((v23 >> 1) & 1));
    if ( DeviceExtension[759] && !(unsigned __int8)RaidUnitIsRegisteredForIdleDetection(DeviceExtension) )
      RaUnitRequestPowerUp(v4);
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)DeviceExtension + 4) + 24LL));
  v6 = v5;
  *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) &= ~0x10u;
  if ( DeviceExtension[759] )
  {
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)DeviceExtension + 4) + 24LL), v5);
  }
  else
  {
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v22 = &v21;
    v8 = 0;
    v21 = (__int64 *)&v21;
    while ( 1 )
    {
      v9 = *((_QWORD *)DeviceExtension + 4);
      v10 = (__int64 **)(v9 + 32);
      v11 = *(__int64 ****)(v9 + 32);
      if ( v11 == (__int64 ***)(v9 + 32) )
        break;
      if ( v11[1] != v10 )
        goto LABEL_28;
      v12 = *v11;
      if ( (*v11)[1] != (__int64 *)v11 )
        goto LABEL_28;
      *v10 = (__int64 *)v12;
      v12[1] = (__int64 *)v10;
      if ( (*(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) & 1) != 0 )
        *((_DWORD *)v11 - 30) = LockArray_high;
      v13 = v22;
      if ( *v22 != (__int64 *)&v21 )
LABEL_28:
        __fastfail(3u);
      v11[1] = v22;
      *v11 = &v21;
      ++v8;
      *v13 = v11;
      v22 = (__int64 **)v11;
    }
    if ( (*(_DWORD *)(v9 + 80) & 1) != 0 )
    {
      _InterlockedExchange((volatile __int32 *)v9, 4);
      _InterlockedAdd(
        (volatile signed __int32 *)(((unsigned __int64)LockArray_high << 6) + *((_QWORD *)DeviceExtension + 5) + 4),
        2 * v8);
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)v9, 4 * v8);
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
      if ( MaximumProcessorCount )
      {
        v15 = 0LL;
        v16 = MaximumProcessorCount;
        do
        {
          v15 += 64LL;
          _InterlockedExchange((volatile __int32 *)(v15 + *((_QWORD *)DeviceExtension + 5) - 60), 0);
          --v16;
        }
        while ( v16 );
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)DeviceExtension + 4) + 24LL), v6);
    while ( 1 )
    {
      v18 = v21;
      if ( v21 == (__int64 *)&v21 )
        break;
      if ( (__int64 **)v21[1] != &v21 )
        goto LABEL_28;
      v19 = (__int64 *)*v21;
      if ( *(__int64 **)(*v21 + 8) != v21 )
        goto LABEL_28;
      v21 = (__int64 *)*v21;
      v19[1] = (__int64)&v21;
      RaidUnitSubmitIrpRequest((__int64)DeviceExtension, (__int64)(v18 - 21), 0LL, v17);
    }
    v20 = *((_QWORD *)DeviceExtension + 4);
    if ( (*(_DWORD *)(v20 + 80) & 1) == 0 )
      KeSetCoalescableTimer((PKTIMER)(v20 + 88), (LARGE_INTEGER)-20000000LL, 0, 0x12Cu, (PKDPC)(v20 + 152));
  }
}
