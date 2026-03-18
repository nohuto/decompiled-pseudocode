/*
 * XREFs of ?DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ @ 0x1403FC8BC
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403FC880 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent(void)
{
  if ( (unsigned int)++dword_140168A84 <= 4 )
    return 1;
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - qword_140168A88) > 0xC92A69C000LL )
  {
    qword_140168A88 = MEMORY[0xFFFFF78000000014];
    return 1;
  }
  return 0;
}
