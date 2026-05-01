/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800337CC
 * Callers:
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033598 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180061B14 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostEnumerateResourceSetGetFirst(__int64 a1, int a2, signed int a3)
{
  signed int v3; // r10d
  _QWORD *v6; // r11
  __int64 v7; // rcx

  v3 = a3;
  v6 = (_QWORD *)(a1 + 8 * (a3 + 2 * (a3 + 70LL)));
  while ( v3 < 2 )
  {
    if ( _bittest(&a2, v3) )
    {
      v7 = 0LL;
      if ( *v6 != a1 + 8 * (v3 + 2 * (v3 + 70LL)) )
        v7 = *v6 - 1296LL;
      if ( v7 )
        return v7;
    }
    ++v3;
    v6 += 3;
  }
  return 0LL;
}
