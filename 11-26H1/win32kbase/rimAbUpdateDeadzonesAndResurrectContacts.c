/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMCmActiveContactsBegin @ 0x140075F1C (RIMCmActiveContactsBegin.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x14007613C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x140077904 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14007B5D0 (RIMCmIsContactDeliveringPointerData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1400F85FC (rimAbIsPointInGlobalPenDeadzone.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x14012C300 (RIMCmRemoveContactSuppressionReasons.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1401597AC (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x140163620 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1401A1D6C (rimAbCreateGlobalPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x140203128 (rimAbRemoveGlobalPenDeadzone.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 active; // rax
  __int64 v7; // xmm1_8
  _QWORD *v8; // rbx
  __int64 result; // rax
  int *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r8d
  char v15; // bl
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // edx
  int v21; // r8d
  char v22; // bl
  bool v23; // di
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // edx
  int v28; // r8d
  char v29; // r15
  bool v30; // r12
  int v31; // ebx
  int v32; // edi
  int v33; // esi
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // bl
  bool v38; // di
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // [rsp+28h] [rbp-81h]
  __int128 v43; // [rsp+88h] [rbp-21h] BYREF
  __int64 v44; // [rsp+98h] [rbp-11h]
  _BYTE v45[96]; // [rsp+A0h] [rbp-9h] BYREF

  v3 = *(_QWORD *)(a2 + 456);
  v4 = a2;
  v5 = a1;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 715LL);
  active = RIMCmActiveContactsBegin(v45, v3);
  v7 = *(_QWORD *)(active + 16);
  v43 = *(_OWORD *)active;
  v44 = v7;
  while ( 1 )
  {
    v8 = (_QWORD *)(v3 + 1000);
    if ( !*(_DWORD *)(v3 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
    if ( !*v8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    if ( !*(_DWORD *)(v3 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    result = *(_QWORD *)(v3 + 1000) + 16LL * *(unsigned int *)(v3 + 1008);
    if ( DWORD2(v43) == *(_DWORD *)(v3 + 1008) && v44 == result && (_QWORD *)v43 == v8 )
      return result;
    v10 = (int *)(v44 - 16);
    if ( (*(_DWORD *)(v44 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 729LL);
    if ( (v10[591] & 1) != 0 )
    {
      if ( (unsigned int)RIMIsPenPointerDevice(v3) )
      {
        if ( (v10[8] & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 740LL);
        if ( (v10[611] & 2) != 0 )
        {
          if ( *(_DWORD *)(v5 + 492) )
          {
            rimAbRemoveGlobalPenDeadzone(v5);
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v22 = 0;
            }
            v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v21);
              LOBYTE(v25) = v23;
              LOBYTE(v26) = v22;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v26,
                v25,
                *(_QWORD *)(UserSessionState + 19368),
                4,
                1,
                21,
                (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
            }
          }
        }
        else
        {
          rimAbCreateGlobalPenDeadzone(v5, v3 + 156, v10 + 608);
        }
      }
      else if ( (unsigned int)RIMIsTouchPointerDevice(v11) )
      {
        if ( (v10[8] & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 761LL);
        if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(v5, *(_QWORD *)(v4 + 456) + 156LL, v10 + 608) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v15 = 0;
          }
          v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
            LOBYTE(v18) = v16;
            LOBYTE(v19) = v15;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v19,
              v18,
              *(_QWORD *)(v17 + 19368),
              4,
              1,
              22,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
          if ( !*(_DWORD *)(v5 + 492) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 771LL);
          *(_DWORD *)(v5 + 704) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                + 250;
        }
      }
      if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v10) )
      {
        if ( (v10[611] & 2) == 0 )
        {
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v12) && (v10[8] & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 809LL);
LABEL_51:
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v29 = 0;
          }
          v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v31 = v10[671];
            v32 = v10[2];
            v33 = *v10;
            v34 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v28);
            LOBYTE(v35) = v30;
            LOBYTE(v36) = v29;
            WPP_RECORDER_AND_TRACE_SF_dDD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v36,
              v35,
              *(_QWORD *)(v34 + 19368),
              4,
              v42,
              24,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
              v33,
              v32,
              v31);
          }
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v10) && (v10[8] & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 825LL);
          v5 = a1;
LABEL_59:
          v10[591] &= ~1u;
          goto LABEL_18;
        }
        if ( !(unsigned int)RIMIsPenPointerDevice(v3) )
          goto LABEL_51;
        if ( (v28 & 4) == 0 )
        {
          if ( (v10[8] & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 795LL);
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(v5, v3, v10 + 608) )
            goto LABEL_51;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v37 = 0;
          }
          v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v39 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v28);
            LOBYTE(v40) = v38;
            LOBYTE(v41) = v37;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v41,
              v40,
              *(_QWORD *)(v39 + 19368),
              4,
              1,
              23,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
        }
        RIMCmRemoveContactSuppressionReasons(v3, v10, 1LL);
        if ( (unsigned int)RIMCmIsContactSuppressed(v10) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 815LL);
      }
      else if ( (unsigned int)RIMCmIsContactSuppressed(v12)
             && !(unsigned int)RIMCmIsContactDeliveringPointerData(v10)
             && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v10) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 839LL);
        goto LABEL_59;
      }
    }
LABEL_18:
    RIMCmActiveContactsNext(v3, (__int64 **)&v43);
    v4 = a2;
  }
}
