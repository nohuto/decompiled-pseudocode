/*
 * XREFs of ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180084520
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800800A0 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

void __fastcall RmpObjectTableCleanup(struct _RM_OBJECT_TABLE *a1)
{
  char *v1; // rdi
  void *v3; // rbx

  v1 = (char *)a1 + 16;
  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  v3 = (void *)*((_QWORD *)a1 + 1);
  RtlReleaseSRWLockExclusive(v1);
  if ( v3 )
    HampFreeHeap(v3);
}
