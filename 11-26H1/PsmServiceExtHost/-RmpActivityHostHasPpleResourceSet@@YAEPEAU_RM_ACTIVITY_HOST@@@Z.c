/*
 * XREFs of ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083AC0
 * Callers:
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180004B90 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033840 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180061B14 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetBegin@@YAXPEAU_RM_ACTIVITY_HOST@@KPEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180062EF0 (-RmpActivityHostEnumerateResourceSetBegin@@YAXPEAU_RM_ACTIVITY_HOST@@KPEAU_RM_ACTIVITY_HOST_RESO.c)
 */

bool __fastcall RmpActivityHostHasPpleResourceSet(struct _RM_ACTIVITY_HOST *a1)
{
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  RmpActivityHostEnumerateResourceSetBegin(a1, 2, (struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v4);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v4);
    if ( !Next )
      break;
    if ( (*((_BYTE *)Next + 1378) & 7) == 3 )
    {
      v2 = *((_QWORD *)Next + 164);
      return v2 != 0;
    }
  }
  v2 = 0LL;
  return v2 != 0;
}
