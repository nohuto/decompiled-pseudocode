/*
 * XREFs of ACPIFilterIrpStopDeviceCompletion @ 0x140060F80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x140024BD8 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 */

__int64 __fastcall ACPIFilterIrpStopDeviceCompletion(ULONG_PTR a1, __int64 a2)
{
  int v2; // esi
  __int64 DeviceExtension; // rax
  char v5; // r8
  const char *v6; // rcx
  __int64 v7; // rbx
  const char *v8; // rdx
  __int64 v9; // rax

  v2 = *(_DWORD *)(a2 + 48);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = 0;
  v6 = byte_140075A82;
  v7 = DeviceExtension;
  v8 = byte_140075A82;
  if ( DeviceExtension )
  {
    v5 = DeviceExtension;
    v9 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(v7 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v7 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Eu,
      (__int64)&WPP_ee1b3e6ee15937e5a501f089fd3dd194_Traceguids,
      a2,
      off_14008C5D0[0],
      v2,
      v5,
      v6,
      v8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( v2 >= 0 )
  {
    *(_DWORD *)(v7 + 368) = 0;
    ACPIInitStopDevice(v7, 0LL);
  }
  ACPIInternalDecrementIrpReferenceCount(v7);
  return 0LL;
}
