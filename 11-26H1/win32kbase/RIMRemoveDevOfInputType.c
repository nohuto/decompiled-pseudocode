/*
 * XREFs of RIMRemoveDevOfInputType @ 0x140092B8C
 * Callers:
 *     RIMRemoveInputOfType @ 0x140092800 (RIMRemoveInputOfType.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 *     rimOnPnpRemoveComplete @ 0x1400930E8 (rimOnPnpRemoveComplete.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1401809D0 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(struct RawInputManagerObject *a1, int a2)
{
  __int64 *i; // rdi
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rbx

LABEL_1:
  for ( i = (__int64 *)((char *)a1 + 424); *i; i = (__int64 *)(v5 + 40) )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(*i, *(unsigned int *)(*i + 48)) & a2) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 168);
      if ( (v6 & 0x2000) == 0 )
      {
        *(_DWORD *)(v5 + 168) = v6 | 8;
        rimOnPnpRemoveComplete(a1, *i);
        if ( *(_QWORD *)(*i + 232) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1037LL);
        v7 = *i;
        *i = *(_QWORD *)(*i + 40);
        *(_QWORD *)(v7 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v7);
        rimDoRimDevChange(a1, v7, 3LL);
        RIMFreeSpecificDev(a1, v7);
        goto LABEL_1;
      }
    }
  }
  return 0LL;
}
