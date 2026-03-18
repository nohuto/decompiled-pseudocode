/*
 * XREFs of ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18026FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?DrawInk@CDrawingContext@@QEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180234FCC (-DrawInk@CDrawingContext@@QEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802700E0 (-GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::Draw(
        struct _D3DCOLORVALUE *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CD3DDevice *v5; // rdx
  int D2DInk; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct ID2D1InkStyle *v11; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v5 = (struct CD3DDevice *)*((_QWORD *)a2 + 4);
  v11 = 0LL;
  D2DInk = CInk::GetD2DInk((CInk *)this, v5, &v12, &v11);
  v8 = D2DInk;
  if ( D2DInk < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DInk, 0xF3u, 0LL);
  }
  else
  {
    v9 = CDrawingContext::DrawInk(a2, v12, this + 8, v11);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xF5u, 0LL);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v12);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v11);
  return v8;
}
