/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1401D5944
 * Callers:
 *     RIMRemoveInputOfType @ 0x14002D000 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x14002E724 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     rimResetPnpRemovePendingStateBits @ 0x140144ED0 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeSpecificDev @ 0x1401D5330 (RIMFreeSpecificDev.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(struct RawInputManagerObject *a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // r8
  int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx

  v3 = (__int64 *)((char *)a1 + 424);
LABEL_2:
  v5 = *v3;
  v6 = v3;
  while ( v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v5, *(_DWORD *)(v5 + 48)) & a2) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 168);
      if ( (v8 & 0x2000) == 0 )
      {
        *(_DWORD *)(v7 + 168) = v8 | 8;
        rimOnPnpRemoveComplete((char)a1, *v6);
        if ( *(_QWORD *)(*v6 + 232) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1040);
        v11 = *v6;
        *v6 = *(_QWORD *)(*v6 + 40);
        *(_QWORD *)(v11 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v11, v10);
        rimDoRimDevChange((__int64)a1, v11, 3u);
        RIMFreeSpecificDev(a1, v11);
        goto LABEL_2;
      }
    }
    v6 = (__int64 *)(v7 + 40);
    v5 = *(_QWORD *)(v7 + 40);
  }
  return 0LL;
}
