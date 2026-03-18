/*
 * XREFs of ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x14003E754
 * Callers:
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     HMDestroyObject @ 0x1400F6780 (HMDestroyObject.c)
 *     HMUnlockDestroyObject @ 0x14014BE40 (HMUnlockDestroyObject.c)
 * Callees:
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401A4FB0 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 *     Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline @ 0x1401A5210 (Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1401A5264 (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HMMarkObjectDestroyWorker(struct _HEAD *a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // al

  v3 = HMPheFromObjectWorker((int *)a1, a2);
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline() )
  {
    CheckForDoubleFree((struct _HANDLEENTRY *)v3, a1);
  }
  else if ( (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_BYTE *)(v3 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3035LL);
    if ( (HIWORD(*(_DWORD *)a1) & 0x7FFF) != *(_WORD *)(v3 + 26) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3036LL);
  }
  v4 = *(_BYTE *)(v3 + 25) | 1;
  *(_BYTE *)(v3 + 25) = v4;
  if ( !*((_DWORD *)a1 + 2) )
    return 1LL;
  *(_BYTE *)(v3 + 25) = v4 & 0xFD;
  return 0LL;
}
