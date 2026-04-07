/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18005478C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180005BA4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180009E4C (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18001CA94 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ @ 0x180054C98 (-MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054CA8 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180055818 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180055A98 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180055C44 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180056454 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800565A8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180056628 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800566B8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800568BC (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800569BC (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008F614 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v4; // rax
  struct CWindowData *v5; // rax
  int CentralImage; // eax
  unsigned int v7; // ebx
  CContainerVisual **v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  CContainerVisual **v11; // rsi
  CContainerVisual *v12; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  CWindowData *v16; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v4 = (CWindowData *)DefaultHeap::AllocClear(0x360uLL);
  v16 = v4;
  if ( v4 )
    v5 = CWindowData::CWindowData(v4);
  else
    v5 = 0LL;
  *((_QWORD *)this + 10) = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x64u, 0LL);
    return v7;
  }
  CentralImage = CTopLevelWindow::Create(v5, (CBaseObject ***)this + 11);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 105;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, v15, 0LL);
    return v7;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 488LL) = this;
  CTopLevelWindow::MakeIconicRepresentation(*((CTopLevelWindow **)this + 11));
  v8 = (CContainerVisual **)((char *)this + 104);
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 856LL) = *((_QWORD *)a2 + 107);
  v9 = *((_QWORD *)this + 9);
  v10 = *((_QWORD *)this + 10);
  *(_OWORD *)(v10 + 336) = *(_OWORD *)(v9 + 336);
  *(_OWORD *)(v10 + 352) = *(_OWORD *)(v9 + 352);
  *(_OWORD *)(v10 + 368) = *(_OWORD *)(v9 + 368);
  *(_OWORD *)(v10 + 384) = *(_OWORD *)(v9 + 384);
  *(_QWORD *)(v10 + 400) = *(_QWORD *)(v9 + 400);
  *(_BYTE *)(*((_QWORD *)this + 10) + 673LL) |= 0x10u;
  CentralImage = CCanvasVisual::Create((struct CCanvasVisual **)this + 13);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 133;
    goto LABEL_22;
  }
  CentralImage = CImage::Create((struct CImage **)this + 12);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 134;
    goto LABEL_22;
  }
  CentralImage = CContainerVisual::AddChild(*v8, *((struct CVisual **)this + 12));
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 135;
    goto LABEL_22;
  }
  v11 = (CContainerVisual **)((char *)this + 112);
  CentralImage = CContainerVisual::Create((struct CContainerVisual **)this + 14);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 136;
    goto LABEL_22;
  }
  CentralImage = CContainerVisual::AddChild(*v11, *v8);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 137;
    goto LABEL_22;
  }
  v12 = *v11;
  v13 = *((_QWORD *)this + 10);
  LODWORD(v16) = 0;
  *(_QWORD *)(v13 + 144) = *((_QWORD *)v12 + 2);
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
    this,
    (enum IconicRepresentationType *)&v16);
  CentralImage = CWindowIconic::SetRepresentationType(this, (unsigned int)v16, 0LL);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 145;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnColorizationUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 146;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnAlphaUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 147;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnTitleUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 148;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnIconUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 149;
    goto LABEL_22;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    CentralImage = CWindowIconic::SetBitmap(
                     this,
                     *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 432LL),
                     (*(_BYTE *)(*((_QWORD *)this + 9) + 674LL) & 4) != 0,
                     0);
    v7 = CentralImage;
    if ( CentralImage < 0 )
    {
      v15 = 152;
      goto LABEL_22;
    }
  }
  CentralImage = CWindowIconic::LoadCentralImage(this);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 154;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 155;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 156;
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this + 11), 1);
  return v7;
}
