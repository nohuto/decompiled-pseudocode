/*
 * XREFs of ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1401B3368
 * Callers:
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 *     CitEnableKeyboardDelegation @ 0x1401B3410 (CitEnableKeyboardDelegation.c)
 * Callees:
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1400D5DD4 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CitpClearDelegation(struct _CIT_PROCESS *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax

  if ( CitpProcessInfoIsValid(a1) )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( v3 )
    {
      if ( *(_QWORD *)(v3 + 24) != v2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3835LL);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = 0LL;
    }
    v4 = *((_QWORD *)a1 + 3);
    if ( v4 )
    {
      if ( *(struct _CIT_PROCESS **)(v4 + 16) != a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3842LL);
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = 0LL;
    }
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
