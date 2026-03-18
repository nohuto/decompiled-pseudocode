/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1400498A4
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimFindOrCreateActiveContact @ 0x14004A128 (rimFindOrCreateActiveContact.c)
 *     RIMAbIsDeviceArbitrationEnabled @ 0x1400621A4 (RIMAbIsDeviceArbitrationEnabled.c)
 *     RIMCmResetContactFrameState @ 0x140074E00 (RIMCmResetContactFrameState.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x14007613C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x140077BEC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     RIMCmMarkSuppressedContactForDelivery @ 0x140078060 (RIMCmMarkSuppressedContactForDelivery.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14007B5D0 (RIMCmIsContactDeliveringPointerData.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimPopulateContactFrameData @ 0x1400F5058 (rimPopulateContactFrameData.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     RIMCmDeactivateContact @ 0x1401310A4 (RIMCmDeactivateContact.c)
 *     RIMAddToActiveDevices @ 0x1401317B0 (RIMAddToActiveDevices.c)
 *     RIMIsPointerDownTransition @ 0x14013770C (RIMIsPointerDownTransition.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1401597AC (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMCmShouldDeliverSuppressedContactEndState @ 0x14015DDE4 (RIMCmShouldDeliverSuppressedContactEndState.c)
 *     RIMCmShouldDeliverSuppressedContact @ 0x14015DE18 (RIMCmShouldDeliverSuppressedContact.c)
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        struct tagPOINT a7,
        int *a8)
{
  __int64 v8; // rax
  bool v9; // bl
  __int64 v10; // r15
  __int64 v13; // r14
  int v14; // r13d
  int v15; // r8d
  bool v16; // si
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // esi
  __int16 v21; // bx
  __int64 v22; // r8
  int v23; // edx
  int v24; // r8d
  struct tagPOINT active; // r14
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  char v30; // r12
  char v31; // si
  int v32; // ebx
  PalmTelemetry *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  LARGE_INTEGER v36; // r8
  unsigned int v37; // eax
  __int64 v38; // r8
  unsigned int v39; // r9d
  int v40; // ebx
  __int64 v41; // rcx
  __int64 result; // rax
  char v43; // bl
  bool v44; // di
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  bool v48; // bl
  bool v49; // di
  char v50; // di
  bool v51; // si
  int v52; // edx
  int v53; // r8d
  bool v54; // r13
  int v55; // ebx
  int v56; // edi
  int v57; // esi
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  char v61; // bl
  bool v62; // di
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  bool v66; // di
  bool v67; // si
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  int v71; // ebx
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  int v75; // ebx
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  __int16 v79[2]; // [rsp+20h] [rbp-79h]
  int v80; // [rsp+28h] [rbp-71h]
  char v81; // [rsp+70h] [rbp-29h]
  __int64 v82; // [rsp+74h] [rbp-25h] BYREF
  __int64 v83; // [rsp+7Ch] [rbp-1Dh] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-11h]
  __int64 v85[8]; // [rsp+90h] [rbp-9h] BYREF
  int v86; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v87; // [rsp+F0h] [rbp+57h]

  v87 = a3;
  v8 = *(_QWORD *)(a2 + 440);
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 456);
  v86 = 0;
  v13 = *(_QWORD *)(v8 + 16);
  v14 = a2;
  v83 = 0LL;
  v82 = 0LL;
  v85[0] = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
    v9 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(0, (_DWORD)WPP_GLOBAL_Control, v15);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      20,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  v20 = v87;
  v21 = a5;
  v22 = v87;
  *(_DWORD *)a7.x = 0;
  *a8 = 0;
  v79[0] = v21;
  active = (struct tagPOINT)rimFindOrCreateActiveContact(v10, v13, v22, a4, *(_DWORD *)v79, &v86);
  if ( active )
  {
    if ( v86 )
    {
      if ( *(_DWORD *)(v10 + 1016) == 1 )
        RIMAddToActiveDevices((struct RawInputManagerObject *)a1);
    }
    else if ( (*(_DWORD *)(*(_QWORD *)&active + 2364LL) & 2) != 0 )
    {
      v66 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v71 = *(_DWORD *)active.x;
        v72 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v24);
        LOBYTE(v73) = v67;
        LOBYTE(v74) = v66;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v74,
          v73,
          *(_QWORD *)(v72 + 19368),
          4,
          1,
          22,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v71);
      }
      v31 = 1;
      goto LABEL_46;
    }
    v26 = rimPopulateContactFrameData(
            a1,
            v14,
            v20,
            a4,
            v21,
            a6,
            active,
            a7,
            (ULONG)&v83 + 4,
            (__int64)&v83,
            (__int64)&v82 + 4,
            (__int64)&v82,
            (__int64)v85);
    v30 = 0;
    v81 = v26;
    v31 = v26;
    if ( v26 >= 0 )
    {
      if ( *(_DWORD *)a7.x )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v61 = 0;
        }
        v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v63 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v29);
          LOBYTE(v64) = v62;
          LOBYTE(v65) = v61;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v65,
            v64,
            *(_QWORD *)(v63 + 19368),
            4,
            1,
            24,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
        }
      }
      else
      {
        v32 = v86;
        if ( v86 )
        {
          *(_DWORD *)(*(_QWORD *)&active + 64LL) = *(_DWORD *)(*(_QWORD *)&active + 2496LL);
          *(_QWORD *)(*(_QWORD *)&active + 72LL) = *(_QWORD *)(*(_QWORD *)&active + 2512LL);
          *(_QWORD *)(*(_QWORD *)&active + 80LL) = *(_QWORD *)(*(_QWORD *)&active + 2472LL);
        }
        v33 = *(PalmTelemetry **)(a1 + 1048);
        if ( v33 )
          PalmTelemetry::Update(v33, (struct tagHID_POINTER_DEVICE_INFO *)v10, *(struct tagHPD_CONTACT **)&active, v32);
        rimApplyPointerDevicePolicies(v10, active.x, v32, HIDWORD(v83), v83, HIDWORD(v82), v82, v85[0]);
        if ( (*(_DWORD *)(*(_QWORD *)&active + 32LL) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(a1 + 84) & 4) == 0 )
          {
            HIDWORD(v83) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 402LL);
          }
          v36 = PerformanceCounter;
          *(LARGE_INTEGER *)(a1 + 800) = PerformanceCounter;
        }
        else
        {
          v36 = PerformanceCounter;
        }
        *(_QWORD *)(*(_QWORD *)&active + 88LL) = *(_QWORD *)(*(_QWORD *)&active + 2472LL);
        if ( !*(_QWORD *)(*(_QWORD *)&active + 56LL)
          && (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMIsPointerDownTransition)(
                             *(unsigned int *)(*(_QWORD *)&active + 2684LL),
                             *(unsigned int *)(*(_QWORD *)&active + 2444LL),
                             (LARGE_INTEGER)v36.QuadPart) )
        {
          *(LARGE_INTEGER *)(*(_QWORD *)&active + 56LL) = v36;
        }
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMAbIsDeviceArbitrationEnabled)(
                              v35,
                              v34,
                              (LARGE_INTEGER)v36.QuadPart)
          && (*(_DWORD *)(*(_QWORD *)&active + 8LL) & 1) != 0 )
        {
          HIDWORD(v83) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 426LL);
        }
        v37 = ((__int64 (__fastcall *)(_QWORD))RIMCmIsContactSuppressed)(active);
        v39 = v37;
        if ( v37
          && ((unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RIMCmShouldDeliverSuppressedContact)(
                              v10,
                              active,
                              v38,
                              v37)
           || (unsigned int)RIMCmShouldDeliverSuppressedContactEndState()) )
        {
          v40 = 1;
          goto LABEL_21;
        }
        v40 = 0;
        if ( !v39
          || (unsigned int)((__int64 (__fastcall *)(_QWORD))RIMCmIsContactDeliveringPointerData)(active)
          || (unsigned int)((__int64 (__fastcall *)(_QWORD))RIMCmIsContactSuppressedByArbitrationOnly)(active) )
        {
LABEL_21:
          *(_DWORD *)(*(_QWORD *)&active + 2364LL) |= 1u;
          if ( v40 )
            ((void (__fastcall *)(_QWORD))RIMCmMarkSuppressedContactForDelivery)(active);
          goto LABEL_23;
        }
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        {
          v30 = 1;
        }
        v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v55 = *(_DWORD *)(*(_QWORD *)&active + 2684LL);
          v56 = *(_DWORD *)(*(_QWORD *)&active + 8LL);
          v57 = *(_DWORD *)active.x;
          v58 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v52, v53);
          LOBYTE(v59) = v54;
          LOBYTE(v60) = v30;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v60,
            v59,
            *(_QWORD *)(v58 + 19368),
            4,
            v80,
            25,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
            v57,
            v56,
            v55);
          v31 = v81;
        }
      }
