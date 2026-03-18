/*
 * XREFs of RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x140005C24 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x14011FD30 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     RIMFindInputDeviceForConfig @ 0x14012A394 (RIMFindInputDeviceForConfig.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140132014 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1401F09E8 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 */

__int64 __fastcall RIMDeviceClassNotifyAsyncWorkItem(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  char v5; // r12
  __int64 v6; // r15
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  int v10; // r13d
  char v11; // di
  bool v12; // si
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  const UNICODE_STRING *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r10
  const UNICODE_STRING *v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  BOOLEAN v23; // al
  __int64 v24; // rdx
  __int64 v25; // rbx
  int v26; // r14d
  __int64 v27; // rbx
  int v28; // edi
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  bool v33; // cf
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // r9
  char v37; // di
  bool v38; // si
  __int64 v39; // rbx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  char v43; // di
  bool v44; // si
  __int64 v45; // rbx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  char v49; // di
  bool v50; // si
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  char v54; // bl
  bool v55; // di
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  int v60; // [rsp+20h] [rbp-49h]
  int v61; // [rsp+28h] [rbp-41h]
  int v62; // [rsp+30h] [rbp-39h]
  int v63; // [rsp+38h] [rbp-31h]
  int v64; // [rsp+60h] [rbp-9h] BYREF
  int v65; // [rsp+64h] [rbp-5h] BYREF
  __int64 v66; // [rsp+68h] [rbp-1h] BYREF
  __int64 v67; // [rsp+70h] [rbp+7h] BYREF
  const WCHAR *v68; // [rsp+78h] [rbp+Fh] BYREF
  int v69; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v70; // [rsp+D8h] [rbp+6Fh] BYREF
  const UNICODE_STRING *v71; // [rsp+E0h] [rbp+77h] BYREF
  int v72; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = *(unsigned int *)(a1 + 32);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v70 = v4;
  v8 = 2LL;
  if ( (unsigned int)v4 > 2 )
  {
    v69 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 323);
  }
  v9 = *(_QWORD **)(32 * (v4 + 4) + v6);
  if ( *(_QWORD *)(a1 + 64) != *v9 || *(_QWORD *)(a1 + 72) != v9[1] )
  {
    v69 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 325);
  }
  v10 = -1073741823;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_QWORD *)(a1 + 48);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      16,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v13);
  }
  v17 = (const UNICODE_STRING *)(a1 + 40);
  v71 = (const UNICODE_STRING *)(a1 + 40);
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 80),
    (const struct _UNICODE_STRING *)(a1 + 40),
    a3,
    a4);
  if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
    && *(_QWORD *)(a1 + 88) == *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 )
  {
    v19 = *(_QWORD *)(v6 + 424);
    v66 = v19;
    if ( v19 )
    {
      v20 = (const UNICODE_STRING *)v19;
      v21 = v19;
      while ( 1 )
      {
        v22 = *(_DWORD *)(v21 + 168);
        if ( (v22 & 0x20) == 0 && (v22 & 0x2000) == 0 )
        {
          v23 = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), v20 + 12, 0);
          v19 = v66;
          if ( v23 )
            break;
        }
        v19 = *(_QWORD *)(v19 + 40);
        v66 = v19;
        v21 = v19;
        v20 = (const UNICODE_STRING *)v19;
        if ( !v19 )
          goto LABEL_21;
      }
      if ( (*(_DWORD *)(v66 + 184) & 0x20) == 0 )
      {
LABEL_21:
        if ( v19 )
        {
          RIMLockExclusive(v6 + 760);
          v25 = v66;
          if ( (*(_DWORD *)(v66 + 168) & 0x400) == 0 )
          {
            v69 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 448);
            v25 = v66;
          }
          v26 = 0;
          if ( (*(_DWORD *)(v25 + 184) & 1) != 0 )
          {
            if ( *(_QWORD *)(v25 + 208) )
            {
              v69 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 464);
              v25 = v66;
            }
            if ( *(_QWORD *)(v25 + 216) )
            {
              v69 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 465);
              v25 = v66;
            }
            if ( (*(_DWORD *)(v25 + 168) & 0x80u) != 0 )
            {
              v69 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 466);
              LOBYTE(v25) = v66;
            }
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v49 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v49 = 0;
            }
            v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v51 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
              LOBYTE(v52) = v50;
              LOBYTE(v53) = v49;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v53,
                v52,
                *(_QWORD *)(v51 + 19336),
                4,
                1,
                20,
                (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
                v25);
            }
            v17 = v71;
          }
          else
          {
            if ( *(_QWORD *)(v25 + 176) )
            {
              v69 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 458);
            }
            v26 = 1;
          }
          RIMUnlockExclusive(v6 + 760);
          if ( v26 )
          {
            rimQueueRimDevChangeAsyncWorkItem((struct RawInputManagerObject *)v6, v66, 3);
            RIMFreeDev((struct RawInputManagerObject *)v6, (struct RIMDEV *)v66);
          }
          v66 = 0LL;
        }
        goto LABEL_74;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      {
        v5 = 1;
      }
      LOBYTE(v69) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = *(_QWORD *)(v66 + 232);
        v28 = *(_DWORD *)(v66 + 48);
        v29 = *(_QWORD *)(a1 + 48);
        v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
        LOBYTE(v31) = v5;
        LOBYTE(v32) = v69;
        WPP_RECORDER_AND_TRACE_SF_Sdq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v32,
          *(_QWORD *)(v30 + 19336),
          v60,
          v61,
          v62,
          v63,
          v29,
          v28,
          v27);
        v19 = v66;
      }
      if ( !*(_QWORD *)(v19 + 232)
        && (unsigned int)dword_14029EF38 > 5
        && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
      {
        v69 = -__CFSHR__(*(_DWORD *)(v19 + 168), 26);
        v70 = -__CFSHR__(*(_DWORD *)(v19 + 168), 24);
        LODWORD(v71) = -__CFSHR__(*(_DWORD *)(v19 + 168), 21);
        v72 = -__CFSHR__(*(_DWORD *)(v19 + 168), 11);
        v33 = __CFSHR__(*(_DWORD *)(v19 + 168), 8);
        v65 = 0;
        v64 = -v33;
        v67 = (unsigned int)RimDeviceTypeToRimInputType(v19, *(_DWORD *)(v19 + 48));
        v68 = *(const WCHAR **)(v34 + 200);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v35,
          (__int64)&unk_14027C10D,
          v67,
          v36,
          &v68,
          (__int64)&v67,
          (__int64)&v65,
          (__int64)&v64,
          (__int64)&v72,
          (__int64)&v71,
          (__int64)&v70,
          (__int64)&v69);
        v19 = v66;
      }
      if ( *(_DWORD *)(v19 + 48) == 3 )
      {
        v69 = 0;
        v70 = 0;
        v71 = 0LL;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v37 = 0;
        }
        v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v39 = *(_QWORD *)(a1 + 48);
          v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
          LOBYTE(v41) = v38;
          LOBYTE(v42) = v37;
          WPP_RECORDER_AND_TRACE_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v42,
            v41,
            *(_QWORD *)(v40 + 19336),
            4,
            1,
            18,
            (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
            v39);
          v19 = v66;
        }
        if ( (unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(v19 + 440), v6, v19, &v69, &v70, &v71) && v69 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v43 = 0;
          }
          v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v45 = *(_QWORD *)(a1 + 48);
            v46 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
            LOBYTE(v47) = v44;
            LOBYTE(v48) = v43;
            WPP_RECORDER_AND_TRACE_SF_S(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v48,
              v47,
              *(_QWORD *)(v46 + 19336),
              4,
              1,
              19,
              (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
              v45);
          }
        }
      }
    }
    else
    {
LABEL_74:
      v10 = RIMCreateDev((struct RawInputManagerObject *)v6, v70, v17, 0, 0, 0LL, &v66);
      if ( v10 >= 0 )
      {
        *(_DWORD *)(v66 + 168) |= 1u;
        v10 = RIMDoOnPnpNotification((struct RawInputManagerObject *)v6, v66);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v54 = 0;
  }
  v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
    LOBYTE(v57) = v55;
    LOBYTE(v58) = v54;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v58,
      v57,
      *(_QWORD *)(v56 + 19336),
      4,
      1,
      21,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
