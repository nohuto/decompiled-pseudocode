/*
 * XREFs of ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x18001CCAC
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18001CA94 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x18001EAA8 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800086EC (--0CContainerVisual@@IEAA@XZ.c)
 */

CTopLevelWindow *__fastcall CTopLevelWindow::CTopLevelWindow(CTopLevelWindow *this, struct CWindowData *a2, char a3)
{
  __int128 v6; // xmm0
  char v7; // cl

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)this = &CTopLevelWindow::`vftable';
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_DWORD *)this + 146) = 0;
  *(_OWORD *)((char *)this + 652) = 0LL;
  *((_DWORD *)this + 172) = -1;
  *((_DWORD *)this + 173) = -1082130432;
  *((_DWORD *)this + 174) = -1082130432;
  *((_DWORD *)this + 175) = -1082130432;
  *((_DWORD *)this + 176) = -1082130432;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_OWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 201) &= ~1u;
  *((_DWORD *)this + 147) = -1;
  *((_DWORD *)this + 148) = -1;
  *((_DWORD *)this + 149) = -1;
  *((_DWORD *)this + 150) = -1;
  v6 = *(_OWORD *)((char *)this + 588);
  v7 = *((_BYTE *)this + 200) | 2;
  *((_QWORD *)this + 96) = 0LL;
  *((_BYTE *)this + 200) = v7;
  *(_OWORD *)((char *)this + 620) = v6;
  *((_QWORD *)this + 97) = 0LL;
  *(_OWORD *)((char *)this + 604) = v6;
  *((_QWORD *)this + 98) = 0LL;
  *(_OWORD *)((char *)this + 636) = v6;
  *((_QWORD *)this + 99) = 0LL;
  *((_DWORD *)this + 200) = 0;
  *((_QWORD *)this + 101) = 0LL;
  *((_BYTE *)this + 816) = 0;
  *((_BYTE *)this + 832) = 0;
  *((_QWORD *)this + 89) = a2;
  *((_QWORD *)this + 90) = *((_QWORD *)a2 + 5);
  *((_BYTE *)this + 200) = (8 * a3) | v7 & 0xF7;
  if ( !a3 )
  {
    *((_QWORD *)a2 + 55) = this;
    CMILRefCountBase::AddRef(this);
  }
  return this;
}
