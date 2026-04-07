/*
 * XREFs of ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x1800235C0
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180024460 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180034670 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x1800218CC (--0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180022DC0 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::CloneForNewWindowData(
        __int64 a1,
        struct CWindowData *a2,
        unsigned int a3,
        struct CContainerVisualProxy ***a4)
{
  CTopLevelWindow *v8; // rax
  struct CContainerVisualProxy **v9; // rbx
  int v10; // edi
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (CTopLevelWindow *)DefaultHeap::AllocClear(0x320uLL);
  v15 = v8;
  if ( v8 )
    v9 = (struct CContainerVisualProxy **)CTopLevelWindow::CTopLevelWindow(v8, a2);
  else
    v9 = 0LL;
  v15 = v9;
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v15) )
  {
    v10 = -2147024882;
    v12 = 5249LL;
  }
  else
  {
    v10 = CTopLevelWindow::Initialize(v9);
    if ( v10 < 0 )
    {
      v12 = 5250LL;
    }
    else
    {
      v10 = CTopLevelWindow::InitializeVisualTreeClone(a1, v9, a3);
      if ( v10 >= 0 )
      {
        *a4 = v9;
        return 0LL;
      }
      v12 = 5251LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v10,
    v13);
  if ( v9 )
    CBaseObject::Release((CBaseObject *)v9);
  return (unsigned int)v10;
}
