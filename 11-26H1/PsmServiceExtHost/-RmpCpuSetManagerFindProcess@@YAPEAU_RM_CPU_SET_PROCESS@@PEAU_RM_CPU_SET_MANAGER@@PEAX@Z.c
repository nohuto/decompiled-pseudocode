/*
 * XREFs of ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x1800853E4
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800862DC (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     ?RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180085534 (-RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

struct _RM_CPU_SET_PROCESS *__fastcall RmpCpuSetManagerFindProcess(struct _RM_CPU_SET_MANAGER *a1, void *a2)
{
  void *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // r8d
  DWORD ProcessId; // [rsp+30h] [rbp+8h]

  ProcessId = GetProcessId(a2);
  v4 = (void *)GetProcessId(a2);
  v5 = 0LL;
LABEL_2:
  v6 = (HIBYTE(ProcessId)
      + 37 * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL)))) & (-1LL << (*((_BYTE *)a1 + 76) & 0x1F));
  if ( v5 )
    goto LABEL_5;
  v7 = *((_DWORD *)a1 + 19) >> 5;
  if ( v7 )
  {
    v5 = *((_QWORD *)a1 + 10)
       + 8LL
       * ((v7 - 1) & (HIBYTE(v6)
                    - 877075889
                    + 442596621 * (unsigned __int8)v6
                    + 37
                    * (BYTE6(v6)
                     + 37
                     * (BYTE5(v6) + 37
                                  * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (unsigned int)BYTE1(v6))))))));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v6 == ((-1LL << (*((_BYTE *)a1 + 76) & 0x1F)) & *(_QWORD *)(v5 + 8)) )
      {
        if ( v5 && !RmpCpuSetManagerFindProcessComparator((struct _RTL_HASH_ENTRY *)v5, v4) )
          goto LABEL_2;
        return (struct _RM_CPU_SET_PROCESS *)v5;
      }
    }
  }
  return 0LL;
}
