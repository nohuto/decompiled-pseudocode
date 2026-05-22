/*
 * XREFs of ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAAEAUINPUT_SPACE_PAYLOAD@@AEAU2@@Z @ 0x1800A9708
 * Callers:
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AA230 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEAU2@@Z @ 0x180046710 (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::emplace_back<INPUT_SPACE_PAYLOAD &>(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(a1, v3, (__int128 *)a2);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  v4 = a1[1];
  a1[1] = v4 + 24;
  return v4;
}
