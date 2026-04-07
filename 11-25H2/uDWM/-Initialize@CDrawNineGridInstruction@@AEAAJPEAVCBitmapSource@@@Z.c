/*
 * XREFs of ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18001FC58
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x1800216A4 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001F500 (-CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18001F50C (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBr.c)
 *     ?GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800204B0 (-GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridLayout@@@Z @ 0x18002097C (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridL.c)
 *     ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x180020A28 (-HasSourceClip@CBitmapSource@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Initialize(struct _MARGINS *this, struct CBitmapSource *a2)
{
  unsigned int v4; // esi
  struct _MARGINS v5; // xmm0
  __int64 v6; // rdx
  unsigned int i; // edi
  int v8; // r12d
  int v9; // r15d
  CDesktopManager *v10; // rax
  int ImageLegacyMilBrushProxy; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // [rsp+50h] [rbp-59h]
  __int64 v17; // [rsp+68h] [rbp-41h]
  __int128 v18; // [rsp+70h] [rbp-39h] BYREF
  struct _MARGINS v19; // [rsp+80h] [rbp-29h] BYREF
  __int128 v20; // [rsp+90h] [rbp-19h] BYREF
  _OWORD v21[2]; // [rsp+A0h] [rbp-9h] BYREF

  memset(v21, 0, sizeof(v21));
  v4 = 0;
  *(_QWORD *)&v18 = 0LL;
  v5 = (struct _MARGINS)*((_OWORD *)a2 + 2);
  this[1] = v5;
  this[2] = *((struct _MARGINS *)a2 + 3);
  *((_QWORD *)&v18 + 1) = *((_QWORD *)a2 + 3);
  if ( CBitmapSource::HasSourceClip(a2) )
    *(_QWORD *)&v18 = *(_QWORD *)(v6 + 80);
  v19 = v5;
  CDrawNineGridInstruction::GetNineGridLayout(
    &v19,
    (const struct D2D_POINTANDSIZE_L *)&v18,
    (struct NineGridLayout *)v21);
  this[7].cyTopHeight = 0;
  for ( i = 0; i < 9; ++i )
  {
    v18 = 0LL;
    CDrawNineGridInstruction::GetCurrentRect(i, (struct NineGridLayout *)v21, (struct D2D_POINTANDSIZE_L *)&v18);
    v8 = DWORD2(v18);
    if ( SDWORD2(v18) <= 0 || (v9 = HIDWORD(v18), *((__int64 *)&v18 + 1) <= 0) )
    {
      *((_QWORD *)&this[3].cxLeftWidth + i) = 0LL;
    }
    else
    {
      v10 = CDesktopManager::s_pDesktopManagerInstance;
      ++this[7].cyTopHeight;
      ImageLegacyMilBrushProxy = CCompositor::CreateImageLegacyMilBrushProxy(
                                   *((CCompositor **)v10 + 6),
                                   (struct CImageLegacyMilBrushProxy **)&this[3] + i);
      v4 = ImageLegacyMilBrushProxy;
      if ( ImageLegacyMilBrushProxy < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ImageLegacyMilBrushProxy, 0x6Du, 0LL);
        return v4;
      }
      v20 = _xmm;
      *(float *)&v19.cxLeftWidth = (float)(int)v18;
      v13 = *((_QWORD *)&this[3].cxLeftWidth + i);
      *(float *)&v19.cxRightWidth = (float)SDWORD1(v18);
      v17 = *((_QWORD *)a2 + 2);
      *(float *)&v19.cyBottomHeight = (float)(DWORD1(v18) + v9);
      *(float *)&v19.cyTopHeight = (float)(v8 + v18);
      v14 = CImageLegacyMilBrushProxy::Update(
              v13,
              v12,
              (__int64)&v20,
              (__int64)&v19,
              0LL,
              1u,
              0,
              0LL,
              0LL,
              1,
              v16,
              1,
              1,
              v17);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x89u, 0LL);
        return v4;
      }
    }
  }
  return v4;
}
