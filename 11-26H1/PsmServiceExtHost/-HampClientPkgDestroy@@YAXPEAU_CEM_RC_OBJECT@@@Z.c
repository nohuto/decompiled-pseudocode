/*
 * XREFs of ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180065430
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     CemRcObjectCleanup @ 0x18003D080 (CemRcObjectCleanup.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F27C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F30C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007E334 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampClientPkgDestroy(struct _CEM_RC_OBJECT *a1)
{
  struct _HAM_PACKAGE *v2; // rbx
  char v3; // si
  _DWORD *v4; // rax

  CemRcObjectCleanup(a1);
  v2 = (struct _HAM_PACKAGE *)*((_QWORD *)a1 + 7);
  HampPkgAcquireLockExclusive(v2);
  v3 = 1;
  v4 = (_DWORD *)((char *)v2 + 340);
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 )
    *v4 &= 0xFFFFFFFC;
  if ( (*((_BYTE *)a1 + 64) & 2) != 0 )
    *v4 &= ~4u;
  else
    v3 = 0;
  HampPkgReleaseLockExclusive(v2);
  if ( v3 )
    HampPkgNotifyDebugModeChanged(v2);
  CemRcObjectDereference(v2);
  HampFreeHeap(a1);
}
