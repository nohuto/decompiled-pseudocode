/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14002DBD0
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Register_WriteSecureMmio @ 0x14002DDB0 (Register_WriteSecureMmio.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rbp
  __int64 v4; // rsi
  _UNKNOWN **v5; // rax
  bool v6; // zf
  unsigned int i; // r14d
  char v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  unsigned int *v12; // rbx
  __int16 Ulong; // ax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  char v17; // bl
  signed __int32 v19[8]; // [rsp+0h] [rbp-58h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( *(_BYTE *)(v3 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3290);
  v4 = *(_QWORD *)(v3 + 152);
  v5 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    LOBYTE(v5) = WPP_RECORDER_SF_q(
                   *(_QWORD *)(v3 + 72),
                   v2,
                   4,
                   93,
                   (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                   v1);
  }
  v6 = (*(_QWORD *)(v3 + 736) & 0x20000000LL) == 0;
  *(_BYTE *)(v3 + 868) = 0;
  if ( v6 )
  {
    for ( i = 0; i < *(_DWORD *)(v4 + 16); ++i )
    {
      v8 = 0;
      if ( KeGetCurrentIrql() == 2 )
      {
        v9 = *(_QWORD *)(v4 + 8);
        if ( *(_BYTE *)(v9 + 1001) )
        {
          Controller_LowerAndTrackIrql((_QWORD *)v9);
          v8 = 1;
        }
      }
      v10 = *(_QWORD *)(v4 + 48);
      v11 = 120LL * i;
      DynamicLock_Acquire(*(_QWORD *)(v10 + v11 + 24));
      *(_BYTE *)(v10 + v11 + 32) = v8;
      v12 = (unsigned int *)(16LL * i + *(_QWORD *)(v4 + 40));
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v12);
      v14 = *(_QWORD *)(v3 + 88);
      v15 = Ulong & 0xC200;
      v20 = v15;
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 8) + 1001LL) )
      {
        Register_WriteSecureMmio(v14, v12, 2LL, &v20);
      }
      else
      {
        *v12 = v15;
        _InterlockedOr(v19, 0);
      }
      v16 = *(_QWORD *)(v4 + 48);
      v17 = *(_BYTE *)(v16 + v11 + 32);
      *(_BYTE *)(v16 + v11 + 32) = 0;
      LOBYTE(v5) = DynamicLock_Release(*(_QWORD *)(v16 + v11 + 24));
      if ( v17 )
        LOBYTE(v5) = Controller_RaiseAndTrackIrql(*(_QWORD *)(v4 + 8));
    }
  }
  return (char)v5;
}
