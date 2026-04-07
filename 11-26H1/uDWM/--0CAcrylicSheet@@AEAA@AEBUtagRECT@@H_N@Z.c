/*
 * XREFs of ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x18008AD68
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18006FA80 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CAcrylicSheet *__fastcall CAcrylicSheet::CAcrylicSheet(CAcrylicSheet *this, const struct tagRECT *a2, int a3)
{
  __int64 v4; // r11
  _OWORD *v5; // r10
  CAcrylicSheet *result; // rax
  char v7; // r9

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)v4 = &CAcrylicSheet::`vftable';
  *(_OWORD *)(v4 + 184) = *v5;
  *(_QWORD *)(v4 + 200) = 0LL;
  *(_QWORD *)(v4 + 208) = 0LL;
  *(_QWORD *)(v4 + 216) = 0LL;
  *(_QWORD *)(v4 + 280) = 0LL;
  *(_QWORD *)(v4 + 344) = 0LL;
  result = (CAcrylicSheet *)v4;
  *(_BYTE *)(v4 + 353) = v7;
  *(_DWORD *)(v4 + 356) = a3;
  return result;
}
