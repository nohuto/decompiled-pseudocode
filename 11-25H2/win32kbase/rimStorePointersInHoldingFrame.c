/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x140182660
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x14002EF30 (rimFindHoldingFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1400327B0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400CDA28 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmGetButtonContact @ 0x140104848 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *HoldingFrame; // rbx
  int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 ButtonContact; // r14
  _OWORD *v14; // rax
  __int64 active; // rax
  __int64 v16; // xmm1_8
  __int64 v17; // rsi
  __int64 v18; // r14
  _OWORD *v19; // rdx
  __int128 v20; // xmm1
  _OWORD *v21; // r14
  int v22; // r14d
  int v23; // r15d
  char v24; // bl
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v30; // bl
  bool v31; // si
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  __int128 v35; // [rsp+58h] [rbp-21h] BYREF
  __int64 v36; // [rsp+68h] [rbp-11h]
  __int128 v37; // [rsp+70h] [rbp-9h] BYREF
  __int64 i; // [rsp+80h] [rbp+7h]
  __int128 v39; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v40; // [rsp+98h] [rbp+1Fh]

  v4 = *(_QWORD *)(a2 + 456);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 648LL);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 655LL);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 656LL);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 657LL);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 658LL);
  if ( !(_DWORD)v6 || (v10 = 192 * v6, (unsigned __int64)(192 * v6) > 0xFFFFFFFF) || !v10 )
  {
    HoldingFrame[9] = 0LL;
LABEL_50:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v30 = 0;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        46,
        (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids);
    }
    return 0LL;
  }
  v11 = Win32AllocPoolZInitImpl(256LL, v10, 0x65707352u);
  HoldingFrame[9] = v11;
  if ( !v11 )
    goto LABEL_50;
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 669LL);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    if ( (*(_DWORD *)(ButtonContact + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 675LL);
    if ( (*(_DWORD *)(ButtonContact + 32) & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 676LL);
    if ( (*(_DWORD *)(ButtonContact + 2444) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 679LL);
      HoldingFrame[10] = HoldingFrame[9];
    }
    v14 = (_OWORD *)HoldingFrame[9];
    *v14 = *(_OWORD *)(ButtonContact + 2416);
    v14[1] = *(_OWORD *)(ButtonContact + 2432);
    v14[2] = *(_OWORD *)(ButtonContact + 2448);
    v14[3] = *(_OWORD *)(ButtonContact + 2464);
    v14[4] = *(_OWORD *)(ButtonContact + 2480);
    v14[5] = *(_OWORD *)(ButtonContact + 2496);
    v14[6] = *(_OWORD *)(ButtonContact + 2512);
    v14 += 8;
    *(v14 - 1) = *(_OWORD *)(ButtonContact + 2528);
    *v14 = *(_OWORD *)(ButtonContact + 2544);
    v14[1] = *(_OWORD *)(ButtonContact + 2560);
    v14[2] = *(_OWORD *)(ButtonContact + 2576);
    v14[3] = *(_OWORD *)(ButtonContact + 2592);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton((__int64)&v37, v4);
    v16 = *(_QWORD *)(active + 16);
    v39 = *(_OWORD *)active;
    v40 = v16;
    RIMCmActiveContactsEnd((__int64)&v35, v4);
    v37 = v35;
    for ( i = v36; tagLIST_TABLE_ITERATOR::operator!=((__int64)&v39, (__int64)&v37); i = v36 )
    {
      v17 = v40;
      v18 = v40 + 2400;
      if ( (*(_DWORD *)(v40 + 16) & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 694LL);
      if ( (*(_DWORD *)(v17 + 16) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 695LL);
      if ( (*(_DWORD *)(v17 + 2348) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v18 + 28) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 708LL);
          HoldingFrame[10] = HoldingFrame[9] + 192LL * *((unsigned int *)HoldingFrame + 11);
        }
        v19 = (_OWORD *)(HoldingFrame[9] + 192LL * *((unsigned int *)HoldingFrame + 11));
        *v19 = *(_OWORD *)v18;
        v19[1] = *(_OWORD *)(v18 + 16);
        v19[2] = *(_OWORD *)(v18 + 32);
        v19[3] = *(_OWORD *)(v18 + 48);
        v19[4] = *(_OWORD *)(v18 + 64);
        v19[5] = *(_OWORD *)(v18 + 80);
        v19[6] = *(_OWORD *)(v18 + 96);
        v19 += 8;
        v20 = *(_OWORD *)(v18 + 112);
        v21 = (_OWORD *)(v18 + 128);
        *(v19 - 1) = v20;
        *v19 = *v21;
        v19[1] = v21[1];
        v19[2] = v21[2];
        v19[3] = v21[3];
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v39);
      RIMCmActiveContactsEnd((__int64)&v35, v4);
      v37 = v35;
    }
  }
  v22 = *((_DWORD *)HoldingFrame + 11);
  v23 = *((_DWORD *)HoldingFrame + 10);
  if ( v22 == v23 )
    return 1LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v24 = 0;
  }
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v24;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v27,
      *(_QWORD *)(v26 + 19336),
      4,
      1,
      47,
      (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
      v22,
      v23);
  }
  return 0LL;
}
