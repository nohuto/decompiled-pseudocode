/*
 * XREFs of ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140118714
 * Callers:
 *     HMUnlockDestroyObject @ 0x140118670 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1401186A0 (HMDestroyObject.c)
 * Callees:
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14016E984 (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B34C0 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 *     Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline @ 0x1401B34F8 (Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall HMMarkObjectDestroyWorker(struct _HEAD *a1, int a2, int a3)
{
  __int64 v4; // rbx
  char v5; // al

  v4 = HMPheFromObjectWorker(a1, a2, a3);
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline() )
  {
    CheckForDoubleFree((struct _HANDLEENTRY *)v4, a1);
  }
  else if ( (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_BYTE *)(v4 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3056LL);
    if ( (HIWORD(*(_DWORD *)a1) & 0x7FFF) != *(_WORD *)(v4 + 26) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3057LL);
  }
  v5 = *(_BYTE *)(v4 + 25) | 1;
  *(_BYTE *)(v4 + 25) = v5;
  if ( !*((_DWORD *)a1 + 2) )
    return 1LL;
  *(_BYTE *)(v4 + 25) = v5 & 0xFD;
  return 0LL;
}
