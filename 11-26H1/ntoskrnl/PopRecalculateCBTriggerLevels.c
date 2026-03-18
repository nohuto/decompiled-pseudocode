/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x1409479E4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline @ 0x14060C688 (Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryCheckTrigger @ 0x1409474A8 (PopBatteryCheckTrigger.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14094756C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopRecalculateCBTriggerLevels(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  _BYTE *v4; // rsi
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
    v4 = qword_140F105C0;
    v5 = 3 * (v2 + 4);
    v9 = 32LL * v3;
    if ( (unsigned int)Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = *(unsigned int *)&v4[8 * v5 + 4];
      v6 = (char *)&qword_140F0FE60 + v9;
      if ( (_DWORD)v7 != *(ULONG *)((char *)&qword_140F0FE60 + v9 + 376)
        || v4[8 * v5] != ((*((_DWORD *)v6 + 89) & 0x80) != 0) )
      {
        *(ULONG *)((char *)&qword_140F0FE60 + v9 + 376) = v7;
        v13 = (char *)&qword_140F0FE60 + v9;
        v14 = *((_DWORD *)v6 + 89);
        if ( v4[8 * v5] )
        {
          *((_DWORD *)v6 + 89) = v14 | 0x80;
          v10 = v13 + 352;
LABEL_6:
          PopDiagTraceBatteryTriggerFlags(&v17, (__int64)v10);
          v11 = 32LL * v17;
          if ( !PopBatteryCheckTrigger((__int64)&qword_140F0FE60 + v11 + 352) )
            goto LABEL_14;
          *(ULONG *)((char *)&qword_140F0FE60 + v11 + 356) |= 2u;
          v12 = (char *)&qword_140F0FE60 + v11 + 352;
        }
        else
        {
          *((_DWORD *)v6 + 89) = v14 & 0xFFFFFF7F;
          v12 = v13 + 352;
        }
        PopDiagTraceBatteryTriggerFlags(&v17, (__int64)v12);
      }
    }
    else if ( (*(ULONG *)((char *)&qword_140F0FE60 + v9 + 356) & 0x80u) == 0 )
    {
      *(ULONG *)((char *)&qword_140F0FE60 + v9 + 376) = *(_DWORD *)&v4[8 * v5 + 4];
      if ( v4[8 * v5] )
      {
        *(ULONG *)((char *)&qword_140F0FE60 + v9 + 356) |= 0x80u;
        v10 = (char *)&qword_140F0FE60 + v9 + 352;
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
