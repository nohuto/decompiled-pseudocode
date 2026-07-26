/*
 * XREFs of ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x140191B38
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1401385C0 (WdmlibIoCreateDeviceSecure.c)
 */

__int64 __fastcall ndisLwmInitializeSubsystem(__int64 a1, __int64 a2, __int64 a3, ULONG a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  ULONG v7; // [rsp+20h] [rbp-68h]
  BOOLEAN v8; // [rsp+28h] [rbp-60h]
  const GUID *v9; // [rsp+38h] [rbp-50h]
  _UNICODE_STRING v10; // [rsp+50h] [rbp-38h] BYREF
  __int128 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  v10.Buffer = (wchar_t *)&v11;
  *(_QWORD *)&v10.Length = 1572886LL;
  v11 = *(_OWORD *)L"\\Device\\lwm";
  v12 = *(_QWORD *)L"lwm";
  v5 = WdmlibIoCreateDeviceSecure(
         (PDRIVER_OBJECT)ndisDriverObject,
         0,
         &v10,
         a4,
         v7,
         v8,
         &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R,
         v9,
         &ndisLwmDeviceObject);
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        1,
        10,
        (struct _GUID *)&WPP_256fc262f79a3bb49efbb755fab9107e_Traceguids);
    }
    return v5;
  }
  else
  {
    ndisLwmDeviceObject->Flags |= 0x10u;
    return 0LL;
  }
}
