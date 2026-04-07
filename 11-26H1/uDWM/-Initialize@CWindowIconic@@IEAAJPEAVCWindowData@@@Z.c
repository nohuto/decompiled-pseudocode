/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003852C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180017330 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ @ 0x180038A2C (-MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180038A3C (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180067874 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180073C2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18007D198 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18007E8F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18007FC1C (--0CWindowData@@QEAA@XZ.c)
 *     ??2CWindowData@@SAPEAX_K@Z @ 0x180085D04 (--2CWindowData@@SAPEAX_K@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180087CB0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?Create@CIconicSprite@@SAJPEAPEAV1@@Z @ 0x18008A110 (-Create@CIconicSprite@@SAJPEAPEAV1@@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008AD08 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008B8B8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v4; // rax
  struct CWindowData *v5; // rax
  int CentralImage; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  CContainerVisual **v10; // r14
  CContainerVisual **v11; // rsi
  unsigned int v13; // [rsp+20h] [rbp-28h]
  CWindowData *v14; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v4 = (CWindowData *)CWindowData::operator new((unsigned __int64)this);
  v14 = v4;
  if ( v4 )
    v5 = CWindowData::CWindowData(v4);
  else
    v5 = 0LL;
  *((_QWORD *)this + 10) = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x9Eu, 0LL);
    return v7;
  }
  CentralImage = CTopLevelWindow::Create(v5, (struct CTopLevelWindow **)this + 11);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 163;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, v13, 0LL);
    return v7;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 488LL) = this;
  CTopLevelWindow::MakeIconicRepresentation(*((CTopLevelWindow **)this + 11));
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 920LL) = *((_QWORD *)a2 + 115);
  v8 = *((_QWORD *)this + 9);
  v9 = *((_QWORD *)this + 10);
  *(_OWORD *)(v9 + 336) = *(_OWORD *)(v8 + 336);
  *(_OWORD *)(v9 + 352) = *(_OWORD *)(v8 + 352);
  *(_OWORD *)(v9 + 368) = *(_OWORD *)(v8 + 368);
  *(_OWORD *)(v9 + 384) = *(_OWORD *)(v8 + 384);
  *(_QWORD *)(v9 + 400) = *(_QWORD *)(v8 + 400);
  *(_BYTE *)(*((_QWORD *)this + 10) + 737LL) |= 0x10u;
  v10 = (CContainerVisual **)((char *)this + 104);
  CentralImage = CIconicSprite::Create((struct CIconicSprite **)this + 13);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 191;
    goto LABEL_22;
  }
  CentralImage = CImage::Create((struct CImage **)this + 12);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 192;
    goto LABEL_22;
  }
  CentralImage = CContainerVisual::AddChild(*v10, *((struct CVisual **)this + 12));
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 193;
    goto LABEL_22;
  }
  v11 = (CContainerVisual **)((char *)this + 112);
  CentralImage = CContainerVisual::Create((struct CContainerVisual **)this + 14);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 194;
    goto LABEL_22;
  }
  CentralImage = CContainerVisual::AddChild(*v11, *v10);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 195;
    goto LABEL_22;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 144LL) = *((_QWORD *)*v11 + 2);
  LODWORD(v14) = 0;
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
    this,
    (enum IconicRepresentationType *)&v14);
  CentralImage = CWindowIconic::SetRepresentationType(this, (unsigned int)v14, 0LL);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 203;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnColorizationUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 204;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnAlphaUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 205;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnTitleUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 206;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnIconUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 207;
    goto LABEL_22;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    CentralImage = CWindowIconic::SetBitmap(
                     this,
                     *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 432LL),
                     (*(_BYTE *)(*((_QWORD *)this + 9) + 738LL) & 4) != 0,
                     0);
    v7 = CentralImage;
    if ( CentralImage < 0 )
    {
      v13 = 210;
      goto LABEL_22;
    }
  }
  CentralImage = CWindowIconic::LoadCentralImage(this);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 212;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 213;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v13 = 214;
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this + 11), 1);
  return v7;
}
