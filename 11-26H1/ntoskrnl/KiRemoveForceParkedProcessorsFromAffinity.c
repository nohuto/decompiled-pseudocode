/*
 * XREFs of KiRemoveForceParkedProcessorsFromAffinity @ 0x140452C8C
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405E8664 (KiUpdateSystemAvailableCpuState.c)
 * Callees:
 *     KeEnumerateNextNodeInSystem @ 0x140452D80 (KeEnumerateNextNodeInSystem.c)
 */

void __fastcall KiRemoveForceParkedProcessorsFromAffinity(_WORD *a1)
{
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  __m128 v3; // xmm0
  unsigned __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+28h] [rbp-18h]
  unsigned __int64 v13; // [rsp+58h] [rbp+18h] BYREF

  v11 = 0LL;
  SchedulerSubNode = KeGetCurrentPrcb()->SchedulerSubNode;
  v13 = 0LL;
  v12 = 0LL;
  LOWORD(v11) = SchedulerSubNode->Affinity.Reserved[0];
  v3 = KeEnumerateNextNodeInSystem(&v11, &v13);
  v4 = v13;
  v5 = 0;
  HIDWORD(v12) = v3.m128_i32[3];
  *(_QWORD *)&v12 = v13;
  DWORD2(v12) = 0;
  while ( 1 )
  {
    v13 = 0LL;
    v6 = 0LL;
    while ( v5 >= *(_DWORD *)(v4 + 48) )
    {
      KeEnumerateNextNodeInSystem(&v11, &v13);
      if ( v7 < 0 )
      {
        v5 = DWORD2(v12);
        v4 = v12;
        goto LABEL_6;
      }
      v4 = v13;
      v5 = 0;
      v12 = v13;
    }
    v8 = *(_QWORD *)(v4 + 32);
    v9 = v5++;
    DWORD2(v12) = v5;
    v6 = *(_QWORD *)(v8 + 8 * v9);
LABEL_6:
    if ( !v6 )
      break;
    v10 = *(unsigned __int16 *)(v6 + 136);
    if ( *a1 > (unsigned __int16)v10 )
      *(_QWORD *)&a1[4 * v10 + 4] &= ~*(_QWORD *)(v6 + 104);
  }
}
