/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C7E80
 * Callers:
 *     GetHolographicInputSession @ 0x1800D597C (GetHolographicInputSession.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x180159598 (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x180193C70 (--0PenInterface@@QEAA@PEAX0@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ADF60 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AE078 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AE7BC (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::wstring(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  return a1;
}
