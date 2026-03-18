/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x140073934
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x140072854 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmGetButtonContact @ 0x1400FA6B8 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  _QWORD *v5; // rcx
  __int64 v6; // rdi
  _QWORD *v8; // rbx
  unsigned int v9; // ecx
  char v10; // bl
  bool v11; // si
  __int64 v13; // rax
  __int64 **v14; // rax
  int v15; // edx
  int v16; // r8d
  _QWORD *v17; // r14
  __int64 *v18; // xmm1_8
  __int64 *v19; // rsi
  _OWORD *v20; // r15
  _OWORD *v21; // rdx
  _OWORD *v22; // r15
  __int64 ButtonContact; // rsi
  _OWORD *v24; // rax
  int v25; // r14d
  int v26; // r15d
  bool v27; // bl
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  __int128 v35; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v36; // [rsp+70h] [rbp+7h]
  __int64 *v37; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a2 + 456);
  v5 = (_QWORD *)(a1 + 728);
  v6 = a3;
  v8 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_50:
    v8 = 0LL;
  }
  else
  {
    while ( v8[3] != *(_QWORD *)(a2 + 16) )
    {
      v8 = (_QWORD *)*v8;
      if ( v8 == v5 )
        goto LABEL_50;
    }
  }
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 640LL);
  if ( !v8 )
    return 0LL;
  if ( !*((_DWORD *)v8 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 647LL);
  if ( *((_DWORD *)v8 + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 648LL);
  if ( *((_DWORD *)v8 + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 649LL);
  if ( v8[9] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 650LL);
  if ( !(_DWORD)v6 || (v9 = 192 * v6, (unsigned __int64)(192 * v6) > 0xFFFFFFFF) || !v9 )
  {
    v8[9] = 0LL;
    goto LABEL_17;
  }
  v13 = Win32AllocPoolZInitImpl(256LL, v9, 0x65707352u);
  v8[9] = v13;
  if ( !v13 )
  {
LABEL_17:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v33) = v11;
      LOBYTE(v34) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        46,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
    }
    return 0LL;
  }
  *((_DWORD *)v8 + 10) = v6;
  if ( *((_DWORD *)v8 + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 661LL);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    if ( (*(_DWORD *)(ButtonContact + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 667LL);
    if ( (*(_DWORD *)(ButtonContact + 32) & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 668LL);
    if ( (*(_DWORD *)(ButtonContact + 2444) & 0x2000) != 0 )
    {
      if ( v8[10] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 671LL);
      v8[10] = v8[9];
    }
    v24 = (_OWORD *)v8[9];
    *v24 = *(_OWORD *)(ButtonContact + 2416);
    v24[1] = *(_OWORD *)(ButtonContact + 2432);
    v24[2] = *(_OWORD *)(ButtonContact + 2448);
    v24[3] = *(_OWORD *)(ButtonContact + 2464);
    v24[4] = *(_OWORD *)(ButtonContact + 2480);
    v24[5] = *(_OWORD *)(ButtonContact + 2496);
    v24[6] = *(_OWORD *)(ButtonContact + 2512);
    v24 += 8;
    *(v24 - 1) = *(_OWORD *)(ButtonContact + 2528);
    *v24 = *(_OWORD *)(ButtonContact + 2544);
    v24[1] = *(_OWORD *)(ButtonContact + 2560);
    v24[2] = *(_OWORD *)(ButtonContact + 2576);
    v24[3] = *(_OWORD *)(ButtonContact + 2592);
    *((_DWORD *)v8 + 11) = 1;
  }
  else
  {
    v14 = RIMCmActiveContactsBeginNoButton(&v37, v4);
    v17 = (_QWORD *)(v4 + 1000);
    v18 = v14[2];
    v35 = *(_OWORD *)v14;
    v36 = v18;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v4 + 1008) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
      if ( !*v17 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
      if ( !*(_DWORD *)(v4 + 1008) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
      v19 = v36;
      if ( DWORD2(v35) == *(_DWORD *)(v4 + 1008)
        && v36 == (__int64 *)(*(_QWORD *)(v4 + 1000) + 16LL * *(unsigned int *)(v4 + 1008))
        && (_QWORD *)v35 == v17 )
      {
        break;
      }
      v20 = v36 + 300;
      if ( (v36[2] & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 686LL);
      if ( (v19[2] & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 687LL);
      if ( (*((_DWORD *)v19 + 587) & 1) != 0 )
      {
        if ( (*((_DWORD *)v19 + 607) & 0x2000) != 0 )
        {
          if ( v8[10] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 700LL);
          v8[10] = v8[9] + 192LL * *((unsigned int *)v8 + 11);
        }
        v21 = (_OWORD *)(v8[9] + 192LL * *((unsigned int *)v8 + 11));
        *v21 = *v20;
        v21[1] = *((_OWORD *)v19 + 151);
        v21[2] = *((_OWORD *)v19 + 152);
        v21[3] = *((_OWORD *)v19 + 153);
        v21[4] = *((_OWORD *)v19 + 154);
        v21[5] = *((_OWORD *)v19 + 155);
        v21[6] = *((_OWORD *)v19 + 156);
        v21 += 8;
        v22 = v20 + 8;
        *(v21 - 1) = *((_OWORD *)v19 + 157);
        *v21 = *v22;
        v21[1] = v22[1];
        v21[2] = v22[2];
        v21[3] = v22[3];
        ++*((_DWORD *)v8 + 11);
      }
      RIMCmActiveContactsNext(v4, &v35);
    }
  }
  v25 = *((_DWORD *)v8 + 10);
  v26 = *((_DWORD *)v8 + 11);
  if ( v26 != v25 )
  {
    v27 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 19368),
        4,
        1,
        47,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        v26,
        v25);
    }
    return 0LL;
  }
  return 1LL;
}
