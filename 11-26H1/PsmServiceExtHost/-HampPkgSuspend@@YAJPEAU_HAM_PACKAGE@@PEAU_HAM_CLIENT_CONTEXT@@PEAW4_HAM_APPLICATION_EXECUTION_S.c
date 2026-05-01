/*
 * XREFs of ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007E394
 * Callers:
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007B2AC (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180019228 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800192A4 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180023ED8 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x180036A4C (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z @ 0x18003C024 (-HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003D6FC (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003DC84 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003DCA8 (-HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180049DE0 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180078D90 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180078E70 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampPkgSuspend(
        struct _HAM_PACKAGE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  int v6; // r14d
  struct _HAM_APPLICATION *i; // rax
  struct _HAM_APPLICATION *v8; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rsi
  int v11; // eax
  int v12; // ebx
  struct _HAM_TERMINATION_HOST_BLOCK *j; // rax
  struct _HAM_TERMINATION_HOST_BLOCK *k; // rax
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  HampPkgAcquireLockShared(a1);
  v6 = (*((_DWORD *)a1 + 86) >> 5) & 7;
  HampPkgReleaseLockShared(a1);
  for ( i = HampPkgGetFirstApplication(a1); ; i = HampPkgGetNextApplication(a1, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    v9 = HampAppTryReferenceMixedHost(i);
    v10 = v9;
    if ( v9 )
    {
      v11 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v16, v9);
      v12 = 0;
      if ( v11 < 0 )
        v12 = v11;
      RmHamHostDereference(v10);
      if ( v12 != -1073741275 && v12 < 0 )
        goto LABEL_16;
    }
  }
  for ( j = HampHostSnapshotGetFirst((struct _HAM_HOST_SNAPSHOT *)&v16);
        j;
        j = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v16) )
  {
    HampHostDebugQueueSuspend(*(struct _RM_HAM_ACTIVITY_HOST **)j, a2);
  }
  for ( k = HampHostSnapshotGetFirst((struct _HAM_HOST_SNAPSHOT *)&v16);
        k;
        k = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v16) )
  {
    HampHostDebugWaitForSuspendComplete(*(struct _RM_HAM_ACTIVITY_HOST **)k);
  }
  *(_DWORD *)a3 = v6;
  v12 = 0;
LABEL_16:
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v16);
  return (unsigned int)v12;
}
