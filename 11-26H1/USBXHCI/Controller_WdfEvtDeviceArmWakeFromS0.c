/*
 * XREFs of Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14002DA10
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Register_WriteSecureMmio @ 0x14002DDB0 (Register_WriteSecureMmio.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceArmWakeFromS0(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rbp
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // r15
  char v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int *v10; // rbx
  __int16 Ulong; // ax
  __int64 v12; // rcx
  int v13; // eax
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF

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
      3237);
  v4 = *(_QWORD *)(v3 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 92, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v1);
  }
  v5 = 0;
  for ( *(_BYTE *)(v3 + 868) = 1; v5 < *(_DWORD *)(v4 + 16); ++v5 )
  {
    v6 = 120LL * v5;
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + v6 + 64) & 2) == 0 )
    {
      v7 = 0;
      if ( KeGetCurrentIrql() == 2 )
      {
        v8 = *(_QWORD *)(v4 + 8);
        if ( *(_BYTE *)(v8 + 1001) )
        {
          Controller_LowerAndTrackIrql((_QWORD *)v8);
          v7 = 1;
        }
      }
      v9 = *(_QWORD *)(v4 + 48);
      DynamicLock_Acquire(*(_QWORD *)(v9 + v6 + 24));
      *(_BYTE *)(v9 + v6 + 32) = v7;
      v10 = (unsigned int *)(16LL * v5 + *(_QWORD *)(v4 + 40));
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v10);
      v12 = *(_QWORD *)(v3 + 88);
      v13 = Ulong & 0xC200 | 0xE000000;
      v16 = v13;
      if ( *(_BYTE *)(*(_QWORD *)(v12 + 8) + 1001LL) )
      {
        Register_WriteSecureMmio(v12, v10, 2LL, &v16);
      }
      else
      {
        *v10 = v13;
        _InterlockedOr(v15, 0);
      }
      RootHub_ReleaseReadModifyWriteLock(v4, v5);
    }
  }
  return 0LL;
}
