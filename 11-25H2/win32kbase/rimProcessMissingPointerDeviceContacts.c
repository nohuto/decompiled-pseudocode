/*
 * XREFs of rimProcessMissingPointerDeviceContacts @ 0x1400320D4
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400303D4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x140032890 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140153B68 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1401838DC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x14018576C (RIMCmDeactivateContact.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401F1C54 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F5628 (RIMCmIsContactDeliveringAnyData.c)
 */

_UNKNOWN **__fastcall rimProcessMissingPointerDeviceContacts(int a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  int v4; // r12d
  __int64 v5; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // r13
  bool v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __m128i *active; // rax
  __m128i v16; // xmm1
  LARGE_INTEGER v17; // rbx
  __int64 v18; // rdx
  int *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r8d
  int v23; // r9d
  _WORD *v24; // rcx
  unsigned __int64 v25; // rax
  bool v26; // bl
  _UNKNOWN **result; // rax
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rax
  bool v33; // r15
  bool v34; // r12
  int v35; // ebx
  int v36; // edi
  __int64 v37; // rax
  int v38; // edx
  int v39; // r8d
  int v40; // ebx
  int v41; // edi
  __int64 v42; // rdx
  __int64 v43; // r8
  bool v44; // r15
  bool v45; // r12
  int v46; // ebx
  int v47; // edi
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  int v51; // r8d
  int v52; // r9d
  _WORD *v53; // rcx
  unsigned __int64 v54; // rax
  __int16 v55; // [rsp+38h] [rbp-A9h]
  char v56; // [rsp+48h] [rbp-99h]
  char v57; // [rsp+50h] [rbp-91h]
  _BYTE v58[2]; // [rsp+68h] [rbp-79h] BYREF
  __int16 v59; // [rsp+6Ah] [rbp-77h] BYREF
  __int16 v60; // [rsp+6Ch] [rbp-75h] BYREF
  __int16 v61; // [rsp+6Eh] [rbp-73h] BYREF
  __int16 v62; // [rsp+70h] [rbp-71h] BYREF
  __int16 v63; // [rsp+72h] [rbp-6Fh] BYREF
  __int16 v64; // [rsp+74h] [rbp-6Dh] BYREF
  int v65; // [rsp+78h] [rbp-69h] BYREF
  int v66; // [rsp+7Ch] [rbp-65h] BYREF
  LARGE_INTEGER v67; // [rsp+80h] [rbp-61h]
  __m128i v68; // [rsp+88h] [rbp-59h] BYREF
  __int64 v69; // [rsp+98h] [rbp-49h] BYREF
  int v70; // [rsp+A0h] [rbp-41h]
  __int64 v71; // [rsp+A8h] [rbp-39h]
  __m128i v72; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-21h]
  __m128i v74; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v75; // [rsp+D8h] [rbp-9h]
  char v76[88]; // [rsp+E0h] [rbp-1h] BYREF
  char v80; // [rsp+160h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 456);
  v4 = a1;
  v5 = a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = gliQpcFreq.QuadPart * *(unsigned int *)(v3 + 800);
  v67 = PerformanceCounter;
  v8 = (v7 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v9 = v7 / 0x3E8;
  v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      27,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
  }
  active = (__m128i *)RIMCmActiveContactsBegin(v76, v3);
  v68 = *active;
  v72 = v68;
  v73 = active[1].m128i_i64[0];
  RIMCmActiveContactsEnd(&v69, v3);
  v16 = v68;
  if ( (v68.m128i_i64[0] != v69 || _mm_cvtsi128_si32(_mm_srli_si128(v68, 8)) != v70 || v73 != v71)
    && (*(_DWORD *)(v73 + 16) & 4) != 0 )
  {
    RIMCmActiveContactsNext(v3, &v72);
    v16 = v72;
  }
  v17 = v67;
  v75 = v73;
  v74 = v16;
  while ( 1 )
  {
    RIMCmActiveContactsEnd(&v69, v3);
    if ( v74.m128i_i64[0] == v69 && v74.m128i_i32[2] == v70 && v75 == v71 )
      break;
    v19 = (int *)(v75 - 16);
    if ( (*(_DWORD *)(v75 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v74);
    v21 = (unsigned int)v19[584];
    if ( (v19[591] & 2) != 0 )
    {
      if ( (_DWORD)v21 )
      {
        if ( (unsigned int)dword_14029EE58 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_14029EE58, 0x400000000000LL, v21) )
          {
            v24 = *(_WORD **)(v5 + 440);
            v68.m128i_i64[0] = 0x1000000LL;
            v25 = 1000 * (v17.QuadPart - *((_QWORD *)v19 + 293));
            v80 = 0;
            v58[0] = 1;
            v66 = v25 / gliQpcFreq.QuadPart;
            v65 = v22;
            v62 = v24[57];
            v63 = v24[56];
            v64 = v24[55];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
              (_DWORD)v24,
              (unsigned int)&unk_14027D0CD,
              v22,
              v23,
              (__int64)&v64,
              (__int64)&v63,
              (__int64)&v62,
              (__int64)&v65,
              (__int64)&v66,
              (__int64)v58,
              (__int64)&v80,
              (__int64)&v68);
          }
        }
        v19[584] = 0;
        *((_QWORD *)v19 + 293) = 0LL;
      }
    }
    else
    {
      v19[584] = v21 + 1;
      v32 = *((_QWORD *)v19 + 6);
      *((_QWORD *)v19 + 293) = v32;
      if ( v17.QuadPart > v9 + v32 )
      {
        v33 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = v19[671];
          v36 = *v19;
          v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
          v57 = v35;
          v56 = v36;
          v55 = 28;
LABEL_54:
          LOBYTE(v39) = v34;
          LOBYTE(v38) = v33;
          WPP_RECORDER_AND_TRACE_SF_dD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v38,
            v39,
            *(_QWORD *)(v37 + 19336),
            4,
            1,
            v55,
            (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
            v56,
            v57);
          goto LABEL_55;
        }
        goto LABEL_55;
      }
      if ( a3 )
      {
        v33 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v40 = v19[671];
          v41 = *v19;
          v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
          v57 = v40;
          v56 = v41;
          v55 = 29;
          goto LABEL_54;
        }
