/*
 * XREFs of Controller_RetrieveAcpiData @ 0x1400771D4
 * Callers:
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x140075EC0 (Controller_PopulateAcpiDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrieveAcpiData(__int64 a1, int a2, char *a3)
{
  __int64 v5; // r15
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _UNKNOWN **v8; // rdx
  unsigned int v9; // ebx
  __int64 Pool2; // rax
  unsigned __int16 *v11; // rdi
  _UNKNOWN **v12; // rdx
  int v13; // eax
  _UNKNOWN **v14; // rdx
  __int64 v16; // [rsp+50h] [rbp-9h] BYREF
  _OWORD *v17; // [rsp+58h] [rbp-1h]
  __int64 v18; // [rsp+60h] [rbp+7h]
  _OWORD v19[2]; // [rsp+68h] [rbp+Fh] BYREF

  HIDWORD(v16) = 0;
  memset(v19, 0, sizeof(v19));
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 336))(WdfDriverGlobals, a1);
  v16 = 1LL;
  v18 = 32LL;
  v17 = v19;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01033 + 1488))(
         WdfDriverGlobals,
         v5,
         0LL,
         3325992LL,
         0LL,
         &v16,
         0LL,
         0LL);
  v7 = v6;
  if ( v6 == -2147483643 )
  {
    v9 = WORD2(v19[0]);
    Pool2 = ExAllocatePool2(64LL, WORD2(v19[0]), 1229146200LL);
    v11 = (unsigned __int16 *)Pool2;
    if ( Pool2 )
    {
      v16 = 1LL;
      v17 = (_OWORD *)Pool2;
      v18 = v9;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01033 + 1488))(
              WdfDriverGlobals,
              v5,
              0LL,
              3325992LL,
              0LL,
              &v16,
              0LL,
              0LL);
      v7 = v13;
      if ( v13 >= 0 )
      {
        Controller_PopulateAcpiDeviceInformation(v11, a3);
      }
      else
      {
        v14 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_d(a2, (_DWORD)v14, 4, 148, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v13);
        }
      }
      if ( v11 != (unsigned __int16 *)v19 )
        ExFreePoolWithTag(v11, 0x49434858u);
    }
    else
    {
      v12 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_D(a2, (_DWORD)v12, 4, 147, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v9);
      }
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    v8 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d(a2, (_DWORD)v8, 4, 146, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v6);
    }
  }
  return v7;
}
