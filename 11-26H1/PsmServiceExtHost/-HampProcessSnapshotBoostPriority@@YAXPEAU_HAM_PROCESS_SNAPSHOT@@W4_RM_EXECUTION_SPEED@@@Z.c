/*
 * XREFs of ?HampProcessSnapshotBoostPriority@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@W4_RM_EXECUTION_SPEED@@@Z @ 0x180065018
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180017954 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x180065068 (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 */

__int64 __fastcall HampProcessSnapshotBoostPriority(__int64 a1, unsigned int a2)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    result = HampProcessBoostPriority(
               *(_QWORD *)(*(_QWORD *)a1 + 8 * i),
               *(unsigned int *)(*(_QWORD *)(a1 + 8) + 4 * i),
               a2);
  return result;
}
