/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1409D90D0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1409A718C (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x1409A8588 (PiDqQueryAppendActionEntry.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409D8EB0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409D8F40 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1409D94D0 (PiDmListAddObject.c)
 *     PiDmListRemoveObject @ 0x140AF3FE0 (PiDmListRemoveObject.c)
 *     PiDmListAddList @ 0x140B2C964 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140B6C54C (PiDmListRemoveList.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 == 3 )
    return &PiDmDeviceInterfaceManager;
  v2 = a1 - 1;
  if ( !v2 )
    return (struct _ERESOURCE *)&PiDmDeviceManager;
  v3 = v2 - 1;
  if ( !v3 )
    return (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
  v4 = v3 - 2;
  if ( !v4 )
    return (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
  v5 = v4 - 1;
  if ( !v5 )
    return (struct _ERESOURCE *)&PiDmDeviceContainerManager;
  if ( v5 == 1 )
    return (struct _ERESOURCE *)&PiDmDevicePanelManager;
  return 0LL;
}
