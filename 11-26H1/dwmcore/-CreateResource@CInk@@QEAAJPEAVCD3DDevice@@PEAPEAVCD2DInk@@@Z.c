/*
 * XREFs of ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18026FC10
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18026FE00 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802701CC (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180298530 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::CreateResource(CInk *this, struct CD3DDevice *a2, struct CD2DInk **a3)
{
  struct ID2D1Ink *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  struct CD2DInk *v8; // rdi
  int ID2D1InkAndInkStyle; // eax
  int v10; // eax
  struct ID2D1Ink *v12; // [rsp+60h] [rbp+8h] BYREF
  CD2DInk *v13; // [rsp+68h] [rbp+10h] BYREF
  struct ID2D1InkStyle *v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v6 = CD2DContext::CreateD2DInk(
         (struct CD3DDevice *)((char *)a2 + 16),
         (const struct D2D1_INK_POINT *)((char *)this + 176),
         (const struct D2D1_INK_STYLE_PROPERTIES *)((char *)this + 188),
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x12Eu, 0LL);
    v8 = v13;
  }
  else
  {
    v8 = v13;
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13, &v12, &v14);
    v7 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0x130u, 0LL);
      v5 = v12;
    }
    else
    {
      v5 = v12;
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, _QWORD))(*(_QWORD *)v12 + 48LL))(
              v12,
              *((_QWORD *)this + 18),
              *((unsigned int *)this + 42));
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x131u, 0LL);
      }
      else
      {
        *a3 = v8;
        v8 = 0LL;
      }
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v5);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v14);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v8);
  return v7;
}
