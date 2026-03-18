/*
 * XREFs of RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x140003BBC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x140091478 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140092208 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140092458 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMIsParentCommon @ 0x1400F0828 (RIMIsParentCommon.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1401BA490 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 */

__int64 __fastcall RIMDeviceClassNotifyAsyncWorkItem(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r12d
  char v7; // di
  bool v8; // si
  int v9; // edx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rax
  const UNICODE_STRING *v14; // rdx
  __int64 i; // rcx
  int v16; // eax
  BOOLEAN v17; // al
  int v18; // eax
  char v19; // bl
  bool v20; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rbx
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rbx
  char v32; // di
  int v33; // r14d
  char v34; // r12
  bool v35; // r13
  bool v36; // cf
  __int64 v37; // rcx
  __int64 v38; // r9
  char v39; // si
  bool v40; // r12
  __int64 v41; // rsi
  __int64 j; // rbx
  __int64 v43; // rcx
  int v44; // eax
  char v45; // di
  bool v46; // si
  bool v47; // si
  __int64 v48; // rbx
  int v49; // edi
  __int64 v50; // rsi
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rbx
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rbx
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  int v65; // [rsp+20h] [rbp-49h]
  int v66; // [rsp+28h] [rbp-41h]
  int v67; // [rsp+30h] [rbp-39h]
  int v68; // [rsp+38h] [rbp-31h]
  int v69; // [rsp+60h] [rbp-9h] BYREF
  int v70; // [rsp+64h] [rbp-5h] BYREF
  __int64 v71; // [rsp+68h] [rbp-1h] BYREF
  __int64 v72; // [rsp+70h] [rbp+7h] BYREF
  const WCHAR *v73; // [rsp+78h] [rbp+Fh] BYREF
  int v74; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v75; // [rsp+D8h] [rbp+6Fh] BYREF
  int v76; // [rsp+E0h] [rbp+77h] BYREF
  int v77; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = *(unsigned int *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)v1 > 2 )
  {
    v74 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 323LL);
  }
  v4 = *(_QWORD **)(32 * (v1 + 4) + v2);
  v5 = *(_QWORD *)(a1 + 64) - *v4;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 72) - v4[1];
  if ( v5 )
  {
    v74 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 325LL);
  }
  v6 = -1073741823;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = *(_QWORD *)(a1 + 48);
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v4, 0);
    LOBYTE(v27) = v8;
    LOBYTE(v28) = v7;
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v27,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      16,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v25);
  }
  v75 = a1 + 40;
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 80),
    (const struct _UNICODE_STRING *)(a1 + 40));
  v10 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  v11 = 0;
  if ( !v10 )
  {
    v12 = *(_QWORD *)(v2 + 424);
    v71 = v12;
    v13 = v12;
    v14 = (const UNICODE_STRING *)v12;
    for ( i = v12; ; i = v13 )
    {
      if ( !v13 )
        goto LABEL_21;
      v16 = *(_DWORD *)(i + 168);
      if ( (v16 & 0x20) == 0 && (v16 & 0x2000) == 0 )
      {
        v17 = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), v14 + 12, 0);
        v12 = v71;
        v11 = 0;
        if ( v17 )
          break;
      }
      v13 = *(_QWORD *)(v12 + 40);
      v12 = v13;
      v71 = v13;
      v14 = (const UNICODE_STRING *)v13;
    }
    if ( (*(_DWORD *)(v71 + 184) & 0x20) == 0 )
    {
LABEL_21:
      if ( v12 )
      {
        RIMLockExclusive(v2 + 760);
        v31 = v71;
        if ( (*(_DWORD *)(v71 + 168) & 0x400) != 0 )
        {
          v32 = 0;
        }
        else
        {
          v74 = 0x20000;
          v32 = 0;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 448LL);
          v31 = v71;
        }
        v33 = 0;
        if ( (*(_DWORD *)(v31 + 184) & 1) != 0 )
        {
          if ( *(_QWORD *)(v31 + 208) )
          {
            v74 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 464LL);
            v31 = v71;
          }
          if ( *(_QWORD *)(v31 + 216) )
          {
            v74 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 465LL);
            v31 = v71;
          }
          if ( (*(_DWORD *)(v31 + 168) & 0x80u) != 0 )
          {
            v74 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 466LL);
            LOBYTE(v31) = v71;
          }
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
          {
            v32 = 1;
          }
          v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v62 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v30);
            LOBYTE(v63) = v47;
            LOBYTE(v64) = v32;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v64,
              v63,
              *(_QWORD *)(v62 + 19368),
              4,
              1,
              20,
              (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
              v31);
          }
        }
        else
        {
          if ( *(_QWORD *)(v31 + 176) )
          {
            v74 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 458LL);
          }
          v33 = 1;
        }
        RIMUnlockExclusive(v2 + 760);
        if ( v33 )
        {
          rimQueueRimDevChangeAsyncWorkItem((struct RawInputManagerObject *)v2);
          RIMFreeDev((struct RawInputManagerObject *)v2, (struct RIMDEV *)v71);
        }
        v71 = 0LL;
      }
      v18 = RIMCreateDev((struct RawInputManagerObject *)v2, 0, 0LL, (__int64)&v71);
      v11 = 0;
      v6 = v18;
      if ( v18 >= 0 )
      {
        *(_DWORD *)(v71 + 168) |= 1u;
        v6 = RIMDoOnPnpNotification((struct RawInputManagerObject *)v2);
        v11 = 0;
      }
      goto LABEL_24;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v34 = 0;
    }
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = *(_QWORD *)(v71 + 232);
      v49 = *(_DWORD *)(v71 + 48);
      v50 = *(_QWORD *)(a1 + 48);
      v51 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, 0);
      LOBYTE(v52) = v35;
      LOBYTE(v53) = v34;
      WPP_RECORDER_AND_TRACE_SF_Sdq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v53,
        v52,
        *(_QWORD *)(v51 + 19368),
        v65,
        v66,
        v67,
        v68,
        v50,
        v49,
        v48);
      v12 = v71;
      v11 = 0;
    }
    if ( !*(_QWORD *)(v12 + 232) && (unsigned int)dword_1402A9F58 > 5 )
    {
      v9 = 0;
      if ( (qword_1402A9F68 & 0x400000000000LL) != 0 && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70 )
      {
        v74 = -__CFSHR__(*(_DWORD *)(v12 + 168), 26);
        LODWORD(v75) = -__CFSHR__(*(_DWORD *)(v12 + 168), 24);
        v76 = -__CFSHR__(*(_DWORD *)(v12 + 168), 21);
        v77 = -__CFSHR__(*(_DWORD *)(v12 + 168), 11);
        v36 = __CFSHR__(*(_DWORD *)(v12 + 168), 8);
        v70 = 0;
        v69 = -v36;
        v72 = (unsigned int)RimDeviceTypeToRimInputType(v12, *(unsigned int *)(v12 + 48));
        v73 = *(const WCHAR **)(v12 + 200);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v37,
          (__int64)&unk_140286555,
          v72,
          v38,
          &v73,
          (__int64)&v72,
          (__int64)&v70,
          (__int64)&v69,
          (__int64)&v77,
          (__int64)&v76,
          (__int64)&v75,
          (__int64)&v74);
        v12 = v71;
        v11 = 0;
      }
    }
    if ( *(_DWORD *)(v12 + 48) == 3 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v39 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v54 = *(_QWORD *)(a1 + 48);
        v55 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, 0);
        LOBYTE(v56) = v40;
        LOBYTE(v57) = v39;
        WPP_RECORDER_AND_TRACE_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v57,
          v56,
          *(_QWORD *)(v55 + 19368),
          4,
          1,
          18,
          (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
          v54);
        v12 = v71;
        v11 = 0;
      }
      v41 = *(_QWORD *)(v12 + 440);
      for ( j = *(_QWORD *)(v2 + 424); ; j = *(_QWORD *)(j + 40) )
      {
        if ( !j )
          goto LABEL_74;
        if ( (*(_DWORD *)(j + 168) & 0x400) == 0 && (*(_DWORD *)(j + 184) & 0x80u) != 0 )
        {
          v43 = *(_QWORD *)(j + 456);
          if ( *(_DWORD *)(v43 + 24) == 7 || (unsigned int)RIMIsTouchPointerDevice(v43) )
          {
            v44 = RIMIsParentCommon(
                    v12,
                    j,
                    v41,
                    *(unsigned __int16 *)(*(_QWORD *)(j + 440) + 110LL),
                    *(_WORD *)(*(_QWORD *)(j + 440) + 112LL));
            v11 = 0;
            if ( v44 )
              break;
          }
        }
      }
      if ( (*(_DWORD *)(*(_QWORD *)(j + 456) + 368LL) & 0x1000) == 0 )
        goto LABEL_74;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v45 = 0;
      }
      v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v45 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_74:
        v6 = -1073741823;
        goto LABEL_24;
      }
      v58 = *(_QWORD *)(a1 + 48);
      v59 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, 0);
      LOBYTE(v60) = v46;
      LOBYTE(v61) = v45;
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v61,
        v60,
        *(_QWORD *)(v59 + 19368),
        4,
        1,
        19,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
        v58);
      v11 = 0;
      v6 = -1073741823;
    }
    else
    {
      v6 = -1073741823;
    }
  }
LABEL_24:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v19 = v11;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v11);
    LOBYTE(v23) = v20;
    LOBYTE(v24) = v19;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(v22 + 19368),
      4,
      1,
      21,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v6);
  }
  return v6;
}