LABEL_55:
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v19) )
        {
          v5 = a2;
          v4 = a1;
          RIMInsertSimulatedContactEndStateInFrame(a1, a2, (_DWORD)v19, *(_QWORD *)(v3 + 872), *(_DWORD *)(v3 + 844), 1);
          v19[591] |= 4u;
        }
        else
        {
          v44 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v46 = v19[671];
            v47 = *v19;
            v48 = W32GetUserSessionState(WPP_GLOBAL_Control, v42);
            LOBYTE(v49) = v45;
            LOBYTE(v50) = v44;
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v50,
              v49,
              *(_QWORD *)(v48 + 19336),
              4,
              1,
              30,
              (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
              v47,
              v46);
          }
          RIMCmDeactivateContact(v3, v19);
          v5 = a2;
          v4 = a1;
        }
        v17 = v67;
        if ( (unsigned int)dword_14029EE58 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029EE58, 0x400000000000LL, v43) )
        {
          v53 = *(_WORD **)(v5 + 440);
          v68.m128i_i64[0] = 0x1000000LL;
          v54 = 1000 * (v17.QuadPart - *((_QWORD *)v19 + 293));
          v80 = 0;
          v58[0] = 0;
          v65 = v54 / gliQpcFreq.QuadPart;
          v66 = v19[584];
          v59 = v53[57];
          v60 = v53[56];
          v61 = v53[55];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (_DWORD)v53,
            (unsigned int)&unk_14027D0CD,
            v51,
            v52,
            (__int64)&v61,
            (__int64)&v60,
            (__int64)&v59,
            (__int64)&v66,
            (__int64)&v65,
            (__int64)v58,
            (__int64)&v80,
            (__int64)&v68);
        }
      }
      else if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v19) )
      {
        rimInsertSimulatedContactKeepAliveStateInFrame(
          v4,
          v5,
          (_DWORD)v19,
          *(_QWORD *)(v3 + 872),
          *(_DWORD *)(v3 + 844));
      }
    }
  }
  v26 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v26;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v31,
                          v30,
                          *(_QWORD *)(v29 + 19336),
                          4,
                          1,
                          31,
                          (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
  }
  return result;
}
