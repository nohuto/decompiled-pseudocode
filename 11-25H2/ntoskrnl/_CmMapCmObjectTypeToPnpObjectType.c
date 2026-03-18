/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x140950170
 * Callers:
 *     _CmRaiseDeleteEvent @ 0x14080C3C0 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x14080FFD0 (_PnpCmMatchCallbackRoutine.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14094E730 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaiseCreateEvent @ 0x14094F02C (_CmRaiseCreateEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x14094F9F8 (_CmRaisePropertyChangeEvent.c)
 *     PiDmGetCmObjectListFromCache @ 0x14094FF28 (PiDmGetCmObjectListFromCache.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14094FF80 (PiDmObjectGetCachedCmProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapCmObjectTypeToPnpObjectType(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 == 3 )
    return 3LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 2;
  if ( !v4 )
    return 4LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 5LL;
  if ( v5 == 1 )
    return 6LL;
  return 0LL;
}
