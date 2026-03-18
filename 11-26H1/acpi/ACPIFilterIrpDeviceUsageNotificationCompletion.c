/*
 * XREFs of ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1400312D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x140024BD8 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIFilterIrpDeviceUsageNotificationCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rdi
  int v6; // r14d
  const char *v7; // rax
  char v8; // r8
  const char *v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // edx
  __int64 v14; // [rsp+50h] [rbp-18h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  v6 = *(_DWORD *)(a2 + 48);
  v7 = byte_140075A82;
  v8 = 0;
  v9 = byte_140075A82;
  if ( DeviceExtension )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v8 = DeviceExtension;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(DeviceExtension + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(DeviceExtension + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (__int64)v9;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qsLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      5,
      12,
      (__int64)&WPP_ee1b3e6ee15937e5a501f089fd3dd194_Traceguids,
      a2,
      (__int64)off_14008C660[0],
      v6,
      v8,
      (__int64)v7,
      v14);
  }
  if ( v6 >= 0 )
  {
    if ( *(_DWORD *)(v5 + 16) == 2 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 736));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 736));
    }
    if ( *(_DWORD *)(v5 + 16) == 1 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 740));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 740));
    }
    if ( *(_DWORD *)(v5 + 16) == 3 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 744));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 744));
    }
    if ( *(_BYTE *)(v5 + 8) == 1 )
      *(_DWORD *)(a1 + 48) &= ~0x2000u;
    if ( !*(_BYTE *)(v5 + 8) && (*(_BYTE *)(DeviceExtension + 8) & 0x40) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 48);
      if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 776) + 48LL) & 0x2000) != 0 )
        v12 = v11 | 0x2000;
      else
        v12 = v11 & 0xFFFFDFFF;
      *(_DWORD *)(a1 + 48) = v12;
    }
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 784));
  }
  ACPIInternalDecrementIrpReferenceCount(DeviceExtension);
  return 0LL;
}
