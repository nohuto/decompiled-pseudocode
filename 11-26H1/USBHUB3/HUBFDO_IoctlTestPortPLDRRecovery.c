/*
 * XREFs of HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007F8D0
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C880 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x140084364 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x1400874BC (HUBMISC_VerifyCallerIsAdmin.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1400884AC (HUBREG_IsPortPLDRCapable.c)
 */

__int64 __fastcall HUBFDO_IoctlTestPortPLDRRecovery(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  int v19; // [rsp+28h] [rbp-28h]
  int v20; // [rsp+28h] [rbp-28h]
  int v21; // [rsp+28h] [rbp-28h]
  int v22; // [rsp+28h] [rbp-28h]
  int v23; // [rsp+28h] [rbp-28h]
  int v24; // [rsp+28h] [rbp-28h]
  int v25; // [rsp+30h] [rbp-20h]
  int *v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-8h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+38h] BYREF

  v26 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v5,
         off_14006D270);
  if ( (int)HUBMISC_VerifyCallerIsAdmin(*(_QWORD *)(v6 + 2536)) >= 0 )
  {
    ReturnLength = 0;
    SystemInformation = 8LL;
    if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) >= 0
      && (SystemInformation & 0x200000000LL) != 0 )
    {
      if ( a3 >= 4 )
      {
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, int **, _QWORD))(WdfFunctions_01015
                                                                                               + 2152))(
                WdfDriverGlobals,
                a2,
                4LL,
                &v26,
                0LL);
        v8 = v10;
        if ( v10 >= 0 )
        {
          v11 = *(_QWORD *)(v6 + 2376);
          v12 = v11 - 248;
          if ( v6 + 2376 == v11 )
            goto LABEL_17;
          while ( *(unsigned __int16 *)(v12 + 200) != *v26 )
          {
            v13 = *(_QWORD *)(v12 + 248);
            v12 = v13 - 248;
            if ( v6 + 2376 == v13 )
              goto LABEL_17;
          }
          if ( !v12 )
          {
LABEL_17:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v20 = *v26;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v6 + 2536),
                2u,
                3u,
                0x54u,
                (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                v20);
            }
            v8 = -1073741811;
          }
          else
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
              WdfDriverGlobals,
              *(_QWORD *)(v6 + 16));
            v14 = *v26;
            v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v6 + 16),
                    0LL,
                    1LL);
            if ( !v15 )
              goto LABEL_38;
            do
            {
              if ( v15 != *(_QWORD *)(v6 + 2672)
                && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                           WdfDriverGlobals,
                                           v15,
                                           off_14006D1D0)
                                       + 48) == v14 )
              {
                break;
              }
              v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v6 + 16),
                      v15,
                      1LL);
            }
            while ( v15 );
            if ( v15 )
            {
              v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v15,
                      off_14006D1D0);
              v17 = v16;
              if ( (*(_DWORD *)(v6 + 40) & 0x40000) != 0 && (*(_DWORD *)(*(_QWORD *)(v16 + 24) + 1640LL) & 0x20) != 0 )
              {
                if ( (unsigned __int8)HUBREG_IsPortPLDRCapable(v6, *(unsigned __int16 *)v26) )
                {
                  *(_BYTE *)(v12 + 1472) = 1;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v25 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL) + 200LL);
                    v22 = *(_DWORD *)(v6 + 96);
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(v6 + 2536),
                      4u,
                      3u,
                      0x58u,
                      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                      v22,
                      v25);
                  }
                  v8 = HUBPDO_InvokePortPLDRRecovery(v15, v17);
                }
                else
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v21 = *v26;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(v6 + 2536),
                      2u,
                      3u,
                      0x57u,
                      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                      v21);
                  }
                  v8 = -1073741637;
                }
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v23 = *v26;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(v6 + 2536),
                    2u,
                    3u,
                    0x56u,
                    (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                    v23);
                }
                v8 = -1073741808;
              }
            }
            else
            {
LABEL_38:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v24 = *v26;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(v6 + 2536),
                  2u,
                  3u,
                  0x55u,
                  (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                  v24);
              }
              v8 = -1073741811;
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
              WdfDriverGlobals,
              *(_QWORD *)(v6 + 16));
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = v10;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v6 + 2536),
            2u,
            3u,
            0x53u,
            (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
            v19);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v6 + 2536), v9, 3, 82, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
        }
        v8 = -1073741820;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v6 + 2536), v9, 3, 81, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
      }
      v8 = -1073741823;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 2536), v7, 3, 80, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
    }
    v8 = -1073741790;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v8);
}
