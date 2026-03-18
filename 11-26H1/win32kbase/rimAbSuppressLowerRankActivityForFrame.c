/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140072854 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1400779A8 (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMAbandonPointerDeviceFrame @ 0x140079770 (RIMAbandonPointerDeviceFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     RIMCmActiveContactsEnd @ 0x14007B47C (RIMCmActiveContactsEnd.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 *     RIMCmGetButtonContact @ 0x1400FA6B8 (RIMCmGetButtonContact.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1401597AC (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1401B5F48 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  int v6; // edi
  unsigned int v7; // r15d
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // ebx
  __int64 v16; // rdx
  int v17; // r8d
  __int64 **v18; // rax
  __int64 *v19; // xmm1_8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // r14
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r8d
  char v31; // r12
  int v32; // ebx
  int v33; // edi
  int v34; // esi
  __int64 UserSessionState; // rax
  int v36; // r8d
  int v37; // edx
  __int64 ButtonContact; // rax
  int v39; // esi
  __int64 v40; // rcx
  int v41; // edx
  int v42; // r8d
  int v43; // edx
  int v44; // r8d
  char v45; // bl
  bool v46; // di
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  char v50; // bl
  bool v51; // di
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  char v55; // bl
  bool v56; // di
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  char v62; // bl
  bool v63; // di
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  int v67; // [rsp+28h] [rbp-C0h]
  int v68; // [rsp+60h] [rbp-88h]
  __int64 v69; // [rsp+68h] [rbp-80h]
  unsigned __int64 v70; // [rsp+70h] [rbp-78h]
  LARGE_INTEGER v71; // [rsp+78h] [rbp-70h]
  __int128 v72; // [rsp+80h] [rbp-68h] BYREF
  __int64 *v73; // [rsp+90h] [rbp-58h]
  __int64 *v74; // [rsp+98h] [rbp-50h] BYREF
  int v75; // [rsp+A0h] [rbp-48h]
  __int64 *v76; // [rsp+A8h] [rbp-40h]
  bool v77; // [rsp+F8h] [rbp+10h]
  unsigned int v79; // [rsp+108h] [rbp+20h]

  v68 = 0;
  v6 = 0;
  v7 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v71 = PerformanceCounter;
  v9 = ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v69 = *(_QWORD *)(a2 + 872) + 1LL;
  v79 = *(_DWORD *)(a2 + 844) + 1;
  v10 = (v9 + ((unsigned __int64)(500 * gliQpcFreq.QuadPart - v9) >> 1)) >> 9;
  v70 = v10;
  if ( !*(_DWORD *)(W32GetUserSessionState(v11, v9, v12) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 556LL);
  v15 = RIMGetPointerInputType(a2, v13, v14);
  if ( v15 != (unsigned int)RIMGetPointerInputType(a3, v16, v17) )
  {
    v18 = RIMCmActiveContactsBeginNoButton(&v74, a2);
    v19 = v18[2];
    v72 = *(_OWORD *)v18;
    v73 = v19;
    while ( 1 )
    {
      RIMCmActiveContactsEnd(&v74, a2);
      if ( (__int64 *)v72 == v74 && DWORD2(v72) == v75 && v73 == v76 )
        break;
      v23 = v73 - 2;
      if ( (v73[2] & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v23, v20, v21, v22) )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v25, v24, v26) + 244) != 3
          || !(unsigned int)RIMIsTouchPointerDevice(a2)
          || (v28 = v23[7], PerformanceCounter.QuadPart <= v28 + v10)
          || !v28 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts((int *)v23 + 668, a2, a3, 0) )
          {
            if ( !v6 )
            {
              RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                    a1,
                                    *(_QWORD *)(a2 + 16),
                                    (LARGE_INTEGER)PerformanceCounter.QuadPart) )
                return 0;
              v68 = 1;
            }
            RIMCmAddContactSuppressionReasons(a2, v23, 1LL);
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v31 = 0;
            }
            v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v32 = *((_DWORD *)v23 + 671);
              v33 = *((_DWORD *)v23 + 2);
              v34 = *(_DWORD *)v23;
              UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v30);
              LOBYTE(v36) = v77;
              LOBYTE(v37) = v31;
              WPP_RECORDER_AND_TRACE_SF_dDD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v37,
                v36,
                *(_QWORD *)(UserSessionState + 19368),
                4,
                v67,
                16,
                (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                v34,
                v33,
                v32);
              v10 = v70;
            }
            RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v23, v69, v79, 1);
            v6 = v68;
            PerformanceCounter = v71;
          }
        }
      }
      RIMCmActiveContactsNext(a2, (__int64 **)&v72);
    }
    if ( !(unsigned int)rimAbShouldButtonContactBeSuppressed((__int64)a1, a2, v6) )
    {
      if ( !v6 )
        return v7;
      goto LABEL_56;
    }
    ButtonContact = RIMCmGetButtonContact(a2);
    v39 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v40, ButtonContact, 1LL);
    if ( v6 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v55 = 0;
      }
      v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v57 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v41, v42);
        LOBYTE(v58) = v56;
        LOBYTE(v59) = v55;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v59,
          v58,
          *(_QWORD *)(v57 + 19368),
          4,
          1,
          19,
          (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
      }
    }
    else
    {
      RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
      if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                            a1,
                            *(_QWORD *)(a2 + 16),
                            (LARGE_INTEGER)PerformanceCounter.QuadPart) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v45 = 0;
        }
        v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v47 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v43, v44);
          LOBYTE(v48) = v46;
          LOBYTE(v49) = v45;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v49,
            v48,
            *(_QWORD *)(v47 + 19368),
            4,
            1,
            17,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        return 0;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v50 = 0;
      }
      v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v52 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v43, v44);
        LOBYTE(v53) = v51;
        LOBYTE(v54) = v50;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v54,
          v53,
          *(_QWORD *)(v52 + 19368),
          4,
          1,
          18,
          (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), v39, v69, v79, 1);
    }
LABEL_56:
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v69, v79);
    v7 = RIMCompletePointerDeviceFrame(a1, *(_QWORD *)(a2 + 16), 5u);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v60 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v60 & 1) == 0)
      || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v62 = 0;
    }
    v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v64 = W32GetUserSessionState(v60, (_DWORD)WPP_GLOBAL_Control, v61);
      LOBYTE(v65) = v63;
      LOBYTE(v66) = v62;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v66,
        v65,
        *(_QWORD *)(v64 + 19368),
        4,
        1,
        20,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
        v7);
    }
  }
  return v7;
}
