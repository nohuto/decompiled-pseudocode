/*
 * XREFs of ?HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180069274
 * Callers:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     CempListEntryIsNull @ 0x180014218 (CempListEntryIsNull.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180014294 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampDepGroupCleanup(struct _HAM_DEPENDENCY_GROUP *a1)
{
  __int64 v2; // rcx
  struct _HOST_ACTIVITY_MANAGER *v3; // rsi
  __int64 *v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rbx

  v2 = *((_QWORD *)a1 + 15);
  if ( v2 )
    TpReleaseWork(v2);
  v3 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)a1 + 4);
  HampManagerAcquireLockExclusive(v3);
  v4 = (__int64 *)((char *)v3 + 488);
  if ( (unsigned int)CempListEntryIsNull((_QWORD *)a1 + 5) )
  {
    v6 = 1LL;
  }
  else
  {
    CempListEntryRemoveAndClear(v5);
    v6 = *v4 - 1;
    *v4 = v6;
  }
  HampManagerReleaseLockExclusive(v3);
  if ( !v6 )
    RtlWakeAddressAll((char *)v3 + 488);
}
