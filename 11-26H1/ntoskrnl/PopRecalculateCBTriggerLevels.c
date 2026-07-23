/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x1409C3354
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline @ 0x14060F7E8 (Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryCheckTrigger @ 0x1409C2E18 (PopBatteryCheckTrigger.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1409C2EDC (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopRecalculateCBTriggerLevels(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  __int64 WriteOperationCount; // rsi
  __int64 v5; // rdi
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  char *v10; // rdx
  __int64 v11; // rbx
  char *v12; // rdx
  char *v13; // rcx
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-8h]
  unsigned int v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = a1;
  PopAcquirePolicyLock(a1, a2);
  v2 = 0LL;
  v17 = 0;
  v3 = 0;
  do
  {
    WriteOperationCount = PpmIdlePolicyLock.WriteOperationCount;
    v5 = 3 * (v2 + 4);
    v9 = 32LL * v3;
    if ( (unsigned int)Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = *(unsigned int *)(WriteOperationCount + 8 * v5 + 4);
      v6 = (char *)&PopCB + v9;
      if ( (_DWORD)v7 != *(ULONG *)((char *)&PopCB + v9 + 376)
        || *(_BYTE *)(WriteOperationCount + 8 * v5) != ((*((_DWORD *)v6 + 89) & 0x80) != 0) )
      {
        *(ULONG *)((char *)&PopCB + v9 + 376) = v7;
        v13 = (char *)&PopCB + v9;
        v14 = *((_DWORD *)v6 + 89);
        if ( *(_BYTE *)(WriteOperationCount + 8 * v5) )
        {
          *((_DWORD *)v6 + 89) = v14 | 0x80;
          v10 = v13 + 352;
LABEL_6:
          PopDiagTraceBatteryTriggerFlags(&v17, (__int64)v10);
          v11 = 32LL * v17;
          if ( !PopBatteryCheckTrigger((__int64)&PopCB + v11 + 352) )
            goto LABEL_14;
          *(ULONG *)((char *)&PopCB + v11 + 356) |= 2u;
          v12 = (char *)&PopCB + v11 + 352;
        }
        else
        {
          *((_DWORD *)v6 + 89) = v14 & 0xFFFFFF7F;
          v12 = v13 + 352;
        }
        PopDiagTraceBatteryTriggerFlags(&v17, (__int64)v12);
      }
    }
    else if ( (*(ULONG *)((char *)&PopCB + v9 + 356) & 0x80u) == 0 )
    {
      *(ULONG *)((char *)&PopCB + v9 + 376) = *(_DWORD *)(WriteOperationCount + 8 * v5 + 4);
      if ( *(_BYTE *)(WriteOperationCount + 8 * v5) )
      {
        *(ULONG *)((char *)&PopCB + v9 + 356) |= 0x80u;
        v10 = (char *)&PopCB + v9 + 352;
        goto LABEL_6;
      }
    }
LABEL_14:
    v2 = v17 + 1;
    v17 = v2;
    v3 = v2;
  }
  while ( (unsigned int)v2 < 4 );
  return PopReleasePolicyLock((unsigned int)v2, v6, v7, v8, v16);
}
