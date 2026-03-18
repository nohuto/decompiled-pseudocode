/*
 * XREFs of HUBACPI_EnumChildren @ 0x14008D660
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAB4 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBACPI_EnumChildren(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v7; // rdi
  int v8; // edx
  _DWORD *v9; // rax
  int v10; // edx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v14; // [rsp+28h] [rbp-61h]
  __int64 v15; // [rsp+50h] [rbp-39h] BYREF
  __int64 v16; // [rsp+58h] [rbp-31h] BYREF
  __int64 v17; // [rsp+60h] [rbp-29h] BYREF
  __int64 v18; // [rsp+68h] [rbp-21h] BYREF
  __int128 v19; // [rsp+70h] [rbp-19h] BYREF
  __int128 v20; // [rsp+80h] [rbp-9h]
  __int128 v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+17h]
  __int128 v23; // [rsp+A8h] [rbp+1Fh] BYREF

  v22 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v21 = *(unsigned __int64 *)(a1 + 16);
  v19 = 0LL;
  v15 = 0LL;
  v23 = 0LL;
  LODWORD(v19) = 56;
  *((_QWORD *)&v20 + 1) = 0x100000001LL;
  v16 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v19,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         16LL,
         &v18,
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    v6 = 34;
    goto LABEL_4;
  }
  *(_OWORD *)v16 = 0LL;
  *(_DWORD *)v16 = 1214866753;
  *(_DWORD *)(v16 + 4) = 1;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v7,
         &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 35;
LABEL_4:
      LODWORD(v14) = v4;
LABEL_5:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        3u,
        v6,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v14);
      goto LABEL_36;
    }
    goto LABEL_36;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
         WdfDriverGlobals,
         v7,
         v15,
         3325984LL,
         v18,
         0LL,
         a2,
         0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_QWORD *)&v23 = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015
                                                                                               + 2024))(
            WdfDriverGlobals,
            v15,
            v7,
            &v23)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v8, 3, 37, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    }
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v15);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2147483643 )
    {
      if ( v5 != -1073741637 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 38;
        LODWORD(v14) = v5;
        goto LABEL_5;
      }
      goto LABEL_36;
    }
    v9 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     a2,
                     &v17);
    if ( v17 == 20 )
    {
      if ( v5 != -2147483643 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v14) = v5;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2536),
            2u,
            3u,
            0x27u,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
            v14);
        }
        goto LABEL_35;
      }
      if ( *v9 == 1198089537 && v9[1] >= 0x14u )
        goto LABEL_36;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 40;
LABEL_34:
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v10, 3, v11, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
      }
    }
    else
    {
      if ( v5 < 0 )
        goto LABEL_36;
      if ( *v9 == 1198089537 )
      {
        if ( v9[1] )
        {
          v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2208))(
                  WdfDriverGlobals,
                  v15);
          if ( v12 == v17 )
            goto LABEL_36;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 41;
        goto LABEL_34;
      }
    }
LABEL_35:
    v5 = -1072431089;
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 36;
    goto LABEL_4;
  }
LABEL_36:
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v18 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v5;
}
