/*
 * XREFs of ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18007F060
 * Callers:
 *     ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B388 (-HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostProcessDepCleanup(struct _HAM_HOST_PROCESS_DEPENDENCY *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx

  if ( *((_QWORD *)a1 + 10) )
    TpReleaseWait();
  if ( *((_QWORD *)a1 + 11) )
    TpReleaseWait();
  v2 = (void *)*((_QWORD *)a1 + 8);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 9);
  if ( v3 )
    NtClose(v3);
  v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
  if ( v4 )
    RmHamHostDereference(v4);
  v5 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 7);
  if ( v5 )
    RmHamHostDereference(v5);
}
