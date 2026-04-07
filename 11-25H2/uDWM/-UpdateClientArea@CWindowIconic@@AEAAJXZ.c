/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180053B00
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180055A98 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800568BC (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040BDC (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18004D118 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18006ADC8 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowIconic::UpdateClientArea(CWindowIconic *this)
{
  _DWORD *v1; // r8
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  bool v11; // dl
  const struct _D3DCOLORVALUE *v12; // r8
  const struct _D3DCOLORVALUE *v13; // r9
  int v14; // eax
  struct CRenderDataInstruction *v15; // rcx
  int v16; // eax
  CVisual *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF
  int v22; // [rsp+70h] [rbp+30h] BYREF
  int v23; // [rsp+74h] [rbp+34h]
  CBaseObject *v24; // [rsp+78h] [rbp+38h] BYREF
  __int64 v25; // [rsp+80h] [rbp+40h]

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  v24 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( v1[57] - v1[55] >= 0 )
    v3 = v1[57] - v1[55];
  v6 = v3 - v1[68] - v1[67];
  if ( v6 < 0 )
    v6 = 0;
  v22 = v6;
  if ( v1[58] - v1[56] >= 0 )
    v4 = v1[58] - v1[56];
  v7 = v4 - v1[70] - v1[69];
  if ( v7 < 0 )
    v7 = 0;
  v23 = v7;
  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 80LL))(*((_QWORD *)this + 13), &v22);
  CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 13));
  v8 = *((_DWORD *)this + 4);
  if ( v8 && (v9 = v8 - 1) != 0 )
  {
    if ( v9 == 1 )
    {
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 12), 0);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), 0);
    }
  }
  else
  {
    *(_QWORD *)&v21 = 0LL;
    *((float *)&v21 + 2) = (float)v22;
    *((float *)&v21 + 3) = (float)v23;
    v10 = CRectangleInstruction::Create(&v24);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x10Du, 0LL);
    }
    else
    {
      v14 = CRectangleInstruction::SetLinearGradientFill(v24, v11, v12, v13, 1.0);
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x10Eu, 0LL);
      }
      else
      {
        CSolidRectangleInstruction::SetRect((__int64)v24, &v21);
        v16 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 13), v15);
        v5 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x111u, 0LL);
        }
        else
        {
          v17 = (CVisual *)*((_QWORD *)this + 12);
          LODWORD(v18) = 0;
          v25 = 0LL;
          v19 = *((_QWORD *)v17 + 30);
          if ( v19 )
          {
            v18 = *(_QWORD *)(v19 + 24);
            v25 = v18;
          }
          CVisual::SetInsetFromParentLeft(v17, (v22 - (int)v18) / 2);
          CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), (v23 - HIDWORD(v25)) / 2);
        }
      }
    }
    if ( v24 )
      CBaseObject::Release(v24);
  }
  return v5;
}
