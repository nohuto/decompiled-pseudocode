/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18007DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000A9D0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  CBaseObject *v1; // rsi
  bool v3; // zf
  struct CRectangleGeometryProxy **v4; // rsi
  int v5; // edx
  int v6; // r9d
  int v7; // eax
  int v8; // r8d
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  int RectangleGeometry; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v17; // eax
  CBaseObject *v18; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = (*((_DWORD *)this + 8) & 0x1000) == 0;
  v18 = 0LL;
  if ( v3 )
  {
LABEL_15:
    v17 = CRenderDataVisual::ValidateVisual(this);
    v13 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xAAu, 0LL);
    goto LABEL_11;
  }
  if ( *((_DWORD *)this + 58) )
  {
LABEL_14:
    *((_DWORD *)this + 8) &= ~0x1000u;
    goto LABEL_15;
  }
  v4 = (struct CRectangleGeometryProxy **)((char *)this + 264);
  v5 = *((_DWORD *)this + 75);
  v6 = 0;
  v7 = *((_DWORD *)this + 76);
  v8 = *((_DWORD *)this + 77) - v5;
  v9 = *((_DWORD *)this + 74);
  if ( v8 >= 0 )
    v6 = v8;
  v10 = 0;
  v11 = v7 - v9;
  if ( v11 >= 0 )
    v10 = v11;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v9, v5, v10, v6, v4);
  v13 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0xA2u, 0LL);
    return v13;
  }
  v14 = CDrawGeometryInstruction::Create(*((struct CBaseLegacyMilBrushProxy **)this + 32), *v4, &v18);
  v13 = v14;
  if ( v14 >= 0 )
  {
    v1 = v18;
    v15 = CRenderDataVisual::AddInstruction(this, v18);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xA4u, 0LL);
      goto LABEL_11;
    }
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xA3u, 0LL);
  v1 = v18;
LABEL_11:
  if ( v1 )
    CBaseObject::Release(v1);
  return v13;
}
