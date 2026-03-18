/*
 * XREFs of ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802700E0
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18026FD40 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18026FE00 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802701CC (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetD2DInk(CInk *this, struct CD3DDevice *a2, struct ID2D1Ink **a3, struct ID2D1InkStyle **a4)
{
  int v7; // eax
  int ID2D1InkAndInkStyle; // edi
  unsigned int v9; // eax
  CD2DInk *v11; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v7 = *((_DWORD *)this + 10);
  v11 = 0LL;
  *((_DWORD *)this + 10) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 + 4)) & 0xC;
  if ( (((unsigned __int8)v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 + 4)) & 0xC) & 0xC) != 4 )
  {
    ID2D1InkAndInkStyle = -2147467259;
    v9 = 273;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, v9, 0LL);
    ReleaseInterface<ID2D1Geometry>((__int64 *)a3);
    ReleaseInterface<ID2D1Geometry>((__int64 *)a4);
    goto LABEL_8;
  }
  ID2D1InkAndInkStyle = CDeviceResourceTable<CD2DInk,CInk>::FindOrCreateResourceNoRef((__int64)this + 72, a2, &v11);
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v9 = 276;
    goto LABEL_7;
  }
  ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v11, a3, a4);
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v9 = 277;
    goto LABEL_7;
  }
LABEL_8:
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (4 * (*((_DWORD *)this + 10) >> 2) - 4)) & 0xC;
  return (unsigned int)ID2D1InkAndInkStyle;
}
