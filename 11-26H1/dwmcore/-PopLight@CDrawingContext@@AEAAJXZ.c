/*
 * XREFs of ?PopLight@CDrawingContext@@AEAAJXZ @ 0x18019C694
 * Callers:
 *     ?Pop@CDrawingContext@@QEAAJXZ @ 0x18003EE08 (-Pop@CDrawingContext@@QEAAJXZ.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18019C6F0 (-Pop@CLightStack@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::PopLight(CDrawingContext *this)
{
  int v1; // eax
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *((_DWORD *)this + 66);
  if ( v1 )
    *((_DWORD *)this + 66) = v1 - 1;
  v2 = CLightStack::Pop((CDrawingContext *)((char *)this + 416));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x1876u, 0LL);
  return v3;
}
