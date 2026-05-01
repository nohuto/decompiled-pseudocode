/*
 * XREFs of ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18006DDEC
 * Callers:
 *     ?HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800652AC (-HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x180066340 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAP.c)
 * Callees:
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180019300 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003D484 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003D6FC (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180043D60 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180049DE0 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampPkgTerminate(
        struct _HAM_RC_TREE_NODE *a1,
        int a2,
        unsigned int a3,
        struct _HAM_CLIENT_CONTEXT *a4,
        unsigned int a5,
        struct _HAM_PROCESS_SNAPSHOT *a6)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rbx
  int ProcessesInfo; // edi
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  for ( i = HampHostEnumerateHostsInNode(a1, 3, 0LL); ; i = HampPkgGetNextHost(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    ProcessesInfo = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v13, i);
    if ( ProcessesInfo < 0 )
      goto LABEL_9;
    if ( *((_BYTE *)v10 + 592) == 1 )
    {
      if ( a6 )
      {
        ProcessesInfo = RmHamHostGetProcessesInfo((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 56), 4096, 1, a6);
        if ( ProcessesInfo < 0 )
          goto LABEL_9;
      }
    }
  }
  HampHostSnapshotTerminate((struct _HAM_HOST_SNAPSHOT *)&v13, a2, a3, a4, a5, 0);
  ProcessesInfo = 0;
LABEL_9:
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v13);
  return (unsigned int)ProcessesInfo;
}
