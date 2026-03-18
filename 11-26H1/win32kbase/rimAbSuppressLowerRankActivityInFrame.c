/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x140075964
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140072854 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x140077904 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1400779A8 (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1400F8450 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     RIMCmGetButtonContact @ 0x1400FA6B8 (RIMCmGetButtonContact.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 *     RIMUpdatePrimaryDevice @ 0x14013B858 (RIMUpdatePrimaryDevice.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1401417DC (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1401597AC (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1401741CC (RIMResetPointerDevicePrimaryContact.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMSetContactEndState @ 0x14019D4A8 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  int v4; // r12d
  unsigned int v5; // edi
  unsigned __int64 v7; // r13
  int v8; // ecx
  int v9; // r8d
  __int64 **v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 *v13; // xmm1_8
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 *v16; // r14
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edx
  int v23; // r8d
  char v24; // r15
  bool v25; // r12
  int v26; // ebx
  int v27; // edi
  int v28; // esi
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  char v32; // r15
  bool v33; // r12
  int v34; // ebx
  int v35; // edi
  int v36; // esi
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 ButtonContact; // rsi
  __int64 v41; // rcx
  int v42; // ecx
  int v43; // r8d
  char v44; // bl
  bool v45; // di
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  int v49; // [rsp+28h] [rbp-D0h]
  int v50; // [rsp+70h] [rbp-88h]
  LARGE_INTEGER PerformanceCounter; // [rsp+78h] [rbp-80h]
  __int128 v52; // [rsp+80h] [rbp-78h] BYREF
  __int64 *v53; // [rsp+90h] [rbp-68h]
  __int64 *v54; // [rsp+98h] [rbp-60h] BYREF
  int v56; // [rsp+108h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 872);
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 844);
  v50 = v2;
  v5 = 0;
  v56 = v4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = 500 * gliQpcFreq.QuadPart / 0x3E8uLL;
  if ( !*(_DWORD *)(W32GetUserSessionState(
                      v8,
                      ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64,
                      v9)
                  + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 858LL);
  v10 = RIMCmActiveContactsBeginNoButton(&v54, a2);
  v13 = v10[2];
  v52 = *(_OWORD *)v10;
  v53 = v13;
  while ( 1 )
  {
    v14 = (_QWORD *)(a2 + 1000);
    if ( !*(_DWORD *)(a2 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
    if ( !*v14 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    if ( !*(_DWORD *)(a2 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    if ( DWORD2(v52) == *(_DWORD *)(a2 + 1008)
      && v53 == (__int64 *)(*(_QWORD *)(a2 + 1000) + 16LL * *(unsigned int *)(a2 + 1008))
      && (_QWORD *)v52 == v14 )
    {
      break;
    }
    v15 = *((_DWORD *)v53 + 4);
    v16 = v53 - 2;
    if ( (v15 & 2) == 0 )
      __int2c();
    if ( (v15 & 4) != 0 )
      __int2c();
    if ( (*((_DWORD *)v16 + 591) & 1) != 0 && (*((_DWORD *)v16 + 611) & 2) != 0 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(2, v11, v12) + 244) != 3
        || !(unsigned int)RIMIsTouchPointerDevice(a2)
        || (v18 = v16[7], PerformanceCounter.QuadPart <= v18 + v7)
        || !v18 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(v3, a2, v16 + 304)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(v3, a2, v16 + 304)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, v16) )
        {
          RIMCmAddContactSuppressionReasons(a2, v16, 1LL);
          if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v16, v19, v20, v21) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v24 = 0;
            }
            v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = *((_DWORD *)v16 + 671);
              v27 = *((_DWORD *)v16 + 2);
              v28 = *(_DWORD *)v16;
              UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
              LOBYTE(v30) = v25;
              LOBYTE(v31) = v24;
              WPP_RECORDER_AND_TRACE_SF_dDD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v31,
                v30,
                *(_QWORD *)(UserSessionState + 19368),
                4,
                v49,
                25,
                (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                v28,
                v27,
                v26);
              v3 = a1;
            }
            LODWORD(v2) = v50;
            v4 = v56;
            RIMSetContactEndState(a2, (_DWORD)v16, v50, v56, 1);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v32 = 0;
            }
            v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v34 = *((_DWORD *)v16 + 671);
              v35 = *((_DWORD *)v16 + 2);
              v36 = *(_DWORD *)v16;
              v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
              LOBYTE(v38) = v33;
              LOBYTE(v39) = v32;
              WPP_RECORDER_AND_TRACE_SF_dDD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v39,
                v38,
                *(_QWORD *)(v37 + 19368),
                4,
                v49,
                26,
                (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                v36,
                v35,
                v34);
              v3 = a1;
            }
            *((_DWORD *)v16 + 591) &= ~1u;
            if ( (v16[4] & 8) != 0 )
            {
              if ( *(__int64 **)(a2 + 1024) != v16 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 941LL);
              RIMResetPointerDevicePrimaryContact(a2);
              if ( (*(_DWORD *)(a2 + 368) & 1) != 0 )
              {
                if ( *(_QWORD *)(v3 + 480) != a2 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 946LL);
                RIMUpdatePrimaryDevice(v3, 0LL);
              }
            }
            LODWORD(v2) = v50;
            v4 = v56;
          }
          v5 = 1;
        }
      }
    }
    RIMCmActiveContactsNext(a2, (__int64 **)&v52);
  }
  result = rimAbShouldButtonContactBeSuppressed(v3, a2, v5);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    RIMCmAddContactSuppressionReasons(v41, ButtonContact, 1LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v42 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v42 & 1) == 0)
      || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v44 = 0;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v46 = W32GetUserSessionState(v42, (_DWORD)WPP_GLOBAL_Control, v43);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 19368),
        4,
        1,
        27,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), ButtonContact, v2, v4, 1);
  }
  return result;
}
