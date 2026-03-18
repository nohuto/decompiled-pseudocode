/*
 * XREFs of HUBACPI_EvaluateDSD @ 0x14008DEBC
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAB4 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x14008DA78 (HUBACPI_EvalAcpiMethodEx.c)
 */

__int64 __fastcall HUBACPI_EvaluateDSD(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 a6,
        __int64 a7)
{
  int v8; // eax
  NTSTATUS v9; // esi
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // r8d
  unsigned int v16; // r14d
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 v25; // si
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  __int128 v28; // [rsp+58h] [rbp-21h] BYREF
  __int128 v29; // [rsp+68h] [rbp-11h]
  __int128 v30; // [rsp+78h] [rbp-1h]
  __int64 v31; // [rsp+88h] [rbp+Fh]

  *(_QWORD *)&DestinationString.Length = 0LL;
  LODWORD(v31) = 0;
  v28 = 0LL;
  DestinationString.Buffer = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v8 = HUBACPI_EvalAcpiMethodEx(a1, a2, 1146307679, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1 + 2536),
        2u,
        3u,
        0x1Du,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        a6,
        v8);
    goto LABEL_47;
  }
  v9 = -1073741823;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
          WdfDriverGlobals,
          a5,
          0LL);
  v12 = v10;
  if ( !*(_DWORD *)(v10 + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v13 = *(_QWORD *)(a1 + 2536);
    v14 = 30;
    v15 = 6;
    goto LABEL_8;
  }
  v16 = 0;
  v17 = v10 + 12;
  v18 = 4LL;
  while ( 1 )
  {
    if ( (v16 & 1) == 0
      && *(_DWORD *)v17 == 1048578
      && RtlCompareMemory((const void *)(v17 + 4), &ACPI_DEVICE_PROPERTIES_DSD_GUID, 0x10uLL) == 16 )
    {
      v19 = 4LL;
      if ( *(_WORD *)(v17 + 2) >= 4u )
        v19 = *(unsigned __int16 *)(v17 + 2);
      v20 = v17 + v19 + *(unsigned __int16 *)(v19 + v17 + 6) + 4LL;
      if ( *(_WORD *)(v19 + v17 + 4) == 3 )
        break;
    }
    v21 = *(unsigned __int16 *)(v17 + 2);
    if ( (unsigned __int16)v21 < 4u )
      v21 = 4LL;
    ++v16;
    v17 += v21 + 4;
    if ( v16 >= *(_DWORD *)(v12 + 8) )
      goto LABEL_47;
  }
  v22 = v19 + v17 + 8;
  if ( v22 + 8 >= v20 )
    goto LABEL_47;
  while ( 1 )
  {
    v23 = *(unsigned __int16 *)(v22 + 2);
    if ( *(_WORD *)v22 != 3 || (unsigned __int16)v23 < 0x10u )
    {
      if ( (unsigned __int16)v23 < 4u )
        v23 = 4LL;
      goto LABEL_30;
    }
    if ( *(_WORD *)(v22 + 4) == 1 && *(_WORD *)(v22 + 6) == 20 )
      break;
LABEL_30:
    v24 = v22 + v23;
    v22 = v24 + 4;
    if ( v24 + 12 >= v20 )
      goto LABEL_47;
  }
  if ( strncmp((const char *)(v22 + 8), "usb4-host-interface", 0x13uLL) )
  {
    v23 = *(unsigned __int16 *)(v22 + 2);
    if ( (unsigned __int16)v23 < 4u )
      v23 = 4LL;
    goto LABEL_30;
  }
  if ( *(_WORD *)(v22 + 6) >= 4u )
    v18 = *(unsigned __int16 *)(v22 + 6);
  if ( v22 + v18 + 16 <= v20 )
  {
    if ( *(_WORD *)(v18 + v22 + 8) == 1 )
    {
      v25 = 2 * *(_WORD *)(v18 + v22 + 10);
      DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v25, 1882409045LL);
      if ( DestinationString.Buffer )
      {
        DestinationString.MaximumLength = v25;
        v9 = RtlUnicodeStringPrintf(&DestinationString, L"%S", v18 + v22 + 12);
        if ( v9 >= 0 )
        {
          v31 = 0LL;
          *(_QWORD *)&v29 = 0LL;
          *((_QWORD *)&v29 + 1) = 0x100000001LL;
          v30 = 0LL;
          *(_QWORD *)&v30 = *(_QWORD *)(a1 + 16);
          v28 = 0LL;
          LODWORD(v28) = 56;
          v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _UNICODE_STRING *, __int128 *, __int64))(WdfFunctions_01015 + 2464))(
                 WdfDriverGlobals,
                 &DestinationString,
                 &v28,
                 a7);
        }
        goto LABEL_47;
      }
      v9 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v14 = 33;
      v15 = 3;
    }
    else
    {
      v9 = -1072431096;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v14 = 32;
LABEL_37:
      v15 = 6;
    }
    v13 = *(_QWORD *)(a1 + 2536);
LABEL_8:
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(v13, v11, v15, v14, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    goto LABEL_47;
  }
  v9 = -1072431099;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 31;
    goto LABEL_37;
  }
LABEL_47:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x70334855u);
  return (unsigned int)v9;
}
