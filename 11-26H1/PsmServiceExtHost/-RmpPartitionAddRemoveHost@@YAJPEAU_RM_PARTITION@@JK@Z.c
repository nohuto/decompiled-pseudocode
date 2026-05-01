/*
 * XREFs of ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x180031BC0
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083200 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_H.c)
 * Callees:
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x180031BF4 (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 */

__int64 __fastcall RmpPartitionAddRemoveHost(struct _RM_PARTITION *a1, int a2, unsigned int a3)
{
  int v3; // ecx
  __int64 result; // rax

  *((_DWORD *)a1 + 42) += a2;
  v3 = RmpPolicyResizeScratchBuffers((struct _RM_PARTITION *)((char *)a1 + 120), *((_DWORD *)a1 + 42), a3);
  result = 0LL;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return result;
}
