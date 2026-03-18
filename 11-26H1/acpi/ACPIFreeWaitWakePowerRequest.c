/*
 * XREFs of ACPIFreeWaitWakePowerRequest @ 0x140033B30
 * Callers:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032B58 (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ACPIDelayedFreeWakeInterrupt @ 0x14005092C (ACPIDelayedFreeWakeInterrupt.c)
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ACPIFreeWaitWakePowerRequest(unsigned __int64 Entry)
{
  unsigned int v1; // edi
  unsigned int **v2; // r14
  unsigned int *v4; // rsi
  unsigned int *v5; // r15
  __int64 v6; // rbp
  int IsEnabledDeviceUsageNoInline; // eax
  struct _EX_RUNDOWN_REF *v8; // rcx

  v1 = *(_DWORD *)(Entry + 116);
  v2 = (unsigned int **)(Entry + 152);
  if ( v1 <= 1 )
  {
    v4 = (unsigned int *)(Entry + 152);
    if ( !v1 )
      goto LABEL_8;
  }
  else
  {
    v4 = *v2;
  }
  v5 = v4 + 6;
  v6 = *(unsigned int *)(Entry + 116);
  do
  {
    IsEnabledDeviceUsageNoInline = Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline();
    ACPIDelayedFreeWakeInterrupt(Entry & -(__int64)(IsEnabledDeviceUsageNoInline != 0), *v5, *((_QWORD *)v5 + 1));
    v5 += 10;
    --v6;
  }
  while ( v6 );
  if ( v1 > 1 )
  {
    ExFreePoolWithTag(v4, 0x50706341u);
    *v2 = 0LL;
  }
LABEL_8:
  v8 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(Entry + 40) + 1000LL);
  *(_DWORD *)(Entry + 116) = 0;
  ExReleaseRundownProtection(v8);
  ExFreeToNPagedLookasideList(&RequestLookAsideList, (PVOID)Entry);
}
