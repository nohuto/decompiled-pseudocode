/*
 * XREFs of ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x1800218CC
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180017330 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x1800235C0 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CTopLevelWindow *__fastcall CTopLevelWindow::CTopLevelWindow(CTopLevelWindow *this, struct CWindowData *a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int128 v4; // xmm0
  char v5; // cl
  char v6; // r9

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)v2 = &CTopLevelWindow::`vftable';
  *(_QWORD *)(v2 + 188) = 0LL;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_QWORD *)(v2 + 248) = 0LL;
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_QWORD *)(v2 + 264) = 0LL;
  *(_QWORD *)(v2 + 272) = 0LL;
  *(_QWORD *)(v2 + 280) = 0LL;
  *(_QWORD *)(v2 + 464) = 0LL;
  *(_QWORD *)(v2 + 504) = 0LL;
  *(_QWORD *)(v2 + 512) = 0LL;
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_QWORD *)(v2 + 528) = 0LL;
  *(_QWORD *)(v2 + 536) = 0LL;
  *(_QWORD *)(v2 + 544) = 0LL;
  *(_QWORD *)(v2 + 552) = 0LL;
  *(_QWORD *)(v2 + 560) = 0LL;
  *(_DWORD *)(v2 + 568) = 0;
  *(_OWORD *)(v2 + 636) = 0LL;
  *(_DWORD *)(v2 + 672) = -1;
  *(_DWORD *)(v2 + 676) = -1082130432;
  *(_DWORD *)(v2 + 680) = -1082130432;
  *(_DWORD *)(v2 + 684) = -1082130432;
  *(_DWORD *)(v2 + 688) = -1082130432;
  *(_QWORD *)(v2 + 704) = 0LL;
  *(_QWORD *)(v2 + 656) = 0LL;
  *(_QWORD *)(v2 + 664) = 0LL;
  *(_QWORD *)(v2 + 712) = 0LL;
  *(_QWORD *)(v2 + 720) = 0LL;
  *(_OWORD *)(v2 + 728) = 0LL;
  *(_BYTE *)(v2 + 184) |= 2u;
  *(_BYTE *)(v2 + 185) &= ~1u;
  *(_DWORD *)(v2 + 572) = -1;
  *(_DWORD *)(v2 + 576) = -1;
  *(_DWORD *)(v2 + 580) = -1;
  *(_DWORD *)(v2 + 584) = -1;
  v4 = *(_OWORD *)(v2 + 572);
  v5 = *(_BYTE *)(v2 + 184) & 0xF7;
  *(_QWORD *)(v2 + 744) = 0LL;
  *(_OWORD *)(v2 + 604) = v4;
  *(_QWORD *)(v2 + 752) = 0LL;
  *(_OWORD *)(v2 + 588) = v4;
  *(_DWORD *)(v2 + 760) = 0;
  *(_OWORD *)(v2 + 620) = v4;
  *(_QWORD *)(v2 + 768) = 0LL;
  *(_BYTE *)(v2 + 776) = 0;
  *(_BYTE *)(v2 + 792) = 0;
  *(_QWORD *)(v2 + 696) = v3;
  *(_QWORD *)(v2 + 704) = *(_QWORD *)(v3 + 40);
  *(_BYTE *)(v2 + 184) = (8 * v6) | v5;
  if ( !v6 )
  {
    *(_QWORD *)(v3 + 440) = v2;
    CBaseObject::AddRef((CBaseObject *)v2);
  }
  return (CTopLevelWindow *)v2;
}
