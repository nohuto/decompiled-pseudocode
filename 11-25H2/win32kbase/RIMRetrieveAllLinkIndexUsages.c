/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1401E493C
 * Callers:
 *     RIMIsParallelDevice @ 0x14013F814 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1401E4CBC (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        USHORT a1,
        struct _HIDP_PREPARSED_DATA *a2,
        USHORT *a3,
        char **a4,
        USHORT *ButtonCapsLength,
        char **a6)
{
  NTSTATUS SpecificValueCaps; // eax
  unsigned int v11; // ebx
  int v12; // r8d
  struct _HIDP_VALUE_CAPS *ValueCaps; // rax
  __int64 v14; // rdx
  char v15; // di
  bool v16; // si
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  NTSTATUS SpecificButtonCaps; // eax
  struct _HIDP_BUTTON_CAPS *v21; // rax
  __int64 v22; // rdx
  __int16 PreparsedData; // [rsp+30h] [rbp-38h]

  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1641);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1642);
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, 0LL, a3, a2);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps == 1114112 )
  {
    v12 = 1654;
LABEL_7:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v12);
    return v11;
  }
  if ( SpecificValueCaps == -1072627705 )
  {
    if ( !*a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1657);
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * *a3, 0x63767352u);
    *a4 = (char *)ValueCaps;
    if ( !ValueCaps )
      goto LABEL_35;
    v11 = HidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, ValueCaps, a3, a2);
    if ( v11 != 1114112 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v15 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v14) + 19336);
      PreparsedData = 27;
      goto LABEL_20;
    }
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, 0LL, ButtonCapsLength, a2);
    v11 = SpecificButtonCaps;
    if ( SpecificButtonCaps == 1114112 )
    {
      v12 = 1684;
      goto LABEL_7;
    }
    if ( SpecificButtonCaps == -1072627705 )
    {
      if ( !*ButtonCapsLength )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1687);
      v21 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * *ButtonCapsLength, 0x63767352u);
      *a6 = (char *)v21;
      if ( v21 )
      {
        v11 = HidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, v21, ButtonCapsLength, a2);
        if ( v11 == 1114112 )
          return v11;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v15 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v22) + 19336);
        PreparsedData = 28;
LABEL_20:
        LOBYTE(v18) = v16;
        LOBYTE(v17) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v18,
          v19,
          3,
          1,
          PreparsedData,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
        goto LABEL_36;
      }
LABEL_35:
      v11 = -1073741801;
    }
  }
LABEL_36:
  if ( *a4 )
  {
    GreDeleteFastMutex(*a4);
    *a4 = 0LL;
  }
  if ( *a6 )
  {
    GreDeleteFastMutex(*a6);
    *a6 = 0LL;
  }
  return v11;
}
