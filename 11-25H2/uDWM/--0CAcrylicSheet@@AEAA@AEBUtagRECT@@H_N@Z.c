/*
 * XREFs of ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x18007E230
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18007E0B0 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAcrylicSheet *__fastcall CAcrylicSheet::CAcrylicSheet(CAcrylicSheet *this, const struct tagRECT *a2, int a3, char a4)
{
  CAcrylicSheet *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CAcrylicSheet::`vftable';
  *((struct tagRECT *)this + 15) = *a2;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  result = this;
  *((_BYTE *)this + 417) = a4;
  *((_DWORD *)this + 105) = a3;
  return result;
}
