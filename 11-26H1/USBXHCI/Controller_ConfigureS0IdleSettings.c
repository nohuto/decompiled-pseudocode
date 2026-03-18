/*
 * XREFs of Controller_ConfigureS0IdleSettings @ 0x140073BAC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140078A10 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_IsRegKeySetToDisableS0Idle @ 0x140041BF0 (Controller_IsRegKeySetToDisableS0Idle.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 *     Controller_ExecuteDSM @ 0x140080FE4 (Controller_ExecuteDSM.c)
 *     Controller_UpdateIdleTimeout @ 0x140081DDC (Controller_UpdateIdleTimeout.c)
 */

char __fastcall Controller_ConfigureS0IdleSettings(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v4; // rsi
  int v5; // r9d
  int v6; // edx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-99h]
  __int64 v13; // [rsp+28h] [rbp-91h]
  __int64 v14; // [rsp+30h] [rbp-89h]
  _QWORD v15[12]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v16[10]; // [rsp+A0h] [rbp-19h] BYREF
  int v17; // [rsp+120h] [rbp+67h] BYREF

  v17 = 0;
  memset(v15, 0, 0x54uLL);
  LOBYTE(v2) = (unsigned __int8)memset(v16, 0, 0x48uLL);
  if ( (*(_QWORD *)(a1 + 736) & 0x100000LL) != 0 )
  {
    v4 = (_DWORD *)(a1 + 864);
    *(_DWORD *)(a1 + 864) = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v2;
    v5 = 22;
  }
  else
  {
    LOBYTE(v2) = Controller_IsRegKeySetToDisableS0Idle(a1);
    if ( !(_BYTE)v2 )
    {
      if ( _bittest64((const signed __int64 *)(a1 + 736), 0x3Au) )
      {
        v12 = 0LL;
        Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 3LL);
      }
      LOWORD(v12) = 72;
      v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD *, __int64, __int16, _QWORD))(WdfFunctions_01033 + 1048))(
             WdfDriverGlobals,
             *(_QWORD *)a1,
             &GUID_D3COLD_SUPPORT_INTERFACE,
             v16,
             v12,
             1,
             0LL);
      if ( v2 >= 0 )
      {
        if ( v16[5] )
        {
          v7 = ((__int64 (__fastcall *)(_QWORD, __int64, int *))v16[5])(v16[1], 1LL, &v17);
          if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 3;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 72),
              v8,
              4,
              25,
              (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
              v7);
          }
        }
        ((void (__fastcall *)(_QWORD))v16[3])(v16[1]);
        v9 = (_DWORD *)(a1 + 864);
        if ( v17 > 1 )
        {
          *v9 = 0;
          LOBYTE(v2) = Controller_UpdateIdleTimeout(a1, 10000LL);
          v4 = (_DWORD *)(a1 + 864);
          if ( !*v9 )
          {
            memset(v15, 0, 0x58uLL);
            if ( WdfClientVersionHigherThanFramework )
              LODWORD(v15[0]) = (unsigned int)WdfStructureCount <= 0x2A ? -1 : *(_DWORD *)(WdfStructures + 336);
            else
              LODWORD(v15[0]) = 88;
            v10 = *(_QWORD *)a1;
            v15[1] = Controller_EvtPostPoFxRegisterDevice;
            v15[2] = Controller_EvtPrePoFxUnregisterDevice;
            LODWORD(v15[10]) = 0;
            v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01033 + 3400))(
                   WdfDriverGlobals,
                   v10,
                   v15);
            v4 = (_DWORD *)(a1 + 864);
            if ( v2 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v2;
              LOBYTE(v6) = 2;
              LOBYTE(v2) = WPP_RECORDER_SF_d(
                             *(_QWORD *)(a1 + 72),
                             v6,
                             4,
                             27,
                             (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                             v2);
            }
          }
        }
        else
        {
          *v9 = 2;
          LOBYTE(v2) = Controller_HwVerifierBreakIfEnabled(
                         a1,
                         0,
                         0,
                         0x4000000LL,
                         "Wake from Dx in S0 is missing (D3 Cold Interface)",
                         0LL,
                         0LL);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v2;
          LODWORD(v14) = 1;
          LODWORD(v13) = v17;
          LOBYTE(v2) = WPP_RECORDER_SF_DD(
                         *(_QWORD *)(a1 + 72),
                         2u,
                         4u,
                         0x1Au,
                         (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                         v13,
                         v14);
          v4 = (_DWORD *)(a1 + 864);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          LOBYTE(v2) = WPP_RECORDER_SF_d(
                         *(_QWORD *)(a1 + 72),
                         v6,
                         4,
                         24,
                         (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                         v2);
        }
        v4 = (_DWORD *)(a1 + 864);
        *(_DWORD *)(a1 + 864) = 2;
      }
      goto LABEL_30;
    }
    v4 = (_DWORD *)(a1 + 864);
    *(_DWORD *)(a1 + 864) = 3;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v2;
    v5 = 23;
  }
  LOBYTE(v3) = 3;
  LOBYTE(v2) = WPP_RECORDER_SF_(
                 *(_QWORD *)(a1 + 72),
                 v3,
                 4,
                 v5,
                 (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    LOBYTE(v2) = WPP_RECORDER_SF_D(
                   *(_QWORD *)(a1 + 72),
                   v6,
                   4,
                   28,
                   (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                   *v4);
  }
  return v2;
}
