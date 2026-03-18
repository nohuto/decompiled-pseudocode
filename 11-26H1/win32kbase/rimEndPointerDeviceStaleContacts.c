/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x14005AAE4
 * Callers:
 *     RIMEndAllStaleContacts @ 0x14005AA78 (RIMEndAllStaleContacts.c)
 * Callees:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCmActiveContactsBegin @ 0x140075F1C (RIMCmActiveContactsBegin.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMAbandonPointerDeviceFrame @ 0x140079770 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 *     RIMCmDeactivateContact @ 0x1401310A4 (RIMCmDeactivateContact.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1401597AC (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140188E20 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1401B5F48 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401C5A28 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z @ 0x140210D60 (-Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z.c)
 */

_UNKNOWN **__fastcall rimEndPointerDeviceStaleContacts(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v6; // r15d
  unsigned __int64 v7; // kr00_8
  __int64 v8; // rax
  __int64 active; // rax
  __int64 v10; // rsi
  __int64 v11; // xmm1_8
  _UNKNOWN **result; // rax
  int *v13; // r14
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  _BOOL8 v18; // r9
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // r8d
  char v22; // bl
  bool v23; // di
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rcx
  char v28; // al
  _UNKNOWN **v29; // rcx
  int v30; // ebx
  int v31; // edi
  int v32; // esi
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char v36; // al
  _UNKNOWN **v37; // rcx
  int v38; // ebx
  int v39; // edi
  int v40; // esi
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  unsigned int v44; // eax
  _WORD *v45; // rcx
  int v46; // eax
  int v47; // [rsp+28h] [rbp-A1h]
  __int16 v48; // [rsp+60h] [rbp-69h] BYREF
  __int16 v49; // [rsp+62h] [rbp-67h] BYREF
  int v50; // [rsp+64h] [rbp-65h]
  int v51; // [rsp+68h] [rbp-61h]
  int v52; // [rsp+6Ch] [rbp-5Dh]
  int v53; // [rsp+70h] [rbp-59h]
  unsigned int v54; // [rsp+74h] [rbp-55h]
  int v55; // [rsp+78h] [rbp-51h]
  int v56; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v57; // [rsp+80h] [rbp-49h] BYREF
  __int64 v58; // [rsp+88h] [rbp-41h]
  __int64 v59; // [rsp+90h] [rbp-39h]
  __int64 v60; // [rsp+98h] [rbp-31h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-29h]
  __int64 v62; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-9h]
  char v65[88]; // [rsp+C8h] [rbp-1h] BYREF
  char v66; // [rsp+130h] [rbp+67h] BYREF
  bool v67; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int64 v68; // [rsp+140h] [rbp+77h]
  __int16 v69; // [rsp+148h] [rbp+7Fh] BYREF

  v68 = a3;
  v3 = *((_QWORD *)a2 + 57);
  v58 = v3;
  v50 = 0;
  v55 = 0;
  v6 = 0;
  v7 = gliQpcFreq.QuadPart * *(unsigned int *)(v3 + 800);
  v54 = *(_DWORD *)(v3 + 800) + *(_DWORD *)(v3 + 844);
  v8 = *(_QWORD *)(v3 + 808) + *(_QWORD *)(v3 + 872);
  v61 = v7 / 0x3E8;
  v60 = v8;
  active = RIMCmActiveContactsBegin(v65, v3);
  v10 = v3 + 1000;
  v59 = v3 + 1000;
  v11 = *(_QWORD *)(active + 16);
  v63 = *(_OWORD *)active;
  v64 = v11;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v3 + 1008) )
    {
      v51 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
    }
    if ( !*(_QWORD *)v10 )
    {
      v52 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    }
    if ( !*(_DWORD *)(v10 + 8) )
    {
      v53 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    }
    result = (_UNKNOWN **)(*(_QWORD *)v10 + 16LL * *(unsigned int *)(v10 + 8));
    if ( DWORD2(v63) == *(_DWORD *)(v10 + 8) && (_UNKNOWN **)v64 == result && (_QWORD)v63 == v10 )
      break;
    v13 = (int *)(v64 - 16);
    if ( (*(_DWORD *)(v64 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v63);
    v14 = v68;
    if ( v68 > *((_QWORD *)v13 + 6) + v61 )
    {
      v15 = RIMIsPenPointerDevice(v3);
      v18 = 0LL;
      if ( v15 )
      {
        v19 = 1LL;
        v6 = 2;
      }
      else
      {
        v46 = RIMIsTouchPointerDevice(v16);
        v19 = 1LL;
        if ( v46 )
          v6 = 1;
      }
      if ( (unsigned int)dword_1402A9E78 > 5
        && (qword_1402A9E88 & 0x400000000000LL) != 0
        && (qword_1402A9E90 & 0x400000000000LL) == qword_1402A9E90 )
      {
        v45 = (_WORD *)*((_QWORD *)a2 + 55);
        v66 = 1;
        v62 = 0x1000000LL;
        v67 = v18;
        v56 = 1000 * (v14 - v17) / gliQpcFreq.QuadPart;
        v57 = v13[584];
        v69 = v45[57];
        v48 = v45[56];
        v49 = v45[55];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          (_DWORD)v45,
          (unsigned int)&unk_140287515,
          v17,
          v18,
          (__int64)&v49,
          (__int64)&v48,
          (__int64)&v69,
          (__int64)&v57,
          (__int64)&v56,
          (__int64)&v67,
          (__int64)&v66,
          (__int64)&v62);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v13, v19, v17, v18) )
      {
        if ( !v50 )
        {
          RIMAbandonPointerDeviceFrame(a1, a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame(a1, a2, v14) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v22 = 0;
            }
            result = &WPP_RECORDER_INITIALIZED;
            v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v21);
              LOBYTE(v25) = v23;
              LOBYTE(v26) = v22;
              result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                                      v26,
                                      v25,
                                      *(_QWORD *)(UserSessionState + 19368),
                                      4,
                                      1,
                                      50,
                                      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
            }
            goto LABEL_26;
          }
          v50 = 1;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v36 = 0;
        }
        v37 = &WPP_RECORDER_INITIALIZED;
        v66 = v36;
        v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v38 = v13[671];
          v39 = v13[2];
          v40 = *v13;
          LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          v41 = W32GetUserSessionState((_DWORD)v37, 0, 1);
          LOBYTE(v42) = v67;
          LOBYTE(v43) = v66;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v43,
            v42,
            *(_QWORD *)(v41 + 19368),
            4,
            v47,
            51,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
            v40,
            v39,
            v38);
          v3 = v58;
          v10 = v59;
        }
        v44 = v54;
        v13[591] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)a2, (_DWORD)v13, v60, v44, 0);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v28 = 0;
        }
        v29 = &WPP_RECORDER_INITIALIZED;
        v66 = v28;
        v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = v13[671];
          v31 = v13[2];
          v32 = *v13;
          LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          v33 = W32GetUserSessionState((_DWORD)v29, 0, v20);
          LOBYTE(v34) = v67;
          LOBYTE(v35) = v66;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v35,
            v34,
            *(_QWORD *)(v33 + 19368),
            4,
            v47,
            49,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
            v32,
            v31,
            v30);
          v3 = v58;
          v10 = v59;
        }
        RIMCmDeactivateContact(v3, v13);
        v55 = 1;
      }
    }
  }
  if ( v50 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer(a2);
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, a2, v60, v54);
    RIMAbArbitratePointerDeviceFrame(a1);
    result = (_UNKNOWN **)RIMCompletePointerDeviceFrame(a1);
    goto LABEL_28;
  }
LABEL_26:
  if ( v55 )
    result = (_UNKNOWN **)RIMUpdatePointerDeviceStateAfterFrameCompleted(a1);
LABEL_28:
  v27 = *((_QWORD *)a1 + 131);
  if ( v27 )
  {
    if ( v6 )
      return (_UNKNOWN **)PalmTelemetry::Invalidate(v27, v6);
  }
  return result;
}
