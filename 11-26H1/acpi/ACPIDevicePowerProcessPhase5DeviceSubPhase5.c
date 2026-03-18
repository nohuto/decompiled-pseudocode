/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1400274D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDeviceCompleteCommon @ 0x14002743C (ACPIDeviceCompleteCommon.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rdi
  const char *v2; // rax
  const char *v4; // r8
  char v5; // cl
  __int64 v6; // rdx
  _UNKNOWN **v7; // rdx
  __int64 v8; // rcx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = byte_140075A82;
  v4 = byte_140075A82;
  v5 = 0;
  if ( v1 )
  {
    v6 = v1[1];
    v5 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v4 = (const char *)v1[77];
    }
  }
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      10,
      82,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v5,
      (__int64)v2,
      (__int64)v4);
  }
  *(_DWORD *)(a1 + 212) = 8;
  v8 = *(_QWORD *)(a1 + 232);
  if ( (v8 & 9) == 9 && ((v8 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    *(_OWORD *)(a1 + 216) = 0LL;
    *(_OWORD *)(a1 + 232) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    ACPIDeviceCompleteCommon((volatile signed __int32 *)(a1 + 208), 2);
  }
  return 0LL;
}
