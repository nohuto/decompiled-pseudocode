/*
 * XREFs of ACPIDeviceCancelWaitWakeIrpCallBack @ 0x140032AB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032B58 (ACPIDereferenceWaitWakePowerRequest.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIDeviceCancelWaitWakeIrpCallBack(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  const char *v5; // r8
  __int64 v6; // r10
  const char *v8; // r11
  __int64 v9; // rcx
  char v11; // [rsp+28h] [rbp-30h]

  v4 = (_QWORD *)a4[5];
  v5 = byte_140075A82;
  LOBYTE(v6) = 0;
  v8 = byte_140075A82;
  if ( v4 )
  {
    v9 = v4[1];
    v6 = a4[5];
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v4[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      13,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      v11,
      v6,
      (__int64)v5,
      (__int64)v8);
  }
  ACPIDereferenceWaitWakePowerRequest(a4);
  return 0LL;
}
