/*
 * XREFs of ??$_Copy_memmove_tail@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@YAPEAUVertexXYW_ColorDW_UV2_AAFixup@@QEBDQEAU1@_K2@Z @ 0x1802060C8
 * Callers:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 * Callees:
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_tail<VertexXYW_ColorDW_UV2_AAFixup *>(void *Src, void *a2, size_t a3)
{
  memmove_0(a2, Src, a3);
  return (__int64)a2 + a3;
}
