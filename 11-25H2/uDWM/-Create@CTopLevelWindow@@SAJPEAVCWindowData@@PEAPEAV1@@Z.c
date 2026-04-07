/*
 * XREFs of ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18001CA94
 * Callers:
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18001C830 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180010A80 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x18001CCAC (--0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::Create(struct CWindowData *a1, CBaseObject ***a2)
{
  CTopLevelWindow *v4; // rax
  CBaseObject **v5; // rbx
  int v6; // edi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (CTopLevelWindow *)DefaultHeap::AllocClear(0x348uLL);
  v11 = v4;
  if ( v4 )
    v5 = (CBaseObject **)CTopLevelWindow::CTopLevelWindow(v4, a1, 0);
  else
    v5 = 0LL;
  v11 = v5;
  if ( (unsigned __int8)std::operator==<CWindowBorder::CCachedBorderBrush>(&v11) )
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
    CBaseObject::Release((CBaseObject *)v5);
  return (unsigned int)v6;
}
