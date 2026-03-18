/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x14003065C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x1400327B0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400CDA28 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMUpdatePrimaryDevice @ 0x1400D94CC (RIMUpdatePrimaryDevice.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1400D9528 (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C3C (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x140104848 (RIMCmGetButtonContact.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011853C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x14017F520 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x14017F5C8 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x14017F718 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1401838DC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMSetContactEndState @ 0x140183AE0 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1401F18D0 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F5628 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  int v4; // r13d
  unsigned int v5; // r12d
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 active; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rdx
  int *v12; // r15
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // r12
  bool v18; // r13
  int v19; // ebx
  int v20; // edi
  int v21; // esi
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  char v25; // r12
  bool v26; // r13
  int v27; // ebx
  int v28; // edi
  int v29; // esi
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // rcx
  char v38; // bl
  bool v39; // di
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  int v43; // [rsp+28h] [rbp-81h]
  unsigned __int64 v44; // [rsp+60h] [rbp-49h]
  int v45; // [rsp+68h] [rbp-41h]
  __int128 v46; // [rsp+70h] [rbp-39h] BYREF
  __int64 v47; // [rsp+80h] [rbp-29h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-21h]
  __int128 v49; // [rsp+90h] [rbp-19h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-9h]
  __int128 v51; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v52; // [rsp+B8h] [rbp+Fh]
  int v54; // [rsp+118h] [rbp+6Fh]

  v2 = *(_QWORD *)(a2 + 872);
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 844);
  v45 = v2;
  v5 = 0;
  v54 = v4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = 500 * gliQpcFreq.QuadPart / 0x3E8uLL;
  v44 = v7;
  if ( !*(_DWORD *)(W32GetUserSessionState(
                      v8,
                      ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)
                  + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 858LL);
  active = RIMCmActiveContactsBeginNoButton(&v46, a2);
  v10 = *(_QWORD *)(active + 16);
  v51 = *(_OWORD *)active;
  v52 = v10;
  RIMCmActiveContactsEnd(&v49, a2);
  v46 = v49;
  v47 = v50;
  if ( (unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v51, &v46) )
  {
    do
    {
      v12 = (int *)(v52 - 16);
      v13 = *(_DWORD *)(v52 - 16 + 32);
      v14 = v52 - 16 + 2432;
      if ( (v13 & 2) == 0 )
        __int2c();
      if ( (v13 & 4) != 0 )
        __int2c();
      if ( (v12[591] & 1) != 0 && (*(_DWORD *)(v52 - 16 + 2444) & 2) != 0 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(2LL, v11) + 244) != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v15 = *((_QWORD *)v12 + 7), PerformanceCounter.QuadPart <= v15 + v7)
          || !v15 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(v3, a2, v14)
            || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(v3, a2, v14)
            || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, v12) )
          {
            RIMCmAddContactSuppressionReasons(a2, v12, 1LL);
            if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v12) )
            {
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v17 = 0;
              }
              v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v19 = v12[671];
                v20 = v12[2];
                v21 = *v12;
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
                LOBYTE(v23) = v18;
                LOBYTE(v24) = v17;
                WPP_RECORDER_AND_TRACE_SF_dDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v24,
                  v23,
                  *(_QWORD *)(UserSessionState + 19336),
                  4,
                  v43,
                  25,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v21,
                  v20,
                  v19);
                v7 = v44;
                v3 = a1;
              }
              v4 = v54;
              RIMSetContactEndState(a2, (_DWORD)v12, v45, v54, 1);
            }
            else
            {
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v25 = 0;
              }
              v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v27 = v12[671];
                v28 = v12[2];
                v29 = *v12;
                v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
                LOBYTE(v31) = v26;
                LOBYTE(v32) = v25;
                WPP_RECORDER_AND_TRACE_SF_dDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v32,
                  v31,
                  *(_QWORD *)(v30 + 19336),
                  4,
                  v43,
                  26,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v29,
                  v28,
                  v27);
                v7 = v44;
                v3 = a1;
              }
              v12[591] &= ~1u;
              if ( (v12[8] & 8) != 0 )
              {
                if ( *(int **)(a2 + 1024) != v12 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 941LL);
                RIMResetPointerDevicePrimaryContact(a2);
                if ( (*(_DWORD *)(a2 + 368) & 1) != 0 )
                {
                  if ( *(_QWORD *)(v3 + 480) != a2 )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 946LL);
                  RIMUpdatePrimaryDevice(v3, 0LL);
                }
              }
              v4 = v54;
            }
            v5 = 1;
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v51);
      RIMCmActiveContactsEnd(&v49, a2);
      v46 = v49;
      v47 = v50;
    }
    while ( (unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v51, &v46) );
    LODWORD(v2) = v45;
  }
  result = rimAbShouldButtonContactBeSuppressed(v3, a2, v5);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v35 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v36, ButtonContact, 1LL);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v37 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v37 & 1) == 0)
      || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v38 = 0;
    }
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(v37, WPP_GLOBAL_Control);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v42,
        v41,
        *(_QWORD *)(v40 + 19336),
        4,
        1,
        27,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v35, v2, v4, 1);
  }
  return result;
}
