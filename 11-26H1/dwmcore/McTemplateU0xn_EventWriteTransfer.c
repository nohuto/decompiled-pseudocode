/*
 * XREFs of McTemplateU0xn_EventWriteTransfer @ 0x180217DA0
 * Callers:
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801663B0 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xn_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = a3;
  v8 = 8LL;
  v7 = &v11;
  v9 = a5;
  v10 = 28LL;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Compositor_Context,
           &WaitForVerticalBlank_Start,
           a3,
           3u,
           &v6);
}
