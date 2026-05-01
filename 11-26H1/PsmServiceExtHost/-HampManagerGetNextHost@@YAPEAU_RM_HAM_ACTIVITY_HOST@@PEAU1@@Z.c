/*
 * XREFs of ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003CB1C
 * Callers:
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180019C64 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18002EDC0 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18003DFCC (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18007C460 (-HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18002685C (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180026F0C (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampManagerGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_RC_TREE_NODE *Successor; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v2; // rdi
  unsigned __int64 v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rax

  Successor = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)a1 + 99);
  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*((_QWORD *)Successor + 11) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)Successor + 3) <= 1 )
    __fastfail(0xEu);
  if ( Successor )
  {
    do
    {
      if ( v2 )
        NextHost = HampAppGetNextHost(v2);
      else
        NextHost = HampAppGetFirstHost(Successor);
      v2 = NextHost;
      if ( NextHost )
        break;
      Successor = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)(v3 - 40), Successor);
    }
    while ( Successor );
    if ( Successor )
      CemRcObjectDereference(Successor);
  }
  return v2;
}
