/*
 * XREFs of ??$emplace_back@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAAEAUINPUT_SPACE_PAYLOAD@@$$QEAU2@@Z @ 0x18010C284
 * Callers:
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AA230 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::emplace_back<INPUT_SPACE_PAYLOAD>(__int64 a1, __int64 a2)
{
  return std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_one_at_back<INPUT_SPACE_PAYLOAD>(a1, a2);
}
