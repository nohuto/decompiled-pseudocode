/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1400FA16C
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400F977C (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x14007613C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14007B5D0 (RIMCmIsContactDeliveringPointerData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActivateButtonContact @ 0x1400FA578 (RIMCmActivateButtonContact.c)
 *     RIMAddToActiveDevices @ 0x1401317B0 (RIMAddToActiveDevices.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_UNKNOWN **__fastcall rimProcessPointerDeviceButtonContact(
        struct RawInputManagerObject *a1,
        __int64 a2,
        CHAR *a3,
        ULONG a4,
        DWORD a5)
{
  __int64 v5; // rdi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r13
  LARGE_INTEGER *v10; // rbx
  int v11; // ecx
  int v12; // r8d
  bool v13; // si
  bool v14; // bp
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  LONG v18; // esi
  _WORD *v19; // rbp
  ULONG v20; // eax
  __int64 v21; // rdx
  int v22; // r8d
  char v23; // bl
  _UNKNOWN **result; // rax
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  LARGE_INTEGER v29; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-40h]
  ULONG UsageLength; // [rsp+98h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a2 + 456);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 440) + 16LL);
  if ( *(_DWORD *)(v5 + 24) == 7 )
    v10 = *(LARGE_INTEGER **)(v5 + 976);
  else
    v10 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    v11 = *((_DWORD *)WPP_GLOBAL_Control + 11);
    if ( (v11 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v13 = 1;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v11, (_DWORD)WPP_GLOBAL_Control, v12);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      32,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  if ( *(_DWORD *)(v5 + 24) == 7 )
  {
    v18 = 0;
  }
  else
  {
    UsageLength = 0x20000;
    v18 = 0;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 658LL);
  }
  if ( !v10 )
  {
    UsageLength = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 659LL);
  }
  v19 = *(_WORD **)(v5 + 824);
  v20 = *(_DWORD *)(v5 + 1048);
  UsageLength = v20;
  if ( !v19 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3033LL);
    v20 = UsageLength;
  }
  memset(v19, 0, 2LL * v20);
  if ( HidP_GetUsages(HidP_Input, 9u, 0, v19, &UsageLength, PreparsedData, a3, a4) >= 0 )
  {
    if ( UsageLength )
    {
      v21 = UsageLength;
      do
      {
        switch ( *v19 )
        {
          case 1:
            v18 |= 0x16u;
            break;
          case 2:
            v18 |= 0x26u;
            break;
          case 3:
            v18 |= 0x46u;
            break;
        }
        ++v19;
        --v21;
      }
      while ( v21 );
    }
    if ( (v18 & 4) != 0 )
    {
      if ( !__CFSHR__(v10[4].LowPart, 2) )
      {
        RIMCmActivateButtonContact(v5);
        if ( *(_DWORD *)(v5 + 1016) == 1 )
          RIMAddToActiveDevices(a1);
      }
    }
    else if ( __CFSHR__(v10[4].LowPart, 2) )
    {
      v10[295].HighPart |= 4u;
    }
    if ( (v10[4].LowPart & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed((__int64)v10)
       || (unsigned int)RIMCmIsContactDeliveringPointerData((__int64)v10)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly((__int64)v10)) )
    {
      v10[6] = PerformanceCounter;
      v10[302].LowPart = a5;
      v10[304].LowPart = RIMGetPointerInputType(v5, v21, v22);
      v10[305].HighPart = v18;
      v10[312].LowPart = *(_DWORD *)(v5 + 844);
      v10[314] = *(LARGE_INTEGER *)(v5 + 872);
      v29 = *(LARGE_INTEGER *)(((*(_DWORD *)(a2 + 168) & 0x2000 | 0x4000uLL) >> 10) + a2);
      v10[295].HighPart |= 1u;
      v10[306] = v29;
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v23 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v23;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v28,
                          v27,
                          *(_QWORD *)(v26 + 19368),
                          4,
                          1,
                          33,
                          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  return result;
}
