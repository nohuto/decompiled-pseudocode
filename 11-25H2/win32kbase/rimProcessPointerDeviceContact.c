/*
 * XREFs of rimProcessPointerDeviceContact @ 0x140184FF0
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimPopulateContactFrameData @ 0x140076D40 (rimPopulateContactFrameData.c)
 *     RIMAbIsDeviceArbitrationEnabled @ 0x1400C4600 (RIMAbIsDeviceArbitrationEnabled.c)
 *     RIMCmIsContactSuppressed @ 0x1400D976C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x140105AF8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x14010B28C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011853C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMCmShouldDeliverSuppressedContact @ 0x140123210 (RIMCmShouldDeliverSuppressedContact.c)
 *     RIMAddToActiveDevices @ 0x14017F910 (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x1401842B0 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x140184CA8 (rimFindOrCreateActiveContact.c)
 *     RIMCmDeactivateContact @ 0x14018576C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x140185984 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmResetContactFrameState @ 0x1401859D0 (RIMCmResetContactFrameState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmMarkSuppressedContactForDelivery @ 0x1401F56F0 (RIMCmMarkSuppressedContactForDelivery.c)
 *     RIMCmShouldDeliverSuppressedContactEndState @ 0x1401F5778 (RIMCmShouldDeliverSuppressedContactEndState.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        struct RawInputManagerObject *a1,
        __int64 a2,
        CHAR *a3,
        ULONG a4,
        USHORT a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rax
  bool v9; // bl
  __int64 v10; // r13
  struct _HIDP_PREPARSED_DATA *v13; // r14
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  CHAR *v19; // rsi
  USHORT v20; // bx
  CHAR *v21; // r8
  __int64 v22; // rdx
  __int64 active; // r14
  bool v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // si
  int v30; // eax
  __int64 v31; // rcx
  char v32; // r15
  char v33; // di
  bool v34; // si
  int v35; // ebx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // di
  bool v40; // si
  int v41; // ebx
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  char v45; // bl
  bool v46; // di
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  int v50; // ebx
  PalmTelemetry *v51; // rcx
  __int64 v52; // rdx
  __int64 QuadPart; // rcx
  int IsContactSuppressed; // r9d
  __int64 v55; // rcx
  int v56; // ebx
  char v57; // r12
  __int64 v58; // rax
  int v59; // ecx
  __int64 result; // rax
  char v61; // bl
  bool v62; // di
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  int v66; // [rsp+28h] [rbp-71h]
  char v67; // [rsp+70h] [rbp-29h]
  int v68; // [rsp+74h] [rbp-25h] BYREF
  int v69; // [rsp+78h] [rbp-21h] BYREF
  int v70; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v71; // [rsp+80h] [rbp-19h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-11h]
  __int64 v73[8]; // [rsp+90h] [rbp-9h] BYREF
  int v74; // [rsp+E8h] [rbp+4Fh] BYREF
  CHAR *v75; // [rsp+F0h] [rbp+57h]

  v75 = a3;
  v8 = *(_QWORD *)(a2 + 440);
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 456);
  v74 = 0;
  v71 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v70 = 0;
  v69 = 0;
  v68 = 0;
  v73[0] = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
    v9 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(0LL, WPP_GLOBAL_Control);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      20,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
  }
  v19 = v75;
  v20 = a5;
  v21 = v75;
  *a7 = 0;
  *a8 = 0;
  active = rimFindOrCreateActiveContact(v10, v13, v21, a4, v20, &v74);
  if ( !active )
  {
    v24 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 19336),
        4,
        1,
        21,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
    v29 = 1;
    goto LABEL_87;
  }
  if ( v74 )
  {
    if ( *(_DWORD *)(v10 + 1016) == 1 )
      RIMAddToActiveDevices(a1, v10);
  }
  else if ( (*(_DWORD *)(active + 2364) & 2) != 0 )
  {
    v39 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = *(_DWORD *)active;
      v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      LOBYTE(v43) = v40;
      LOBYTE(v44) = v39;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v43,
        *(_QWORD *)(v42 + 19336),
        4,
        1,
        22,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
        v41);
    }
    v29 = 1;
LABEL_29:
    if ( !v74 )
    {
      RIMCmResetContactFrameState(active);
      goto LABEL_87;
    }
    goto LABEL_30;
  }
  v30 = rimPopulateContactFrameData((__int64)a1, a2, v19, a4, v20, a6, active, a7, &v71, &v70, &v69, &v68, v73);
  v32 = 0;
  v67 = v30;
  v29 = v30;
  if ( v30 < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v31 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v31 & 1) == 0)
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v33 = 0;
    }
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = *(_DWORD *)active;
      v36 = W32GetUserSessionState(v31, WPP_GLOBAL_Control);
      LOBYTE(v37) = v34;
      LOBYTE(v38) = v33;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(v36 + 19336),
        4,
        1,
        23,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
        v35);
    }
    v29 = v67;
    goto LABEL_29;
  }
  if ( *a7 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v45 = 0;
    }
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      LOBYTE(v48) = v46;
      LOBYTE(v49) = v45;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v48,
        *(_QWORD *)(v47 + 19336),
        4,
        1,
        24,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
    goto LABEL_82;
  }
  v50 = v74;
  if ( v74 )
  {
    *(_DWORD *)(active + 64) = *(_DWORD *)(active + 2496);
    *(_QWORD *)(active + 72) = *(_QWORD *)(active + 2512);
    *(_QWORD *)(active + 80) = *(_QWORD *)(active + 2472);
  }
  v51 = (PalmTelemetry *)*((_QWORD *)a1 + 131);
  if ( v51 )
    PalmTelemetry::Update(v51, (struct tagHID_POINTER_DEVICE_INFO *)v10, (struct tagHPD_CONTACT *)active, v50);
  rimApplyPointerDevicePolicies(v10, active, v50, v71, v70, v69, v68, v73[0]);
  if ( (*(_DWORD *)(active + 32) & 0x20) != 0 )
  {
    if ( (*((_DWORD *)a1 + 21) & 4) == 0 )
    {
      v71 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 402LL);
    }
    QuadPart = PerformanceCounter.QuadPart;
    *((LARGE_INTEGER *)a1 + 100) = PerformanceCounter;
  }
  else
  {
    QuadPart = PerformanceCounter.QuadPart;
  }
  *(_QWORD *)(active + 88) = *(_QWORD *)(active + 2472);
  if ( !*(_QWORD *)(active + 56) && (*(_DWORD *)(active + 2684) & 4) == 0 && (*(_DWORD *)(active + 2444) & 4) != 0 )
    *(_QWORD *)(active + 56) = QuadPart;
  if ( !RIMAbIsDeviceArbitrationEnabled(QuadPart, v52) && (*(_DWORD *)(active + 8) & 1) != 0 )
  {
    v71 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 426LL);
  }
  IsContactSuppressed = RIMCmIsContactSuppressed(active);
  if ( IsContactSuppressed
    && (RIMCmShouldDeliverSuppressedContact(v10, active)
     || (unsigned int)RIMCmShouldDeliverSuppressedContactEndState(v55, v22)) )
  {
    v56 = 1;
    goto LABEL_70;
  }
  v56 = 0;
  if ( !IsContactSuppressed
    || (unsigned int)RIMCmIsContactDeliveringPointerData(active)
    || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(active) )
  {
LABEL_70:
    *(_DWORD *)(active + 2364) |= 1u;
    if ( v56 )
      RIMCmMarkSuppressedContactForDelivery(active);
    goto LABEL_82;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v32 = 1;
  }
  v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v58 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
    WPP_RECORDER_AND_TRACE_SF_dDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v57,
      *(_QWORD *)(v58 + 19336),
      4u,
      v66,
      0x19u,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    v29 = v67;
  }
LABEL_82:
  *a8 = v74;
  if ( *a7 )
  {
LABEL_30:
    RIMCmDeactivateContact(v10, active);
    goto LABEL_87;
  }
  *(LARGE_INTEGER *)(active + 48) = PerformanceCounter;
  *(_DWORD *)(active + 2352) = *(_DWORD *)(active + 2444);
  v59 = *(_DWORD *)(v10 + 24);
  if ( (unsigned int)(v59 - 1) > 3 )
  {
    if ( (unsigned int)(v59 - 5) <= 1 )
      *(_DWORD *)(active + 2360) = *(_DWORD *)(active + 2528);
  }
  else
  {
    *(_DWORD *)(active + 2356) = *(_DWORD *)(active + 2528);
  }
LABEL_87:
  result = (__int64)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 1) == 0)
    || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v61 = 0;
  }
  v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v63 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
    LOBYTE(v64) = v62;
    LOBYTE(v65) = v61;
    return WPP_RECORDER_AND_TRACE_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v65,
             v64,
             *(_QWORD *)(v63 + 19336),
             4,
             1,
             26,
             (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
             v29);
  }
  return result;
}
