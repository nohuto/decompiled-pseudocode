/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B750C
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B7790 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x1800130FC (-Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z @ 0x180013350 (-Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F27C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180099708 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180099724 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateDestinationRect(struct CRectangleGeometryProxy **this)
{
  _QWORD *v1; // rsi
  _DWORD *v3; // rbp
  int RectangleGeometry; // eax
  unsigned int v5; // ebx
  CRectResourceProxy *v6; // rsi
  int v7; // ecx
  int v8; // r8d
  CSecondaryWindowRepresentation *v9; // r11
  int v10; // eax
  float v11; // xmm2_4
  CSecondaryWindowRepresentation *v12; // rcx
  int v13; // r8d
  int v14; // r10d
  int v15; // eax
  int v16; // r9d
  int v17; // r9d
  FLOAT v18; // xmm1_4
  CSecondaryWindowRepresentation *v19; // rcx
  int v20; // eax
  CSecondaryWindowRepresentation *v21; // rcx
  int IconicHeight; // eax
  CSizeResourceProxy *v23; // rcx
  int v24; // eax
  struct D2D_SIZE_F v26; // [rsp+30h] [rbp-28h] BYREF
  struct D2D_RECT_F v27; // [rsp+38h] [rbp-20h] BYREF

  v1 = this + 38;
  v3 = this + 39;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry((const struct tagRECT *)(this + 39), this + 38);
  v5 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x8Fu, 0LL);
  }
  else if ( *v1 )
  {
    v6 = this[35];
    if ( v6 )
    {
      if ( this[36] )
      {
        v7 = (int)CSecondaryWindowRepresentation::GetIconicWidth(this[31]) / 2;
        v10 = 0;
        if ( v8 >= 0 )
          v10 = v8;
        v11 = (float)(v10 / 2 - v7 - *v3);
        v27.left = v11;
        v13 = (int)CSecondaryWindowRepresentation::GetIconicHeight(v9) / 2;
        v15 = 0;
        v17 = v16 - v14;
        if ( v17 >= 0 )
          v15 = v17;
        v18 = (float)(v15 / 2 - v13 - v14);
        v27.top = v18;
        v27.right = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v12) + v11;
        v27.bottom = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v19) + v18;
        v20 = CRectResourceProxy::Update(v6, &v27);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x9Du, 0LL);
        }
        else
        {
          v26.width = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(this[31]);
          IconicHeight = CSecondaryWindowRepresentation::GetIconicHeight(v21);
          v23 = this[36];
          v26.height = (float)IconicHeight;
          v24 = CSizeResourceProxy::Update(v23, &v26);
          v5 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xA3u, 0LL);
        }
      }
    }
  }
  return v5;
}
