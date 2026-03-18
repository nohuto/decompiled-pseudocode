/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x140031B74
 * Callers:
 *     RIMEndAllStaleContacts @ 0x140031B08 (RIMEndAllStaleContacts.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x14002ED58 (RIMAbandonPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x140030008 (RIMStartPointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x14003065C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x140032890 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011853C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140153B68 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1401838DC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x140183C3C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmDeactivateContact @ 0x14018576C (RIMCmDeactivateContact.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019BC10 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401A1B00 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F5628 (RIMCmIsContactDeliveringAnyData.c)
 *     ?Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z @ 0x1401F5CC8 (-Invalidate@PalmTelemetry@@QEAAXW4tagTEL_INVALIDATION_REASON@@@Z.c)
 */

__int64 __fastcall rimEndPointerDeviceStaleContacts(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  int v6; // esi
  unsigned int v7; // r9d
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  int *v17; // r14
  int v18; // r9d
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  int v21; // ecx
  __int64 v22; // rdx
  bool v23; // al
  _UNKNOWN **v24; // rcx
  int v25; // ebx
  int v26; // edi
  int v27; // esi
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // rcx
  bool v33; // al
  _UNKNOWN **v34; // rcx
  int v35; // ebx
  int v36; // edi
  int v37; // esi
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  bool v41; // bl
  bool v42; // di
  __int64 UserSessionState; // rax
  int v44; // r8d
  int v45; // edx
  _WORD *v46; // rcx
  int v47; // [rsp+28h] [rbp-A1h]
  __int16 v48; // [rsp+60h] [rbp-69h] BYREF
  __int16 v49; // [rsp+62h] [rbp-67h] BYREF
  int v50; // [rsp+64h] [rbp-65h]
  unsigned int v51; // [rsp+68h] [rbp-61h]
  int v52; // [rsp+6Ch] [rbp-5Dh]
  int v53; // [rsp+70h] [rbp-59h] BYREF
  int v54; // [rsp+74h] [rbp-55h] BYREF
  __int64 v55; // [rsp+78h] [rbp-51h]
  __int64 v56; // [rsp+80h] [rbp-49h]
  unsigned __int64 v57; // [rsp+88h] [rbp-41h]
  __int64 v58; // [rsp+90h] [rbp-39h] BYREF
  __int128 v59; // [rsp+98h] [rbp-31h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-21h]
  __int128 v61; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-9h]
  char v63[88]; // [rsp+C8h] [rbp-1h] BYREF
  char v64; // [rsp+130h] [rbp+67h] BYREF
  bool v65; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int64 v66; // [rsp+140h] [rbp+77h]
  __int16 v67; // [rsp+148h] [rbp+7Fh] BYREF

  v66 = a3;
  v3 = *((_QWORD *)a2 + 57);
  v55 = v3;
  v52 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(v3 + 800);
  v8 = 0;
  v50 = 0;
  v51 = v7 + *(_DWORD *)(v3 + 844);
  v9 = *(_QWORD *)(v3 + 808) + *(_QWORD *)(v3 + 872);
  v57 = gliQpcFreq.QuadPart * (unsigned __int64)v7 / 0x3E8;
  v56 = v9;
  active = RIMCmActiveContactsBegin(&v61, v3);
  v11 = *(_QWORD *)(active + 16);
  v59 = *(_OWORD *)active;
  v60 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v63, v3);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v62 = v14;
    v61 = v13;
    if ( (_QWORD)v59 == v15 )
    {
      result = DWORD2(v61);
      if ( DWORD2(v59) == DWORD2(v61) && v60 == v62 )
        break;
    }
    v17 = (int *)(v60 - 16);
    if ( (*(_DWORD *)(v60 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v59);
    v19 = *((_QWORD *)v17 + 6);
    v20 = v66;
    if ( v66 > v19 + v57 )
    {
      v21 = *(_DWORD *)(v3 + 24);
      if ( (unsigned int)(v21 - 5) <= 1 )
      {
        v8 = 2;
      }
      else if ( (unsigned int)(v21 - 1) <= 3 )
      {
        v8 = 1;
      }
      if ( (unsigned int)dword_14029EE58 > 5
        && (qword_14029EE68 & 0x400000000000LL) != 0
        && (qword_14029EE70 & 0x400000000000LL) == qword_14029EE70 )
      {
        v46 = (_WORD *)*((_QWORD *)a2 + 55);
        v58 = 0x1000000LL;
        v64 = 1;
        v65 = 0;
        v53 = 1000 * (v66 - v19) / gliQpcFreq.QuadPart;
        v54 = v17[584];
        v67 = v46[57];
        v48 = v46[56];
        v49 = v46[55];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          (_DWORD)v46,
          (unsigned int)&unk_14027D0CD,
          0,
          v18,
          (__int64)&v49,
          (__int64)&v48,
          (__int64)&v67,
          (__int64)&v54,
          (__int64)&v53,
          (__int64)&v65,
          (__int64)&v64,
          (__int64)&v58);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v17) )
      {
        if ( !v6 )
        {
          RIMAbandonPointerDeviceFrame(a1, (__int64)a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame((__int64)a1, (__int64)a2, v20) )
          {
            v41 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            result = (__int64)&WPP_RECORDER_INITIALIZED;
            v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
              LOBYTE(v44) = v42;
              LOBYTE(v45) = v41;
              result = WPP_RECORDER_AND_TRACE_SF_(
                         *((_QWORD *)WPP_GLOBAL_Control + 3),
                         v45,
                         v44,
                         *(_QWORD *)(UserSessionState + 19336),
                         4,
                         1,
                         50,
                         (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
            }
            goto LABEL_20;
          }
          v50 = 1;
        }
        v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v24 = &WPP_RECORDER_INITIALIZED;
        v64 = v23;
        v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = v17[671];
          v26 = v17[2];
          v27 = *v17;
          LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          v28 = W32GetUserSessionState(v24, v22);
          LOBYTE(v29) = v65;
          LOBYTE(v30) = v64;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v30,
            v29,
            *(_QWORD *)(v28 + 19336),
            4,
            v47,
            51,
            (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
            v27,
            v26,
            v25);
          v3 = v55;
        }
        v31 = v51;
        v17[591] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)a2, (_DWORD)v17, v56, v31, 0);
        v6 = v50;
      }
      else
      {
        v33 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v34 = &WPP_RECORDER_INITIALIZED;
        v64 = v33;
        v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = v17[671];
          v36 = v17[2];
          v37 = *v17;
          LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          v38 = W32GetUserSessionState(v34, v22);
          LOBYTE(v39) = v65;
          LOBYTE(v40) = v64;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v40,
            v39,
            *(_QWORD *)(v38 + 19336),
            4,
            v47,
            49,
            (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
            v37,
            v36,
            v35);
          v3 = v55;
          v6 = v50;
        }
        RIMCmDeactivateContact(v3, v17);
        v52 = 1;
      }
    }
  }
  if ( v6 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer(a2);
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, a2, v56, v51);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)a2);
    result = RIMCompletePointerDeviceFrame(a1, (__int64)a2, 2u);
    goto LABEL_22;
  }
LABEL_20:
  if ( v52 )
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1);
LABEL_22:
  v32 = *((_QWORD *)a1 + 131);
  if ( v32 && v8 )
    return PalmTelemetry::Invalidate(v32, v8);
  return result;
}
