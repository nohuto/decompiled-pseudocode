/*
 * XREFs of DifIsPluginEnabled @ 0x14064C7D0
 * Callers:
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     DifIsValidTrackingObject @ 0x14064ADB4 (DifIsValidTrackingObject.c)
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
