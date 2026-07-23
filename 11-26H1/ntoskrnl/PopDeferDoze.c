/*
 * XREFs of PopDeferDoze @ 0x1407748E0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x140774AE0 (PopDiagTraceDozeDeferralDecision.c)
 *     PopFindPowerSettingConfiguration @ 0x1409FA3F0 (PopFindPowerSettingConfiguration.c)
 *     PopIsDozeSupported @ 0x140B30718 (PopIsDozeSupported.c)
 *     PopIsWakeTimerImminent @ 0x140B6FA00 (PopIsWakeTimerImminent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PopDeferDoze(int a1, int a2, _BYTE *a3)
{
  char v6; // si
  int v7; // ebx
  int v8; // r14d
  int v9; // edi
  char IsDozeSupported; // al
  int v11; // r9d
  char v12; // r10
  int v13; // edx
  int v14; // r12d
  __int64 PowerSettingConfiguration; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  int v19; // ebx
  int v20; // ebp
  char IsWakeTimerImminent; // al
  int v22; // ecx
  int v23; // edi
  PVOID v24; // rbx
  char v26; // [rsp+80h] [rbp+8h]
  __int64 v27; // [rsp+90h] [rbp+18h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  P = 0LL;
  v27 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  IsDozeSupported = PopIsDozeSupported(&PpmIdlePolicyLock.Padding[1]);
  v26 = v12;
  v13 = v11 | 0x10;
  if ( IsDozeSupported )
    v13 = v11;
  v14 = v13 | 0x20;
  if ( *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 88) )
    v14 = v13;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_LEGACY_RTC_MITIGATION, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration )
  {
    v16 = *(_QWORD *)(PowerSettingConfiguration + 64);
    if ( v16 )
    {
      if ( *(_DWORD *)(v16 + 4) >= 4u )
      {
        v17 = *(_QWORD *)(PowerSettingConfiguration + 72);
        v8 = *(_DWORD *)(v16 + 12);
        if ( v17 )
        {
          if ( *(_DWORD *)(v17 + 4) >= 4u )
          {
            v9 = *(_DWORD *)(v17 + 12);
            v26 = 1;
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v26 )
  {
    v7 = v8;
    if ( !*a3 )
      v7 = v9;
  }
  v18 = v14 | 0x40;
  if ( v7 )
    v18 = v14;
  v19 = v18;
  if ( a3[3] && *a3 && v8 == 1 && !v9 )
    v19 = v18 | 0x100;
  v20 = MEMORY[0xFFFFF78000000008];
  IsWakeTimerImminent = PopIsWakeTimerImminent(MEMORY[0xFFFFF78000000008], a1, a2, (unsigned int)&v27, (__int64)&P);
  v22 = v19 | 0x80;
  if ( IsWakeTimerImminent )
    v22 = v19;
  v23 = v22 & ~PopDozeDeferralChecksToIgnore;
  if ( !v23 )
  {
    v6 = 1;
    PopPrintEx(3, (int)"Deferring doze to S4\n");
  }
  v24 = P;
  LOBYTE(v22) = v6;
  PopDiagTraceDozeDeferralDecision(v22, v23, (_DWORD)P, v20, v27, a1, a2);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x53577254u);
  return v6;
}
