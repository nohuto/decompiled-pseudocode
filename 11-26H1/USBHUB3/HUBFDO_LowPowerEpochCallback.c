/*
 * XREFs of HUBFDO_LowPowerEpochCallback @ 0x14000EAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x140088C3C (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

__int64 __fastcall HUBFDO_LowPowerEpochCallback(LPCGUID SettingGuid, int *Value, __int64 ValueLength, char *Context)
{
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v9; // [rsp+58h] [rbp+10h] BYREF

  if ( Context )
  {
    v5 = *Value;
    if ( *((_DWORD *)Context + 698) != *Value )
    {
      *((_DWORD *)Context + 698) = v5;
      if ( v5 == 1 )
      {
        if ( (*((_DWORD *)Context + 10) & 0x8000000) != 0
          && ((*((_DWORD *)Context + 11) & 0x100) != 0 || *((char **)Context + 300) == Context + 2400) )
        {
          v9 = 0;
          v6 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v9, Value, ValueLength);
          if ( v6 >= 0 )
          {
            if ( v9 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v7) = 4;
                WPP_RECORDER_SF_(
                  *((_QWORD *)Context + 317),
                  v7,
                  3,
                  119,
                  (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, POWER_SETTING_CALLBACK *, __int64, const char *))(WdfFunctions_01015 + 3512))(
                WdfDriverGlobals,
                *((_QWORD *)Context + 2),
                HUBFDO_LowPowerEpochCallback,
                7437LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
              if ( *((_QWORD *)Context + 331) )
                SleepstudyHelper_ComponentInactive();
              Context[2796] = 1;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v7) = 3;
              WPP_RECORDER_SF_(
                *((_QWORD *)Context + 317),
                v7,
                3,
                118,
                (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 317),
              3u,
              3u,
              0x75u,
              (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
              v6);
          }
        }
      }
      else if ( !v5 && Context[2796] == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(Value) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 317),
            (_DWORD)Value,
            3,
            120,
            (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          0LL,
          HUBFDO_LowPowerEpochCallback,
          7454,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( *((_QWORD *)Context + 331) )
          SleepstudyHelper_ComponentActive();
        Context[2796] = 0;
      }
    }
  }
  return 0LL;
}
