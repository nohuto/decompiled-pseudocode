/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x14002F720
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x14003065C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x14002ED58 (RIMAbandonPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x140030008 (RIMStartPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1400327B0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400CDA28 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1400D9528 (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMGetPointerInputType @ 0x1400D98BC (RIMGetPointerInputType.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C3C (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x140104848 (RIMCmGetButtonContact.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011853C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1401838DC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019BC10 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401DCE20 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F5628 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // r12d
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ebx
  __int64 active; // rax
  __int64 v13; // xmm1_8
  int *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  _UNKNOWN **v20; // rcx
  int v21; // ebx
  int v22; // edi
  int v23; // esi
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  __int64 ButtonContact; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  char v31; // bl
  bool v32; // di
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char v36; // bl
  bool v37; // di
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  bool v41; // bl
  bool v42; // di
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rcx
  char v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  int v53; // [rsp+28h] [rbp-81h]
  unsigned int v54; // [rsp+60h] [rbp-49h]
  int v55; // [rsp+64h] [rbp-45h]
  LARGE_INTEGER v56; // [rsp+68h] [rbp-41h]
  __int64 v57; // [rsp+70h] [rbp-39h]
  __int128 v58; // [rsp+78h] [rbp-31h] BYREF
  __int64 v59; // [rsp+88h] [rbp-21h]
  unsigned __int64 v60; // [rsp+90h] [rbp-19h]
  __int128 v61; // [rsp+98h] [rbp-11h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-1h]
  __int128 v63; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v64; // [rsp+C0h] [rbp+17h]
  char v65; // [rsp+118h] [rbp+6Fh]
  bool v67; // [rsp+128h] [rbp+7Fh]

  v55 = 0;
  v5 = 0;
  v6 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v56 = PerformanceCounter;
  v8 = ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v57 = *(_QWORD *)(a2 + 872) + 1LL;
  v54 = *(_DWORD *)(a2 + 844) + 1;
  v9 = (v8 + ((unsigned __int64)(500 * gliQpcFreq.QuadPart - v8) >> 1)) >> 9;
  v60 = v9;
  if ( !*(_DWORD *)(W32GetUserSessionState(v10, v8) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 556LL);
  v11 = RIMGetPointerInputType(a2);
  if ( v11 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v58, a2);
    v13 = *(_QWORD *)(active + 16);
    v63 = *(_OWORD *)active;
    v64 = v13;
    RIMCmActiveContactsEnd(&v61, a2);
    v58 = v61;
    v59 = v62;
    if ( (unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v63, &v58) )
    {
      while ( 1 )
      {
        v14 = (int *)(v64 - 16);
        if ( (*(_DWORD *)(v64 - 16 + 32) & 2) == 0 )
          __int2c();
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v64 - 16) )
        {
          if ( *(_DWORD *)(W32GetUserSessionState(v16, v15) + 244) != 3
            || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
            || (v17 = *((_QWORD *)v14 + 7), v56.QuadPart <= v17 + v9)
            || !v17 )
          {
            if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v14 + 668, a2, a3, 0LL) )
            {
              if ( !v5 )
              {
                RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
                if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                      a1,
                                      *(_QWORD *)(a2 + 16),
                                      (LARGE_INTEGER)v56.QuadPart) )
                  return 0;
                v55 = 1;
              }
              RIMCmAddContactSuppressionReasons(a2, v14, 1LL);
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v19 = 0;
              }
              v20 = &WPP_RECORDER_INITIALIZED;
              v65 = v19;
              v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v21 = v14[671];
                v22 = v14[2];
                v23 = *v14;
                LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                UserSessionState = W32GetUserSessionState(v20, v18);
                LOBYTE(v25) = v67;
                LOBYTE(v26) = v65;
                WPP_RECORDER_AND_TRACE_SF_dDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v26,
                  v25,
                  *(_QWORD *)(UserSessionState + 19336),
                  4,
                  v53,
                  16,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v23,
                  v22,
                  v21);
                v9 = v60;
              }
              RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v14, v57, v54, 1);
              v5 = v55;
            }
          }
        }
        RIMCmActiveContactsNext(a2, &v63);
        RIMCmActiveContactsEnd(&v61, a2);
        v58 = v61;
        v59 = v62;
        if ( !(unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v63, &v58) )
        {
          PerformanceCounter = v56;
          break;
        }
      }
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed(a1, a2, v5) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v28, ButtonContact, 1LL);
      if ( v5 )
      {
        v41 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
          LOBYTE(v44) = v42;
          LOBYTE(v45) = v41;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v45,
            v44,
            *(_QWORD *)(v43 + 19336),
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
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v31 = 0;
          }
          v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
            LOBYTE(v34) = v32;
            LOBYTE(v35) = v31;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v35,
              v34,
              *(_QWORD *)(v33 + 19336),
              4,
              1,
              17,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
          return 0;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v36 = 0;
        }
        v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v38 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
          LOBYTE(v39) = v37;
          LOBYTE(v40) = v36;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v40,
            v39,
            *(_QWORD *)(v38 + 19336),
            4,
            1,
            18,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v57, v54, 1);
      }
    }
    else if ( !v5 )
    {
      return v6;
    }
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v57, v54);
    v6 = RIMCompletePointerDeviceFrame(a1);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v46 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v46 & 1) == 0)
      || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v47 = 0;
    }
    v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = W32GetUserSessionState(v46, WPP_GLOBAL_Control);
      LOBYTE(v50) = v48;
      LOBYTE(v51) = v47;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 19336),
        4,
        1,
        20,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
        v6);
    }
  }
  return v6;
}
