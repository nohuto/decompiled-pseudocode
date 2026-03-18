/*
 * XREFs of UsbhRegQueryGlobalKey @ 0x140031FDC
 * Callers:
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x140031CF8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegDriverEntry @ 0x140052EE0 (UsbhRegDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x140049A2C (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1400547C8 (WPP_RECORDER_SF_SD.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhRegQueryGlobalKey(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  PVOID SystemRoutineAddress; // rax
  int v9; // edx
  unsigned int v10; // esi
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      61,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  v16 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))SystemRoutineAddress)(a1, a2, a4, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        62,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        v11,
        63,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
  }
  v14 = a4 + 24;
  do
  {
    if ( !*(_QWORD *)(v14 - 24) )
      break;
    if ( *(_DWORD *)(v14 + 8) == 4
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_SD(
        WPP_GLOBAL_Control->DeviceExtension,
        **(_DWORD **)v14,
        v11,
        v12,
        v16,
        *(_QWORD *)(v14 - 8),
        **(_DWORD **)v14);
    }
    v14 += 56LL;
    a5 -= 56;
  }
  while ( a5 >= 0x38 );
  return v10;
}
