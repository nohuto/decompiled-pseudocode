/*
 * XREFs of ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003DC84
 * Callers:
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003D484 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007E394 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     <none>
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotGetNext(struct _HAM_HOST_SNAPSHOT *a1)
{
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax
  unsigned int v3; // ecx

  result = 0LL;
  v3 = *((_DWORD *)a1 + 4);
  if ( v3 != *((_DWORD *)a1 + 2) )
  {
    result = (struct _HAM_TERMINATION_HOST_BLOCK *)(*(_QWORD *)a1 + 16LL * v3);
    *((_DWORD *)a1 + 4) = v3 + 1;
  }
  return result;
}
