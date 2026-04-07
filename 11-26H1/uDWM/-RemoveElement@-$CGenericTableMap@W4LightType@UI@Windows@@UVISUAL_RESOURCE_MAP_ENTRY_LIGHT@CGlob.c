/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@W4LightType@UI@Windows@@UVISUAL_RESOURCE_MAP_ENTRY_LIGHT@CGlobalLightSet@@@@QEAAXPEAUVISUAL_RESOURCE_MAP_ENTRY_LIGHT@CGlobalLightSet@@@Z @ 0x1800B5C3C
 * Callers:
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800B5AD0 (--1CGlobalLightSet@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<enum Windows::UI::LightType,CGlobalLightSet::VISUAL_RESOURCE_MAP_ENTRY_LIGHT>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        int *a2)
{
  int v2; // eax
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  Buffer = 0LL;
  LODWORD(Buffer) = v2;
  if ( !RtlDeleteElementGenericTable(a1, &Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
