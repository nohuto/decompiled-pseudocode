/*
 * XREFs of ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18001AD24
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001A85C (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180008424 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 */

__int64 __fastcall RmpActivityHostPublishCommitLimit(struct _RM_ACTIVITY_HOST *a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  __int64 result; // rax

  v3 = *((_QWORD *)a1 + 172);
  if ( a2 == v3 && (a3 & 1) == 0 )
    return 0LL;
  result = ExecutionModel::ResourceManager::CommitMemoryLimitChange(
             *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 + 6) + 3544LL),
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 80),
             v3,
             a2,
             *((_QWORD *)a1 + 116));
  if ( (int)result >= 0 )
    *((_QWORD *)a1 + 172) = a2;
  return result;
}
