/*
 * XREFs of ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180017330
 * Callers:
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800172A4 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x1800218CC (--0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180022DC0 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::Create(struct CWindowData *a1, struct CTopLevelWindow **a2)
{
  CTopLevelWindow *v4; // rax
  CTopLevelWindow *v5; // rbx
  int v6; // edi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CTopLevelWindow *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (CTopLevelWindow *)DefaultHeap::AllocClear(0x320uLL);
  v11 = v4;
  if ( v4 )
    v5 = CTopLevelWindow::CTopLevelWindow(v4, a1, 0);
  else
    v5 = 0LL;
  v11 = v5;
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v11) )
  {
    v6 = -2147024882;
    v8 = 77LL;
  }
  else
  {
    v6 = CTopLevelWindow::Initialize(v5);
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    v8 = 79LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v6,
    v9);
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
