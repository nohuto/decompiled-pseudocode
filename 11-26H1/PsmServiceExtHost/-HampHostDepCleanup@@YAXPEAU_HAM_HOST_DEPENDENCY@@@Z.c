/*
 * XREFs of ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B388
 * Callers:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B354 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     CempListEntryIsNull @ 0x180014218 (CempListEntryIsNull.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18007F060 (-HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepCleanup(struct _HAM_HOST_DEPENDENCY *a1)
{
  _QWORD *v2; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v3; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx

  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 2) )
    CempListEntryRemoveAndClear(v2);
  if ( *((_BYTE *)a1 + 40) )
  {
    if ( *((_BYTE *)a1 + 40) == 1 )
    {
      v3 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
      if ( v3 )
        RmHamHostDereference(v3);
      v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 7);
      if ( v4 )
        RmHamHostDereference(v4);
    }
    else if ( (unsigned int)*((unsigned __int8 *)a1 + 40) - 3 <= 1 )
    {
      RmHamHostDereference(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 6));
      RmHamHostDereference(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 7));
    }
  }
  else
  {
    HampHostProcessDepCleanup(a1);
  }
}
