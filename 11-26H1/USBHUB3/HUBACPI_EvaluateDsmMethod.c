/*
 * XREFs of HUBACPI_EvaluateDsmMethod @ 0x14008E290
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAB4 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     memcpy_s @ 0x140001510 (memcpy_s.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x140040E24 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBACPI_EvaluateDsmMethod(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int16 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rax
  int v10; // eax
  int v11; // edi
  unsigned __int16 v12; // r9
  __int64 v13; // rbx
  char *v14; // rcx
  __int64 v15; // rax
  size_t v16; // rdx
  char v17; // r8
  char *v18; // rax
  size_t v19; // rdx
  const char *v20; // rdx
  char v21; // al
  char *v22; // rax
  __int64 v23; // rsi
  _WORD *v24; // rdi
  char *v25; // rcx
  __int64 v26; // rcx
  int v27; // edx
  int v28; // eax
  _DWORD *v29; // rax
  int v30; // edx
  __int64 v32; // [rsp+30h] [rbp-79h]
  __int64 v33; // [rsp+38h] [rbp-71h]
  void *v34; // [rsp+58h] [rbp-51h] BYREF
  __int64 v35; // [rsp+60h] [rbp-49h] BYREF
  __int64 v36; // [rsp+68h] [rbp-41h] BYREF
  __int128 v37; // [rsp+70h] [rbp-39h] BYREF
  __int64 v38; // [rsp+80h] [rbp-29h]
  __int64 v39; // [rsp+88h] [rbp-21h]
  __int128 v40; // [rsp+90h] [rbp-19h]
  __int64 v41; // [rsp+A0h] [rbp-9h]
  __int128 v42; // [rsp+A8h] [rbp-1h] BYREF

  v41 = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v38 = 0LL;
  v40 = v7;
  v37 = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  v35 = 0LL;
  LODWORD(v37) = 56;
  v39 = 0x100000001LL;
  v34 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v37,
          (unsigned int)ExDefaultNonPagedPoolType,
          1748191317LL,
          312LL,
          &v36,
          &v34);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v12 = 14;
    goto LABEL_4;
  }
  v13 = 256LL;
  if ( a2 && (unsigned __int64)*a2 + 6 > 0x100 )
  {
    v11 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), 2, 3, 15, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    goto LABEL_50;
  }
  memset(v34, 0, 0x138uLL);
  *(_DWORD *)v34 = 1181312321;
  *((_DWORD *)v34 + 65) = 276;
  *((_DWORD *)v34 + 66) = 4;
  v14 = (char *)v34 + 4;
  if ( a2 )
  {
    v15 = *a2;
    v16 = *((_QWORD *)a2 + 1) - (_QWORD)v14;
    do
    {
      if ( !v15 )
        break;
      v17 = v14[v16];
      if ( !v17 )
        break;
      *v14 = v17;
      --v15;
      ++v14;
      --v13;
    }
    while ( v13 );
    v18 = v14 - 1;
    if ( v13 )
      v18 = v14;
    *v18 = 0;
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v34 + 4, v16, ".", 1uLL);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v34 + 4, v19, "_DSM", 4uLL);
  }
  else
  {
    v20 = (const char *)("_DSM" - v14);
    do
    {
      if ( v13 == 252 )
        break;
      v21 = v20[(_QWORD)v14];
      if ( !v21 )
        break;
      *v14++ = v21;
      --v13;
    }
    while ( v13 );
    v22 = v14 - 1;
    if ( v13 )
      v22 = v14;
    *v22 = 0;
  }
  v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 16));
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          0LL,
          v23,
          &v35);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v24 = v34;
    v25 = (char *)v34 + 272;
    *((_DWORD *)v34 + 67) = 1048578;
    memcpy_s(v25, 0x10uLL, &GUID_USB_ACPI_DSM, 0x10uLL);
    v26 = 4LL;
    if ( v24[135] >= 4u )
      v26 = (unsigned __int16)v24[135];
    *(_QWORD *)((char *)v24 + v26 + 272) = 0x40000LL;
    *(_DWORD *)((char *)v24 + v26 + 280) = 0x40000;
    *(_DWORD *)((char *)v24 + v26 + 284) = a5;
    *(_DWORD *)((char *)v24 + v26 + 288) = 3;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
            WdfDriverGlobals,
            v23,
            v35,
            3325976LL,
            v36,
            0LL,
            a7,
            0LL);
    if ( v11 >= 0 )
    {
      *(_QWORD *)&v42 = 0x200000010LL;
      if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015
                                                                                                 + 2024))(
              WdfDriverGlobals,
              v35,
              v23,
              &v42)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v27, 3, 18, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
      }
      v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v35);
      v11 = v28;
      if ( v28 >= 0 )
      {
        v29 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                          WdfDriverGlobals,
                          a7,
                          0LL);
        if ( *v29 != 1114596673 || !v29[2] )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(a1 + 2536),
              v30,
              3,
              21,
              (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
          }
          v11 = -1072431089;
        }
        goto LABEL_50;
      }
      if ( v28 == -1073741772 || v28 == -1073741810 )
        goto LABEL_50;
      if ( a6 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v33) = v28;
          LODWORD(v32) = a6;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1 + 2536),
            2u,
            3u,
            0x13u,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
            v32,
            v33);
        }
        goto LABEL_50;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_50;
      v12 = 20;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_50;
      v12 = 17;
    }
    LODWORD(v32) = v11;
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 16;
LABEL_4:
    LODWORD(v32) = v10;
LABEL_5:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2536),
      2u,
      3u,
      v12,
      (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      v32);
  }
LABEL_50:
  if ( v35 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v36 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v11;
}
