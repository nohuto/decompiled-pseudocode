/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x14003065C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x140032890 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400CDA28 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1400D976C (RIMCmIsContactSuppressed.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFC80 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x140105AF8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x14011853C (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x14017F718 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x140185984 (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1401DC9D4 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1401DCBA4 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1401DD3E0 (rimAbRemoveGlobalPenDeadzone.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1401F56A4 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 active; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  __int64 result; // rax
  int *v10; // r14
  __int64 v11; // rsi
  int v12; // ecx
  __int64 v13; // rdx
  char v14; // bl
  bool v15; // di
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  char v20; // bl
  bool v21; // di
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ebx
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  char v33; // r15
  bool v34; // r12
  int v35; // ebx
  int v36; // edi
  int v37; // esi
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // xmm1_8
  int v43; // [rsp+28h] [rbp-91h]
  __int128 v44; // [rsp+80h] [rbp-39h] BYREF
  __int64 v45; // [rsp+90h] [rbp-29h]
  __int128 v46; // [rsp+98h] [rbp-21h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-11h]
  _BYTE v48[96]; // [rsp+B0h] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a2 + 456);
  v3 = a2;
  v4 = a1;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 715LL);
  active = RIMCmActiveContactsBegin(v48, v2);
  v6 = *(_QWORD *)(active + 16);
  v46 = *(_OWORD *)active;
  v47 = v6;
  v7 = RIMCmActiveContactsEnd(v48, v2);
  v8 = *(_QWORD *)(v7 + 16);
  v44 = *(_OWORD *)v7;
  v45 = v8;
  result = tagLIST_TABLE_ITERATOR::operator!=(&v46, &v44);
  while ( (_BYTE)result )
  {
    v10 = (int *)(v47 - 16);
    v11 = v47 - 16 + 2432;
    if ( (*(_DWORD *)(v47 - 16 + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 729LL);
    if ( (v10[591] & 1) == 0 )
      goto LABEL_71;
    v12 = *(_DWORD *)(v2 + 24);
    if ( (unsigned int)(v12 - 5) <= 1 )
    {
      if ( (v10[8] & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 740LL);
      if ( (*(_DWORD *)(v11 + 12) & 2) != 0 )
      {
        if ( *(_DWORD *)(v4 + 492) )
        {
          rimAbRemoveGlobalPenDeadzone(v4);
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v20 = 0;
          }
          v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
            LOBYTE(v23) = v21;
            LOBYTE(v24) = v20;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v24,
              v23,
              *(_QWORD *)(UserSessionState + 19336),
              4,
              1,
              21,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
        }
      }
      else
      {
        rimAbCreateGlobalPenDeadzone(v4, v2 + 156, v11);
      }
    }
    else if ( (unsigned int)(v12 - 1) <= 3 )
    {
      if ( (v10[8] & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 761LL);
      if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(v4, *(_QWORD *)(v3 + 456) + 156LL, v11) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v14 = 0;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(v16 + 19336),
            4,
            1,
            22,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        if ( !*(_DWORD *)(v4 + 492) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 771LL);
        *(_DWORD *)(v4 + 704) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                              + 250;
      }
    }
    if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v10) )
    {
      v27 = *(_DWORD *)(v11 + 12);
      v28 = 0;
      if ( (v27 & 2) == 0 )
      {
        if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v10) && (v10[8] & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 809LL);
LABEL_55:
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v33 = 0;
        }
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = v10[671];
          v36 = v10[2];
          v37 = *v10;
          v38 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
          LOBYTE(v39) = v34;
          LOBYTE(v40) = v33;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v40,
            v39,
            *(_QWORD *)(v38 + 19336),
            4,
            v43,
            24,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
            v37,
            v36,
            v35);
        }
        if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v10) && (v10[8] & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 825LL);
        v4 = a1;
LABEL_70:
        v10[591] &= ~1u;
        goto LABEL_71;
      }
      if ( (unsigned int)(*(_DWORD *)(v2 + 24) - 5) <= 1 )
      {
        if ( (v27 & 4) != 0 )
          goto LABEL_47;
        if ( (v10[8] & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 795LL);
        if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(v4, v2, v11) )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
          {
            LOBYTE(v28) = 1;
          }
          v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
            LOBYTE(v31) = v29;
            LOBYTE(v32) = v28;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v32,
              v31,
              *(_QWORD *)(v30 + 19336),
              4,
              1,
              23,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
LABEL_47:
          v28 = 1;
        }
      }
      if ( !v28 )
        goto LABEL_55;
      RIMCmRemoveContactSuppressionReasons(v2, v10, 1LL);
      if ( (unsigned int)RIMCmIsContactSuppressed(v10) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 815LL);
      goto LABEL_71;
    }
    if ( (unsigned int)RIMCmIsContactSuppressed(v26)
      && !(unsigned int)RIMCmIsContactDeliveringPointerData(v10)
      && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v10) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 839LL);
      goto LABEL_70;
    }
LABEL_71:
    RIMCmActiveContactsNext(v2, &v46);
    v41 = RIMCmActiveContactsEnd(v48, v2);
    v42 = *(_QWORD *)(v41 + 16);
    v44 = *(_OWORD *)v41;
    v45 = v42;
    result = tagLIST_TABLE_ITERATOR::operator!=(&v46, &v44);
    v3 = a2;
  }
  return result;
}
