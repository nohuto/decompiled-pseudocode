/*
 * XREFs of ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800328B8
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     <none>
 */

int __fastcall RmpPsmAppFamilyTableFindByActivityHost(struct _RM_ACTIVITY_HOST *a1, struct _RM_PSM_APP_FAMILY **a2)
{
  return RmpPsmAppFamilyTableFindByHostInfo(
           *((struct _RM_SERVICE_GLOBALS **)a1 + 6),
           (struct _RM_ACTIVITY_HOST *)((char *)a1 + 80),
           a2);
}