LABEL_23:
      *a8 = v86;
      v41 = v10;
      if ( !*(_DWORD *)a7.x )
      {
        *(LARGE_INTEGER *)(*(_QWORD *)&active + 48LL) = PerformanceCounter;
        *(_DWORD *)(*(_QWORD *)&active + 2352LL) = *(_DWORD *)(*(_QWORD *)&active + 2444LL);
        if ( (unsigned int)RIMIsTouchPointerDevice(v10) )
        {
          *(_DWORD *)(*(_QWORD *)&active + 2356LL) = *(_DWORD *)(*(_QWORD *)&active + 2528LL);
        }
        else if ( (unsigned int)RIMIsPenPointerDevice() )
        {
          *(_DWORD *)(*(_QWORD *)&active + 2360LL) = *(_DWORD *)(*(_QWORD *)&active + 2528LL);
        }
        goto LABEL_27;
      }
LABEL_48:
      ((void (__fastcall *)(_QWORD, _QWORD))RIMCmDeactivateContact)(v41, active);
      goto LABEL_27;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v28 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v28 & 1) == 0)
      || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v50 = 0;
    }
    v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v75 = *(_DWORD *)active.x;
      v76 = W32GetUserSessionState(v28, (_DWORD)WPP_GLOBAL_Control, v29);
      LOBYTE(v77) = v51;
      LOBYTE(v78) = v50;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v78,
        v77,
        *(_QWORD *)(v76 + 19368),
        4,
        1,
        23,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v75);
    }
    v31 = v81;
LABEL_46:
    if ( !v86 )
    {
      ((void (__fastcall *)(_QWORD))RIMCmResetContactFrameState)(active);
      goto LABEL_27;
    }
    v41 = v10;
    goto LABEL_48;
  }
  v48 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v68 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v24);
    LOBYTE(v69) = v49;
    LOBYTE(v70) = v48;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v70,
      v69,
      *(_QWORD *)(v68 + 19368),
      4,
      1,
      21,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  v31 = 1;
LABEL_27:
  result = (__int64)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 1) == 0)
    || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v43 = 0;
  }
  v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v45 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v24);
    LOBYTE(v46) = v44;
    LOBYTE(v47) = v43;
    return WPP_RECORDER_AND_TRACE_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v47,
             v46,
             *(_QWORD *)(v45 + 19368),
             4,
             1,
             26,
             (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
             v31);
  }
  return result;
}
