/*
 * XREFs of ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x14007F53C
 * Callers:
 *     CitProcessCallout @ 0x14007F1B4 (CitProcessCallout.c)
 *     CitEnableKeyboardDelegation @ 0x140199788 (CitEnableKeyboardDelegation.c)
 * Callees:
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x14007F3CC (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_FixCitInputDelegationAV__private_IsEnabledDeviceUsageNoInline @ 0x140240A2C (Feature_FixCitInputDelegationAV__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CitpClearDelegation(struct _CIT_PROCESS *a1)
{
  __int64 v2; // rcx

  if ( CitpProcessInfoIsValid(a1) )
  {
    if ( *(_QWORD *)(v2 + 16) )
    {
      if ( (unsigned int)Feature_FixCitInputDelegationAV__private_IsEnabledDeviceUsageNoInline()
        && *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 2) + 24LL) != a1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3837LL);
      }
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = 0LL;
    }
    if ( *((_QWORD *)a1 + 3) )
    {
      if ( (unsigned int)Feature_FixCitInputDelegationAV__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 3) + 16LL) != a1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3851LL);
      }
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = 0LL;
    }
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
