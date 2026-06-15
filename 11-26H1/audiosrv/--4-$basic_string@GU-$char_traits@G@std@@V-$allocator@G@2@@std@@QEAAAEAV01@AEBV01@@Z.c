/*
 * XREFs of ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F0DAC
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800F1B60 (-AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$defau.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x1801591BC (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800AC0B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

char *__fastcall std::wstring::operator=(char *a1, char *a2)
{
  unsigned __int64 v3; // r8

  if ( a1 != a2 )
  {
    v3 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 3) > 7uLL )
      a2 = *(char **)a2;
    std::wstring::assign(a1, a2, v3);
  }
  return a1;
}
