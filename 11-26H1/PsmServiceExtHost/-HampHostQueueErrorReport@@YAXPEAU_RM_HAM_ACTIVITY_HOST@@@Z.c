/*
 * XREFs of ?HampHostQueueErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006D94C
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampHostQueueErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // ebx

  v1 = *((_DWORD *)a1 + 164);
  *((_QWORD *)a1 + 83) |= 0x8000000000000uLL;
  if ( v1 != GetCurrentThreadId() )
    HampHostCheckQueueStateWorker(a1, 0);
}
