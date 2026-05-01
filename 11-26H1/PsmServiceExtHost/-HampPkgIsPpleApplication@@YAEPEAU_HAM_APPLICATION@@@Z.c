/*
 * XREFs of ?HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180019CE0
 * Callers:
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180019D3C (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180019228 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800192A4 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

bool __fastcall HampPkgIsPpleApplication(struct _HAM_APPLICATION *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  bool v4; // bl

  v1 = *((_QWORD *)a1 + 11);
  HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v1);
  v3 = *(_QWORD *)(v1 + 328);
  v4 = 0;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 792) == (_QWORD)a1;
  HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v1);
  return v4;
}
