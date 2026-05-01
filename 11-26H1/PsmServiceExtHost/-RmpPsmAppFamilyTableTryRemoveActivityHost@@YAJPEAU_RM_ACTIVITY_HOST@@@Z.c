/*
 * XREFs of ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800328D0
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180023F94 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLI.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180032550 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800329C8 (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 */

int __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  char *v1; // rsi
  int result; // eax
  struct _RM_PSM_APP_FAMILY *v4; // rbx
  _QWORD *v5; // rdx
  _QWORD *i; // rcx
  _OWORD *v7; // r8
  __int64 v8; // rax
  struct _RM_PSM_APP_FAMILY *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)a1 + 56;
  v9 = 0LL;
  result = RmpPsmAppFamilyTableFindByHostInfo(
             *((struct _RM_SERVICE_GLOBALS **)a1 + 6),
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 80),
             &v9);
  if ( result < 0 )
    return result;
  v4 = v9;
  v5 = 0LL;
  for ( i = (_QWORD *)((char *)v9 + 560); ; i = (_QWORD *)*i )
  {
    if ( !i )
      return -1073741275;
    v7 = i - 1;
    if ( (struct _RM_ACTIVITY_HOST *)*(i - 1) == a1 )
      break;
    v5 = i;
  }
  if ( a1 == *((struct _RM_ACTIVITY_HOST **)v9 + 71) )
    *((_QWORD *)v9 + 71) = 0LL;
  if ( v5 )
    goto LABEL_18;
  v8 = *i;
  if ( *i )
  {
    v5 = i;
    *v7 = *(_OWORD *)(v8 - 8);
    v7 = (_OWORD *)(v8 - 8);
LABEL_18:
    *v5 = *i;
    HampFreeHeap(v7);
    goto LABEL_10;
  }
  *v7 = 0LL;
LABEL_10:
  if ( *((char **)v4 + 72) == v1 )
    *((_QWORD *)v4 + 72) = 0LL;
  if ( !*((_QWORD *)v4 + 69) )
    RmpPsmAppFamilyTableRemove(*((struct _RM_SERVICE_GLOBALS **)a1 + 6), v4);
  return 0;
}
