/*
 * XREFs of ??0CButton@@IEAA@XZ @ 0x18005D1EC
 * Callers:
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18005D110 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x1800211A8 (--0CCanvasVisual@@IEAA@XZ.c)
 */

CButton *__fastcall CButton::CButton(CButton *this)
{
  __int64 v1; // r11
  CButton *result; // rax

  CCanvasVisual::CCanvasVisual(this);
  *(_BYTE *)(v1 + 184) |= 1u;
  *(_QWORD *)v1 = &CButton::`vftable';
  *(_QWORD *)(v1 + 192) = 0LL;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_QWORD *)(v1 + 216) = 0LL;
  *(_QWORD *)(v1 + 224) = 0LL;
  *(_DWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_DWORD *)(v1 + 264) = 0;
  *(_DWORD *)(v1 + 280) = 1065353216;
  *(_DWORD *)(v1 + 296) = 1065353216;
  *(_DWORD *)(v1 + 300) = 1065353216;
  result = (CButton *)v1;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  return result;
}
