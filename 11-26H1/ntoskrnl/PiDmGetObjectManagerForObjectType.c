/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1409A9FC0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x140968F98 (PiDqQueryAppendActionEntry.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409A9DA0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409A9E30 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1409AA3C0 (PiDmListAddObject.c)
 *     PiDmListRemoveObject @ 0x140B165EC (PiDmListRemoveObject.c)
 *     PiDmListAddList @ 0x140B2E9E4 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140B6F648 (PiDmListRemoveList.c)
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
