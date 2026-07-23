/*
 * XREFs of PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407E2184
 * Callers:
 *     PopSessionConnectedV2 @ 0x1407E2424 (PopSessionConnectedV2.c)
 *     PopAdaptiveWnfCallback @ 0x140B4F200 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnected @ 0x140B77568 (PopSessionConnected.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x1407D5A74 (PopDiagTraceAdaptiveOverrideTriggered.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideTrigger(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r10

  v4 = 3LL * a2;
  byte_140F0C080[8 * v4] = 1;
  *(_QWORD *)&byte_140F0C080[8 * v4 + 8] = a1;
  *(_DWORD *)&byte_140F0C080[8 * v4 + 16] = a3;
  *(_DWORD *)&byte_140F0C080[8 * v4 + 20] = a4;
  PopDiagTraceAdaptiveOverrideTriggered();
}
