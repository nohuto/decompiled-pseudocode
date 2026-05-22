/*
 * XREFs of ??$emplace_back@PEAVBamoInputSpacePayloadPrincipal@@@?$vector@PEAVBamoInputSpacePayloadPrincipal@@V?$allocator@PEAVBamoInputSpacePayloadPrincipal@@@std@@@std@@QEAAAEAPEAVBamoInputSpacePayloadPrincipal@@$$QEAPEAV2@@Z @ 0x18013EAA8
 * Callers:
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18008B5C8 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 * Callees:
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 */

_QWORD *__fastcall std::vector<BamoInputSpacePayloadPrincipal *>::emplace_back<BamoInputSpacePayloadPrincipal *>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rdx

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(a1, (__int64)v3, a2);
  *v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 8;
  return (_QWORD *)v4;
}
