/*
 * XREFs of ?RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOKE_POLICY@@PEAU_RM_POLICY_RECLAIM_CONTEXT@@@Z @ 0x1800887C4
 * Callers:
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18006BD9C (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18005ACCC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyGetActiveSessionCount@@YAKPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180064660 (-RmpPolicyGetActiveSessionCount@@YAKPEAU_RM_POLICY_WORK_BUFFER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

char __fastcall RmpPolicyReclaimContextInitialize(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  int v9; // ebx
  unsigned int v10; // r9d
  char result; // al
  ULONG ActiveSessionCount; // eax
  int v13; // r10d
  unsigned __int64 v14; // r15
  int *v15; // r8
  __int64 v16; // r8
  __int64 v17; // r11

  memset_0(*(void **)(a2 + 8), 0, 24LL * *(unsigned int *)(a2 + 32));
  v9 = 1;
  if ( a4 == 1 )
  {
    v10 = 0;
  }
  else
  {
    ActiveSessionCount = RmpPolicyGetActiveSessionCount((struct _RTL_BITMAP *)a2);
    v10 = -1;
    if ( 5 * (unsigned __int64)ActiveSessionCount <= 0xFFFFFFFF )
      v10 = 5 * ActiveSessionCount;
    v13 = 0;
    v14 = 0LL;
    if ( *(_DWORD *)(a2 + 36) )
    {
      v15 = (int *)(*(_QWORD *)a2 + 56LL);
      do
      {
        v14 += *((_QWORD *)v15 - 2);
        if ( (int)RmpEmPriorityCompare(*v15, *(_DWORD *)(a1 + 320)) < 0 && *(char *)(*(_QWORD *)(v16 - 8) + 1168LL) < 0 )
          ++v13;
        v15 = (int *)(v16 + 64);
      }
      while ( v17 != 1 );
    }
    if ( v10 < *(_DWORD *)(a1 + 172) && v13 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    if ( v14 >= a3 )
    {
      a4 = 0;
      goto LABEL_4;
    }
  }
  v9 = 2;
LABEL_4:
  *(_DWORD *)(a5 + 20) = 0;
  *(_QWORD *)a5 = a2;
  *(_DWORD *)(a5 + 12) = v9;
  *(_DWORD *)(a5 + 8) = a4;
  *(_DWORD *)(a5 + 16) = v10;
  result = *(_BYTE *)(a1 + 312);
  *(_BYTE *)(a5 + 20) = result;
  return result;
}
