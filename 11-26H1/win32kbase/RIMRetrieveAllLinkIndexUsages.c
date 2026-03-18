/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1401706F8
 * Callers:
 *     RIMIsParallelDevice @ 0x1401703D8 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x14020569C (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // r8
  struct _HIDP_VALUE_CAPS *ValueCaps; // rax
  char v17; // di
  bool v18; // si
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  NTSTATUS SpecificButtonCaps; // eax
  struct _HIDP_BUTTON_CAPS *v23; // rax
  __int16 PreparsedData; // [rsp+30h] [rbp-38h]

  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1641LL);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1642LL);
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, 0LL, a3, a2);
  v14 = SpecificValueCaps;
  if ( SpecificValueCaps == 1114112 )
  {
    v15 = 1654LL;
LABEL_7:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v15);
    return v14;
  }
  if ( SpecificValueCaps == -1072627705 )
  {
    if ( !*a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1657LL);
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * *a3, 0x63767352u);
    *a4 = (char *)ValueCaps;
    if ( !ValueCaps )
      goto LABEL_35;
    v14 = HidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, ValueCaps, a3, a2);
    if ( v14 != 1114112 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v17 = 0;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v21 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12) + 19368);
      PreparsedData = 27;
      goto LABEL_20;
    }
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, 0LL, ButtonCapsLength, a2);
    v14 = SpecificButtonCaps;
    if ( SpecificButtonCaps == 1114112 )
    {
      v15 = 1684LL;
      goto LABEL_7;
    }
    if ( SpecificButtonCaps == -1072627705 )
    {
      if ( !*ButtonCapsLength )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1687LL);
      v23 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * *ButtonCapsLength, 0x63767352u);
      *a6 = (char *)v23;
      if ( v23 )
      {
        v14 = HidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, v23, ButtonCapsLength, a2);
        if ( v14 == 1114112 )
          return v14;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v17 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v21 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12) + 19368);
        PreparsedData = 28;
LABEL_20:
        LOBYTE(v20) = v18;
        LOBYTE(v19) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v20,
          v21,
          3,
          1,
          PreparsedData,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
        goto LABEL_36;
      }
LABEL_35:
      v14 = -1073741801;
    }
  }
LABEL_36:
  if ( *a4 )
  {
    GreDeleteFastMutex(*a4, v11, v12, v13);
    *a4 = 0LL;
  }
  if ( *a6 )
  {
    GreDeleteFastMutex(*a6, v11, v12, v13);
    *a6 = 0LL;
  }
  return v14;
}
