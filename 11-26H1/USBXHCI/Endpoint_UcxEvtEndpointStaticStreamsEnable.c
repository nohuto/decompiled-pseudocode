/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140035FF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     Endpoint_GetDequeuePointer @ 0x14001E7D4 (Endpoint_GetDequeuePointer.c)
 *     TR_Enable_Internal @ 0x14001F0B0 (TR_Enable_Internal.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x140036438 (UsbDevice_ReconfigureEndpoint.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036890 (XilEndpoint_AllocateStreamContextArray.c)
 *     TR_Disable_Internal @ 0x14003D720 (TR_Disable_Internal.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x14003D99C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     WPP_RECORDER_SF_dddd @ 0x140045840 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x140047A64 (XilEndpoint_FreeStreamContextArray.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int *v8; // r12
  _DWORD *v9; // rdi
  __int64 v10; // r14
  __int64 *v11; // r13
  int v12; // edx
  __int64 v13; // r13
  int StreamContextArray; // edi
  unsigned int j; // r14d
  int v16; // edx
  __int64 DequeuePointer; // rax
  __int64 v18; // r8
  unsigned int i; // r14d
  __int64 v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-41h]
  __int64 v23; // [rsp+30h] [rbp-39h]
  __int64 v24; // [rsp+38h] [rbp-31h]
  int v25; // [rsp+50h] [rbp-19h] BYREF
  int v26; // [rsp+54h] [rbp-15h] BYREF
  __int64 v27; // [rsp+58h] [rbp-11h]
  _OWORD v28[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v29; // [rsp+80h] [rbp+17h]

  v27 = a3;
  v26 = 0;
  v25 = 0;
  v29 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v28[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v28[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a3,
    v28);
  v5 = *((_QWORD *)&v28[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006B1A0);
  v7 = *(_QWORD *)v6;
  v8 = (unsigned int *)(v6 + 8);
  v9 = (_DWORD *)(*(_QWORD *)v6 + 152LL);
  v10 = *(_QWORD *)v6 + 16LL;
  v11 = (__int64 *)(*(_QWORD *)v6 + 80LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd(
      *v11,
      4u,
      0xDu,
      0x6Eu,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)v10 + 143LL),
      *v9,
      *v8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01033 + 1304))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    0LL,
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, int *, int *))(WdfFunctions_01033 + 1224))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    &v26,
    &v25);
  v12 = v25;
  if ( v26 || v25 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_dddd(
        *v11,
        v12,
        13,
        111,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)v10 + 143LL),
        *v9,
        v26,
        v25);
    }
    goto LABEL_28;
  }
  if ( !*v8 || *v8 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 116LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = *v8;
      LODWORD(v23) = *v9;
      LODWORD(v22) = *(unsigned __int8 *)(*(_QWORD *)v10 + 143LL);
      WPP_RECORDER_SF_ddd(
        *v11,
        2u,
        0xDu,
        0x70u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v22,
        v23,
        v24);
    }
LABEL_28:
    v13 = v27;
    StreamContextArray = -1073741811;
    *(_DWORD *)(v5 + 4) = -2147482880;
    goto LABEL_29;
  }
  v13 = v27;
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               v27,
               off_14006AE88) = v6;
  StreamContextArray = XilEndpoint_AllocateStreamContextArray(v6);
  if ( StreamContextArray < 0 )
  {
LABEL_14:
    *(_DWORD *)(v5 + 4) = -1073737728;
LABEL_29:
    for ( i = 1; i <= *(_DWORD *)(v6 + 8); ++i )
    {
      v21 = i - 1;
      LOBYTE(v21) = 1;
      TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + v6 + 48), v21);
    }
    *(_QWORD *)(v7 + 144) = *(_QWORD *)(v7 + 136);
    XilEndpoint_FreeStreamContextArray(v6);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1232))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL));
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v13,
             (unsigned int)StreamContextArray);
  }
  *(_QWORD *)(v7 + 144) = v6;
  for ( j = 1; j <= *v8; ++j )
  {
    StreamContextArray = TR_Enable_Internal(*(_QWORD **)(104LL * (j - 1) + *(_QWORD *)(v7 + 144) + 48));
    if ( StreamContextArray < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(v7 + 80),
          v16,
          13,
          113,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 143LL),
          *(_DWORD *)(v7 + 152),
          j,
          StreamContextArray);
      }
      goto LABEL_14;
    }
    DequeuePointer = Endpoint_GetDequeuePointer(v7, j);
    v18 = 2LL * j;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 144) + 32LL) + 16LL) + 8 * v18) = DequeuePointer;
  }
  StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(v6);
  if ( StreamContextArray < 0 )
  {
    *(_DWORD *)(v5 + 4) = -2147481600;
    goto LABEL_29;
  }
  return UsbDevice_ReconfigureEndpoint(*(_QWORD *)(v7 + 16), v7, Endpoint_EndpointStaticStreamsEnableCompletion, v13);
}
