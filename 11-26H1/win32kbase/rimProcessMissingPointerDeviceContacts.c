/*
 * XREFs of rimProcessMissingPointerDeviceContacts @ 0x140071E80
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400F977C (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140072854 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400F8224 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1400F955C (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x1401310A4 (RIMCmDeactivateContact.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140188E20 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimProcessMissingPointerDeviceContacts(int a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  int v5; // r8d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r12
  char v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __m128i *active; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // xmm0_8
  __int64 v18; // r15
  unsigned int v19; // ecx
  __int64 *v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // r14d
  __int64 *v23; // rsi
  unsigned int v24; // ecx
  __int64 v25; // rbx
  unsigned __int32 v26; // ecx
  __int64 i; // r8
  __int64 v28; // xmm0_8
  __m128i v29; // xmm1
  int v30; // eax
  unsigned __int64 v31; // rax
  _WORD *v32; // rcx
  __int64 result; // rax
  char v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rax
  char v40; // r14
  bool v41; // r15
  int v42; // ebx
  int v43; // edi
  __int64 v44; // rax
  int v45; // edx
  int v46; // r8d
  int v47; // ebx
  int v48; // edi
  int v49; // edx
  int v50; // r8d
  char v51; // r14
  bool v52; // r15
  __int64 v53; // r14
  _WORD *v54; // rcx
  unsigned __int64 v55; // rax
  int v56; // ebx
  int v57; // edi
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int16 v61; // [rsp+38h] [rbp-D0h]
  char v62; // [rsp+48h] [rbp-C0h]
  char v63; // [rsp+50h] [rbp-B8h]
  __int16 v64; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v65; // [rsp+6Ah] [rbp-9Eh] BYREF
  __int16 v66; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int16 v67; // [rsp+6Eh] [rbp-9Ah] BYREF
  __int16 v68; // [rsp+70h] [rbp-98h] BYREF
  __int16 v69; // [rsp+72h] [rbp-96h] BYREF
  int v70; // [rsp+74h] [rbp-94h] BYREF
  int v71; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v72[13]; // [rsp+7Ch] [rbp-8Ch] BYREF
  __m128i v73; // [rsp+B0h] [rbp-58h]
  __int64 v74; // [rsp+C0h] [rbp-48h]
  LARGE_INTEGER v75; // [rsp+C8h] [rbp-40h]
  __int64 v76; // [rsp+D0h] [rbp-38h] BYREF
  __m128i v77; // [rsp+D8h] [rbp-30h]
  __int64 v78; // [rsp+E8h] [rbp-20h]
  __int64 *v79; // [rsp+100h] [rbp-8h]
  char v80[96]; // [rsp+108h] [rbp+0h] BYREF
  char v84; // [rsp+190h] [rbp+88h] BYREF

  v3 = *(_QWORD *)(a2 + 456);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = gliQpcFreq.QuadPart * *(unsigned int *)(v3 + 800);
  v75 = PerformanceCounter;
  v7 = v6 / 0x3E8;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      27,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  active = (__m128i *)RIMCmActiveContactsBeginNoButton(v80, v3);
  v17 = active[1].m128i_i64[0];
  v73 = *active;
  v79 = (__int64 *)v17;
LABEL_8:
  v18 = v3 + 1000;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v18 + 8) )
    {
      v72[1] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
    }
    if ( !*(_QWORD *)v18 )
    {
      v72[2] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    }
    if ( !*(_DWORD *)(v18 + 8) )
    {
      v72[3] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    }
    v19 = *(_DWORD *)(v18 + 8);
    v20 = v79;
    v77.m128i_i32[3] = 0;
    v21 = v73.m128i_i64[0];
    v22 = _mm_cvtsi128_si32(_mm_srli_si128(v73, 8));
    if ( v22 == v19 && v79 == (__int64 *)(*(_QWORD *)v18 + 16LL * v19) && v73.m128i_i64[0] == v18 )
      break;
    v23 = v79 - 2;
    if ( (v79[2] & 2) == 0 )
      __int2c();
    if ( !v19 )
    {
      v72[4] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 483LL);
    }
    if ( v21 != v18 )
    {
      v72[5] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 484LL);
    }
    if ( !*(_QWORD *)v21 )
    {
      v72[6] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    }
    if ( !*(_DWORD *)(v21 + 8) )
    {
      v72[7] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    }
    v24 = *(_DWORD *)(v21 + 8);
    v77.m128i_i32[3] = 0;
    if ( v22 == v24 && v20 == (__int64 *)(*(_QWORD *)v21 + 16LL * v24) )
    {
      v72[8] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 485LL);
    }
    if ( v22 >= *(_DWORD *)(v21 + 8) )
    {
      v72[9] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 82LL);
    }
    v14 = *v20;
    v25 = v73.m128i_i64[0];
    v26 = v73.m128i_u32[2];
    for ( i = *(_QWORD *)v73.m128i_i64[0]; ; v14 = *(_QWORD *)(i + 16LL * v26) )
    {
      v74 = v14;
      if ( v14 != i + 16LL * v26 )
      {
        v28 = v74;
        v29 = v73;
        goto LABEL_34;
      }
      v73.m128i_i32[2] = ++v26;
      if ( v26 >= *(_DWORD *)(v73.m128i_i64[0] + 8) )
        break;
    }
    if ( v26 != *(_DWORD *)(v73.m128i_i64[0] + 8) )
    {
      v72[10] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
    }
    if ( !*(_QWORD *)v25 )
    {
      v72[11] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    }
    if ( !*(_DWORD *)(v25 + 8) )
    {
      v72[12] = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    }
    v77.m128i_i64[1] = *(unsigned int *)(v25 + 8);
    v78 = *(_QWORD *)v25 + 16LL * v77.m128i_u32[2];
    v28 = v78;
    v77.m128i_i64[0] = v25;
    v29 = v77;
LABEL_34:
    v30 = *((_DWORD *)v23 + 591);
    v15 = *((unsigned int *)v23 + 584);
    v79 = (__int64 *)v28;
    v73 = v29;
    if ( (v30 & 2) != 0 )
    {
      if ( (_DWORD)v15 )
      {
        if ( (unsigned int)dword_1402A9E78 > 5 )
        {
          LODWORD(v14) = 0;
          if ( (qword_1402A9E88 & 0x400000000000LL) != 0 && (qword_1402A9E90 & 0x400000000000LL) == qword_1402A9E90 )
          {
            v31 = 1000 * (v75.QuadPart - v23[293]);
            v76 = 0x1000000LL;
            v84 = 0;
            v72[0] = v31 / gliQpcFreq.QuadPart;
            LOBYTE(v64) = 1;
            v71 = v15;
            v32 = *(_WORD **)(a2 + 440);
            v68 = v32[57];
            v69 = v32[56];
            LOWORD(v70) = v32[55];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
              (_DWORD)v32,
              (unsigned int)&unk_140287D58,
              v15,
              v16,
              (__int64)&v70,
              (__int64)&v69,
              (__int64)&v68,
              (__int64)&v71,
              (__int64)v72,
              (__int64)&v64,
              (__int64)&v84,
              (__int64)&v76);
          }
        }
        *((_DWORD *)v23 + 584) = 0;
        v23[293] = 0LL;
      }
    }
    else
    {
      *((_DWORD *)v23 + 584) = v15 + 1;
      v39 = v23[6];
      v23[293] = v39;
      if ( v75.QuadPart > v7 + v39 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v40 = 0;
        }
        v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v40 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_76;
        v47 = *((_DWORD *)v23 + 671);
        v48 = *(_DWORD *)v23;
        v44 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
        v63 = v47;
        v62 = v48;
        v61 = 28;
        goto LABEL_75;
      }
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v40 = 0;
        }
        v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v40 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_76;
        v42 = *((_DWORD *)v23 + 671);
        v43 = *(_DWORD *)v23;
        v44 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
        v63 = v42;
        v62 = v43;
        v61 = 29;
LABEL_75:
        LOBYTE(v46) = v41;
        LOBYTE(v45) = v40;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v45,
          v46,
          *(_QWORD *)(v44 + 19368),
          4,
          1,
          v61,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v62,
          v63);
LABEL_76:
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v23, v14, v15, v16) )
        {
          v53 = a2;
          RIMInsertSimulatedContactEndStateInFrame(a1, a2, (_DWORD)v23, *(_QWORD *)(v3 + 872), *(_DWORD *)(v3 + 844), 1);
          *((_DWORD *)v23 + 591) |= 4u;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v51 = 0;
          }
          v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v56 = *((_DWORD *)v23 + 671);
            v57 = *(_DWORD *)v23;
            v58 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v49, v50);
            LOBYTE(v59) = v52;
            LOBYTE(v60) = v51;
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v60,
              v59,
              *(_QWORD *)(v58 + 19368),
              4,
              1,
              30,
              (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
              v57,
              v56);
          }
          RIMCmDeactivateContact(v3, v23);
          v53 = a2;
        }
        v18 = v3 + 1000;
        if ( (unsigned int)dword_1402A9E78 > 5 )
        {
          LODWORD(v14) = 0;
          v18 = v3 + 1000;
          if ( (qword_1402A9E88 & 0x400000000000LL) != 0 )
          {
            v18 = v3 + 1000;
            if ( (qword_1402A9E90 & 0x400000000000LL) == qword_1402A9E90 )
            {
              v54 = *(_WORD **)(v53 + 440);
              v55 = 1000 * (v75.QuadPart - v23[293]);
              v76 = 0x1000000LL;
              v84 = 0;
              v71 = v55 / gliQpcFreq.QuadPart;
              v72[0] = *((_DWORD *)v23 + 584);
              LOBYTE(v64) = 0;
              v65 = v54[57];
              v66 = v54[56];
              v67 = v54[55];
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                (_DWORD)v54,
                (unsigned int)&unk_140287CAB,
                v15,
                v16,
                (__int64)&v67,
                (__int64)&v66,
                (__int64)&v65,
                (__int64)v72,
                (__int64)&v71,
                (__int64)&v64,
                (__int64)&v84,
                (__int64)&v76);
              goto LABEL_8;
            }
          }
        }
      }
      else if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v23, v14, v15, v16) )
      {
        rimInsertSimulatedContactKeepAliveStateInFrame(
          a1,
          a2,
          (_DWORD)v23,
          *(_QWORD *)(v3 + 872),
          *(_DWORD *)(v3 + 844));
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 1) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    result = 0LL;
    v34 = 0;
  }
  else
  {
    v34 = 1;
  }
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v14, v15);
    LOBYTE(v37) = v35;
    LOBYTE(v38) = v34;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v38,
             v37,
             *(_QWORD *)(v36 + 19368),
             4,
             1,
             31,
             (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  return result;
}
