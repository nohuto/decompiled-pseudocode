/*
 * XREFs of ?CopyConfig@InputConfigContextProvider@@AEAA?AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z @ 0x180097DB4
 * Callers:
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AA230 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

__int64 __fastcall InputConfigContextProvider::CopyConfig(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // xmm1_8
  void *v6; // rax
  const void *v7; // rdx
  size_t v8; // r8

  v5 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_QWORD *)(a2 + 16) = v5;
  if ( *(_DWORD *)(a2 + 12) )
  {
    v6 = operator new[](saturated_mul(*(unsigned int *)(a2 + 12), 0xC8uLL));
    v7 = *(const void **)(a3 + 16);
    v8 = 200LL * *(unsigned int *)(a2 + 12);
    *(_QWORD *)(a2 + 16) = v6;
    memcpy_0(v6, v7, v8);
  }
  return a2;
}
