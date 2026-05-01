/*
 * XREFs of ?HampActCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003D038
 * Callers:
 *     ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003D000 (-HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampActCleanup(struct _HAM_ACTIVITY *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx

  v2 = (__int64 *)*((_QWORD *)a1 + 11);
  if ( v2 )
  {
    v3 = *v2;
    v2[1] = 0LL;
    (*(void (**)(void))(v3 + 16))();
  }
  v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  if ( v4 )
    RmHamHostDereference(v4);
  CemRcObjectCleanup(a1);
}
