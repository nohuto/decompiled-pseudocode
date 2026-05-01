/*
 * XREFs of ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003CF44
 * Callers:
 *     ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003CF20 (-HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     CemRcObjectCleanup @ 0x18003D080 (CemRcObjectCleanup.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006E324 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x18007EAE8 (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppCleanup(struct _HAM_APPLICATION *a1)
{
  struct _HAM_PACKAGE **v1; // rsi
  unsigned __int64 v3; // rbx

  v1 = (struct _HAM_PACKAGE **)((char *)a1 + 88);
  if ( (*((_DWORD *)a1 + 155) & 0xE0) != 0x80 )
    HampPkgPushUpdate(*v1);
  if ( (*((_DWORD *)a1 + 154) & 0x10000) != 0 )
    HampHostIdStoreInvalidateForApplication(
      (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)*v1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 400),
      a1);
  if ( *((_QWORD *)a1 + 70) )
    TpReleaseWork();
  v3 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference((_QWORD *)(v3 - 40));
  if ( *v1 )
    CemRcObjectDereference(*v1);
}
