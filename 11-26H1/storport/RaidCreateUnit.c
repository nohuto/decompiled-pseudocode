/*
 * XREFs of RaidCreateUnit @ 0x14002D474
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidUnitAllocateResources @ 0x14002D7B4 (RaidUnitAllocateResources.c)
 *     RaidUnitSetInitialQueueDepth @ 0x14002DCE8 (RaidUnitSetInitialQueueDepth.c)
 *     RiDisableDeviceQueueFastPath @ 0x14002DED0 (RiDisableDeviceQueueFastPath.c)
 *     RaidZeroUnit @ 0x14002DF68 (RaidZeroUnit.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

NTSTATUS __fastcall RaidCreateUnit(__int64 a1, _QWORD *a2)
{
  __int64 RecommendedSharedDataAlignment; // rdi
  ULONG MaximumProcessorCount; // eax
  __int64 v5; // r14
  int v6; // r12d
  NTSTATUS result; // eax
  char *DeviceExtension; // rbx
  size_t v9; // r14
  __int64 v10; // rsi
  void *v11; // rcx
  __int64 v12; // r15
  char *v13; // rdi
  void *v14; // rcx
  char v15; // al
  int Resources; // esi
  KIRQL v17; // al
  __int64 v18; // rcx
  KIRQL v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int16 v24; // cx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 DeviceCharacteristics; // [rsp+20h] [rbp-49h]
  __int64 Exclusive; // [rsp+28h] [rbp-41h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-39h]
  PDEVICE_OBJECT v32; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v33; // [rsp+48h] [rbp-21h]
  _OWORD v34[2]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v35; // [rsp+70h] [rbp+7h]
  __int64 v36; // [rsp+80h] [rbp+17h]

  v33 = a2;
  v32 = 0LL;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v5 = MaximumProcessorCount;
  v6 = (*(_BYTE *)(a1 + 112) & 2) != 0 ? RecommendedSharedDataAlignment + 216 : 0;
  result = IoCreateDevice(
             *(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 8) + 8LL),
             RecommendedSharedDataAlignment + v6 + ((MaximumProcessorCount + 57) << 6),
             0LL,
             0x2Du,
             0x180u,
             0,
             &v32);
  if ( result >= 0 )
  {
    DeviceExtension = (char *)v32->DeviceExtension;
    RaidZeroUnit(DeviceExtension);
    v9 = v5 << 6;
    v10 = ~(RecommendedSharedDataAlignment - 1);
    v11 = (void *)(v10 & (unsigned __int64)&DeviceExtension[RecommendedSharedDataAlignment + 3647]);
    *((_QWORD *)DeviceExtension + 5) = v11;
    v12 = (unsigned int)RecommendedSharedDataAlignment;
    memset_0(v11, 0, v9);
    v13 = DeviceExtension + 32;
    if ( v6 )
    {
      v14 = (void *)(v10 & (v9 + v12 + *((_QWORD *)DeviceExtension + 5) - 1LL));
      *(_QWORD *)v13 = v14;
      memset_0(v14, 0, 0xD8uLL);
    }
    *((_QWORD *)DeviceExtension + 3) = a1;
    *((_QWORD *)DeviceExtension + 1) = v32;
    *(_WORD *)(DeviceExtension + 1861) = 256;
    DeviceExtension[1863] = 1;
    v32->Flags |= 0x10u;
    v32->Flags |= 0x1000u;
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 1) + 152LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    *((_DWORD *)DeviceExtension + 14) = 0;
    v15 = (*(_BYTE *)(a1 + 4956) + 3) & 0xFC;
    if ( ((*(unsigned __int8 *)(a1 + 4956) + 3) & 0xFFFFFFFC) > 0xFF )
      v15 = -1;
    DeviceExtension[1860] = v15;
    Resources = RaidUnitAllocateResources(DeviceExtension);
    if ( Resources >= 0 )
    {
      RaidUnitSetInitialQueueDepth(DeviceExtension);
      DeviceExtension[757] = 1;
      RiDisableDeviceQueueFastPath(DeviceExtension + 720, 0LL);
      memset(v34, 0, sizeof(v34));
      v36 = 0LL;
      v35 = 0LL;
      if ( *(_QWORD *)v13 && RaidIsUnitControlSupported((__int64)DeviceExtension, 31) )
      {
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v13 + 24LL));
        v18 = *(_QWORD *)v13;
        v19 = v17;
        *(_DWORD *)(v18 + 80) |= 0x20u;
        *(_QWORD *)&v34[0] = 0x3800000038LL;
        DWORD2(v34[0]) = 2;
        if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(
                             v18,
                             v20,
                             v21,
                             v22,
                             DeviceCharacteristics,
                             Exclusive,
                             DeviceObject) )
        {
          v23 = *((_QWORD *)DeviceExtension + 3);
          WORD4(v35) = 1;
          HIDWORD(v35) = 4;
          v24 = *(_WORD *)(v23 + 56);
          LOWORD(v36) = *((_WORD *)DeviceExtension + 52);
          BYTE2(v36) = DeviceExtension[106];
          WORD5(v35) = v24;
        }
        v25 = (_DWORD *)*((_QWORD *)DeviceExtension + 3);
        if ( *v25 == 1094997074 )
        {
          v26 = v25 + 94;
        }
        else if ( *v25 == 1314275652 )
        {
          v26 = v25 + 42;
        }
        else
        {
          v26 = 0LL;
        }
        RaCallMiniportUnitControl(v26, 31LL, v34);
        KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)DeviceExtension + 4) + 24LL), v19);
      }
      v27 = *((_QWORD *)DeviceExtension + 3);
      DeviceExtension[505] &= ~0x80u;
      DeviceExtension[504] &= ~0x80u;
      *((_QWORD *)DeviceExtension + 234) = 0LL;
      if ( *(_QWORD *)(v27 + 5024)
        && (*(_BYTE *)(v27 + 108) & 8) == 0
        && !_InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 904, 1, 0) )
      {
        RaidAdapterPoFxActivateComponent(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
      }
      v28 = v33;
      *((_DWORD *)DeviceExtension + 482) = 10;
      *((_DWORD *)DeviceExtension + 483) = 25;
      *((_DWORD *)DeviceExtension + 484) = 125;
      *v28 = DeviceExtension;
    }
    else
    {
      IoDeleteDevice(v32);
    }
    return Resources;
  }
  return result;
}
