/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x140964970
 * Callers:
 *     _CmRaiseDeleteEvent @ 0x140777BCC (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x1408A2B20 (_PnpCmMatchCallbackRoutine.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     _CmRaisePropertyChangeEvent @ 0x1409ADAB8 (_CmRaisePropertyChangeEvent.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140A85248 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmGetCmObjectListFromCache @ 0x140AAEBA4 (PiDmGetCmObjectListFromCache.c)
 *     _CmRaiseCreateEvent @ 0x140AF5644 (_CmRaiseCreateEvent.c)
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
