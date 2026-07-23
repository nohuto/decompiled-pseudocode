/*
 * XREFs of DifIsPluginEnabled @ 0x1406503B0
 * Callers:
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     DifIsValidTrackingObject @ 0x14064E994 (DifIsValidTrackingObject.c)
 * Callees:
 *     <none>
 */

char __fastcall DifIsPluginEnabled(unsigned int a1)
{
  if ( a1 < 0x40 )
    return DifPluginStates[a1];
  else
    return 0;
}
